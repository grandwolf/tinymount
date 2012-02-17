/*
 * TinyMount -- simple disks mounter
 * Copyright (C) 2012 Mike Limansky
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "diskmanager.h"
#include "udisks/udisksinterface.h"
#include "udisks/udisksdeviceinterface.h"

static const char* UDISKS_SERVICE = "org.freedesktop.UDisks";
static const char* UDISKS_PATH = "/org/freedesktop/UDisks";

namespace {
    QString formatFileSize(qulonglong size)
    {
        static const QStringList units = QStringList()
                << "B" << "KB" << "MB" << "GB" << "TB";
        int i = 0;
        while (size > 1024 && i < units.size())
        {
            size /= 1024;
            i++;
        }

        return QString::number(size) + " " + units[i];
    }
}

DiskManager::DiskManager(QObject *parent) :
    QObject(parent)
{
    udisks = new UDisksInterface(UDISKS_SERVICE,
                                 UDISKS_PATH,
                                 QDBusConnection::systemBus(),
                                 this);

    connect(udisks, SIGNAL(DeviceAdded(QDBusObjectPath)), this, SLOT(onDeviceAdded(QDBusObjectPath)));
    connect(udisks, SIGNAL(DeviceRemoved(QDBusObjectPath)), this, SLOT(onDeviceRemoved(QDBusObjectPath)));

    QDBusPendingReply<QList<QDBusObjectPath> > devs =  udisks->EnumerateDevices();

    devs.waitForFinished();

    foreach(const QDBusObjectPath& d, devs.value())
    {
        DeviceInfo* info = deviceForPath(d);
        if (0 != info)
        {
            deviceCache.insert(d.path(), info);
        }
    }
}

DeviceInfo* DiskManager::deviceForPath(const QDBusObjectPath &path)
{
    qDebug() << "DiskManager::deviceForPath" << path.path();

    UDisksDeviceInterface dev(UDISKS_SERVICE, path.path(), QDBusConnection::systemBus());

    qDebug() << dev.nativePath();
    qDebug() << "\tsize =" << dev.deviceSize();
    qDebug() << "\tisDrive =" << dev.deviceIsDrive();
    qDebug() << "\tisVolume =" << dev.deviceIsPartition();
    qDebug() << "\tisRemovable =" << dev.deviceIsRemovable();
    qDebug() << "\tisMounted =" << dev.deviceIsMounted();
    qDebug() << "\tisOptical =" << dev.deviceIsOpticalDisc();
    qDebug() << "\tisSysInt =" << dev.deviceIsSystemInternal();
    qDebug() << "\ttype and usage =" << dev.idType() << dev.idUsage();
    qDebug() << "\tLabal =" << dev.idLabel();
    qDebug() << "\tplabel =" << dev.partitionLabel();
    qDebug() << "\tdpname =" << dev.devicePresentationName() << ", " << dev.devicePresentationIconName();
    qDebug() << "\tcompatibility" << dev.driveMediaCompatibility();


    DeviceInfo* d = 0;

    if (dev.deviceIsPartition())
    {
        d = new DeviceInfo;

        const QString& label = dev.idLabel();
        const QString& fn = dev.deviceFile();
        d->name = (label.isEmpty() ? fn.mid(fn.lastIndexOf('/') + 1) : label)
                + " " + formatFileSize(dev.deviceSize());
        d->type = DeviceInfo::Other;
        d->mounted = dev.deviceIsMounted();
    }

    return d;
}

void DiskManager::onDeviceAdded(const QDBusObjectPath &path)
{
    qDebug() << "Device added:" << path.path();

    DeviceInfo* d = deviceForPath(path);

    if (0 != d)
    {
        deviceCache.insert(path.path(), d);
        emit deviceAdded(*d);
    }
}

void DiskManager::onDeviceRemoved(const QDBusObjectPath &path)
{
    qDebug() << "Device removed:" << path.path();
    deviceCache.remove(path.path());
}
