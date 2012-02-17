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

/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c UDisksDeviceInterface org.freedesktop.UDisks.Device.xml -p udisksdeviceinterface.h:udisksdeviceinterface.cpp
 *
 * qdbusxml2cpp is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef UDISKSDEVICEINTERFACE_H_1329492618
#define UDISKSDEVICEINTERFACE_H_1329492618

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.freedesktop.UDisks.Device
 */
class UDisksDeviceInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.UDisks.Device"; }

public:
    UDisksDeviceInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~UDisksDeviceInterface();

    Q_PROPERTY(QString DeviceAutomountHint READ deviceAutomountHint)
    inline QString deviceAutomountHint() const
    { return qvariant_cast< QString >(property("DeviceAutomountHint")); }

    Q_PROPERTY(qulonglong DeviceBlockSize READ deviceBlockSize)
    inline qulonglong deviceBlockSize() const
    { return qvariant_cast< qulonglong >(property("DeviceBlockSize")); }

    Q_PROPERTY(qulonglong DeviceDetectionTime READ deviceDetectionTime)
    inline qulonglong deviceDetectionTime() const
    { return qvariant_cast< qulonglong >(property("DeviceDetectionTime")); }

    Q_PROPERTY(QString DeviceFile READ deviceFile)
    inline QString deviceFile() const
    { return qvariant_cast< QString >(property("DeviceFile")); }

    Q_PROPERTY(QStringList DeviceFileById READ deviceFileById)
    inline QStringList deviceFileById() const
    { return qvariant_cast< QStringList >(property("DeviceFileById")); }

    Q_PROPERTY(QStringList DeviceFileByPath READ deviceFileByPath)
    inline QStringList deviceFileByPath() const
    { return qvariant_cast< QStringList >(property("DeviceFileByPath")); }

    Q_PROPERTY(QString DeviceFilePresentation READ deviceFilePresentation)
    inline QString deviceFilePresentation() const
    { return qvariant_cast< QString >(property("DeviceFilePresentation")); }

    Q_PROPERTY(bool DeviceIsDrive READ deviceIsDrive)
    inline bool deviceIsDrive() const
    { return qvariant_cast< bool >(property("DeviceIsDrive")); }

    Q_PROPERTY(bool DeviceIsLinuxDmmp READ deviceIsLinuxDmmp)
    inline bool deviceIsLinuxDmmp() const
    { return qvariant_cast< bool >(property("DeviceIsLinuxDmmp")); }

    Q_PROPERTY(bool DeviceIsLinuxDmmpComponent READ deviceIsLinuxDmmpComponent)
    inline bool deviceIsLinuxDmmpComponent() const
    { return qvariant_cast< bool >(property("DeviceIsLinuxDmmpComponent")); }

    Q_PROPERTY(bool DeviceIsLinuxLoop READ deviceIsLinuxLoop)
    inline bool deviceIsLinuxLoop() const
    { return qvariant_cast< bool >(property("DeviceIsLinuxLoop")); }

    Q_PROPERTY(bool DeviceIsLinuxLvm2LV READ deviceIsLinuxLvm2LV)
    inline bool deviceIsLinuxLvm2LV() const
    { return qvariant_cast< bool >(property("DeviceIsLinuxLvm2LV")); }

    Q_PROPERTY(bool DeviceIsLinuxLvm2PV READ deviceIsLinuxLvm2PV)
    inline bool deviceIsLinuxLvm2PV() const
    { return qvariant_cast< bool >(property("DeviceIsLinuxLvm2PV")); }

    Q_PROPERTY(bool DeviceIsLinuxMd READ deviceIsLinuxMd)
    inline bool deviceIsLinuxMd() const
    { return qvariant_cast< bool >(property("DeviceIsLinuxMd")); }

    Q_PROPERTY(bool DeviceIsLinuxMdComponent READ deviceIsLinuxMdComponent)
    inline bool deviceIsLinuxMdComponent() const
    { return qvariant_cast< bool >(property("DeviceIsLinuxMdComponent")); }

    Q_PROPERTY(bool DeviceIsLuks READ deviceIsLuks)
    inline bool deviceIsLuks() const
    { return qvariant_cast< bool >(property("DeviceIsLuks")); }

    Q_PROPERTY(bool DeviceIsLuksCleartext READ deviceIsLuksCleartext)
    inline bool deviceIsLuksCleartext() const
    { return qvariant_cast< bool >(property("DeviceIsLuksCleartext")); }

    Q_PROPERTY(bool DeviceIsMediaAvailable READ deviceIsMediaAvailable)
    inline bool deviceIsMediaAvailable() const
    { return qvariant_cast< bool >(property("DeviceIsMediaAvailable")); }

    Q_PROPERTY(bool DeviceIsMediaChangeDetected READ deviceIsMediaChangeDetected)
    inline bool deviceIsMediaChangeDetected() const
    { return qvariant_cast< bool >(property("DeviceIsMediaChangeDetected")); }

    Q_PROPERTY(bool DeviceIsMediaChangeDetectionInhibitable READ deviceIsMediaChangeDetectionInhibitable)
    inline bool deviceIsMediaChangeDetectionInhibitable() const
    { return qvariant_cast< bool >(property("DeviceIsMediaChangeDetectionInhibitable")); }

    Q_PROPERTY(bool DeviceIsMediaChangeDetectionInhibited READ deviceIsMediaChangeDetectionInhibited)
    inline bool deviceIsMediaChangeDetectionInhibited() const
    { return qvariant_cast< bool >(property("DeviceIsMediaChangeDetectionInhibited")); }

    Q_PROPERTY(bool DeviceIsMediaChangeDetectionPolling READ deviceIsMediaChangeDetectionPolling)
    inline bool deviceIsMediaChangeDetectionPolling() const
    { return qvariant_cast< bool >(property("DeviceIsMediaChangeDetectionPolling")); }

    Q_PROPERTY(bool DeviceIsMounted READ deviceIsMounted)
    inline bool deviceIsMounted() const
    { return qvariant_cast< bool >(property("DeviceIsMounted")); }

    Q_PROPERTY(bool DeviceIsOpticalDisc READ deviceIsOpticalDisc)
    inline bool deviceIsOpticalDisc() const
    { return qvariant_cast< bool >(property("DeviceIsOpticalDisc")); }

    Q_PROPERTY(bool DeviceIsPartition READ deviceIsPartition)
    inline bool deviceIsPartition() const
    { return qvariant_cast< bool >(property("DeviceIsPartition")); }

    Q_PROPERTY(bool DeviceIsPartitionTable READ deviceIsPartitionTable)
    inline bool deviceIsPartitionTable() const
    { return qvariant_cast< bool >(property("DeviceIsPartitionTable")); }

    Q_PROPERTY(bool DeviceIsReadOnly READ deviceIsReadOnly)
    inline bool deviceIsReadOnly() const
    { return qvariant_cast< bool >(property("DeviceIsReadOnly")); }

    Q_PROPERTY(bool DeviceIsRemovable READ deviceIsRemovable)
    inline bool deviceIsRemovable() const
    { return qvariant_cast< bool >(property("DeviceIsRemovable")); }

    Q_PROPERTY(bool DeviceIsSystemInternal READ deviceIsSystemInternal)
    inline bool deviceIsSystemInternal() const
    { return qvariant_cast< bool >(property("DeviceIsSystemInternal")); }

    Q_PROPERTY(qlonglong DeviceMajor READ deviceMajor)
    inline qlonglong deviceMajor() const
    { return qvariant_cast< qlonglong >(property("DeviceMajor")); }

    Q_PROPERTY(qulonglong DeviceMediaDetectionTime READ deviceMediaDetectionTime)
    inline qulonglong deviceMediaDetectionTime() const
    { return qvariant_cast< qulonglong >(property("DeviceMediaDetectionTime")); }

    Q_PROPERTY(qlonglong DeviceMinor READ deviceMinor)
    inline qlonglong deviceMinor() const
    { return qvariant_cast< qlonglong >(property("DeviceMinor")); }

    Q_PROPERTY(QStringList DeviceMountPaths READ deviceMountPaths)
    inline QStringList deviceMountPaths() const
    { return qvariant_cast< QStringList >(property("DeviceMountPaths")); }

    Q_PROPERTY(uint DeviceMountedByUid READ deviceMountedByUid)
    inline uint deviceMountedByUid() const
    { return qvariant_cast< uint >(property("DeviceMountedByUid")); }

    Q_PROPERTY(bool DevicePresentationHide READ devicePresentationHide)
    inline bool devicePresentationHide() const
    { return qvariant_cast< bool >(property("DevicePresentationHide")); }

    Q_PROPERTY(QString DevicePresentationIconName READ devicePresentationIconName)
    inline QString devicePresentationIconName() const
    { return qvariant_cast< QString >(property("DevicePresentationIconName")); }

    Q_PROPERTY(QString DevicePresentationName READ devicePresentationName)
    inline QString devicePresentationName() const
    { return qvariant_cast< QString >(property("DevicePresentationName")); }

    Q_PROPERTY(bool DevicePresentationNopolicy READ devicePresentationNopolicy)
    inline bool devicePresentationNopolicy() const
    { return qvariant_cast< bool >(property("DevicePresentationNopolicy")); }

    Q_PROPERTY(qulonglong DeviceSize READ deviceSize)
    inline qulonglong deviceSize() const
    { return qvariant_cast< qulonglong >(property("DeviceSize")); }

    Q_PROPERTY(QDBusObjectPath DriveAdapter READ driveAdapter)
    inline QDBusObjectPath driveAdapter() const
    { return qvariant_cast< QDBusObjectPath >(property("DriveAdapter")); }

    Q_PROPERTY(QByteArray DriveAtaSmartBlob READ driveAtaSmartBlob)
    inline QByteArray driveAtaSmartBlob() const
    { return qvariant_cast< QByteArray >(property("DriveAtaSmartBlob")); }

    Q_PROPERTY(bool DriveAtaSmartIsAvailable READ driveAtaSmartIsAvailable)
    inline bool driveAtaSmartIsAvailable() const
    { return qvariant_cast< bool >(property("DriveAtaSmartIsAvailable")); }

    Q_PROPERTY(QString DriveAtaSmartStatus READ driveAtaSmartStatus)
    inline QString driveAtaSmartStatus() const
    { return qvariant_cast< QString >(property("DriveAtaSmartStatus")); }

    Q_PROPERTY(qulonglong DriveAtaSmartTimeCollected READ driveAtaSmartTimeCollected)
    inline qulonglong driveAtaSmartTimeCollected() const
    { return qvariant_cast< qulonglong >(property("DriveAtaSmartTimeCollected")); }

    Q_PROPERTY(bool DriveCanDetach READ driveCanDetach)
    inline bool driveCanDetach() const
    { return qvariant_cast< bool >(property("DriveCanDetach")); }

    Q_PROPERTY(bool DriveCanSpindown READ driveCanSpindown)
    inline bool driveCanSpindown() const
    { return qvariant_cast< bool >(property("DriveCanSpindown")); }

    Q_PROPERTY(QString DriveConnectionInterface READ driveConnectionInterface)
    inline QString driveConnectionInterface() const
    { return qvariant_cast< QString >(property("DriveConnectionInterface")); }

    Q_PROPERTY(qulonglong DriveConnectionSpeed READ driveConnectionSpeed)
    inline qulonglong driveConnectionSpeed() const
    { return qvariant_cast< qulonglong >(property("DriveConnectionSpeed")); }

    Q_PROPERTY(bool DriveIsMediaEjectable READ driveIsMediaEjectable)
    inline bool driveIsMediaEjectable() const
    { return qvariant_cast< bool >(property("DriveIsMediaEjectable")); }

    Q_PROPERTY(bool DriveIsRotational READ driveIsRotational)
    inline bool driveIsRotational() const
    { return qvariant_cast< bool >(property("DriveIsRotational")); }

    Q_PROPERTY(QString DriveMedia READ driveMedia)
    inline QString driveMedia() const
    { return qvariant_cast< QString >(property("DriveMedia")); }

    Q_PROPERTY(QStringList DriveMediaCompatibility READ driveMediaCompatibility)
    inline QStringList driveMediaCompatibility() const
    { return qvariant_cast< QStringList >(property("DriveMediaCompatibility")); }

    Q_PROPERTY(QString DriveModel READ driveModel)
    inline QString driveModel() const
    { return qvariant_cast< QString >(property("DriveModel")); }

    Q_PROPERTY(QList<QDBusObjectPath> DrivePorts READ drivePorts)
    inline QList<QDBusObjectPath> drivePorts() const
    { return qvariant_cast< QList<QDBusObjectPath> >(property("DrivePorts")); }

    Q_PROPERTY(QString DriveRevision READ driveRevision)
    inline QString driveRevision() const
    { return qvariant_cast< QString >(property("DriveRevision")); }

    Q_PROPERTY(uint DriveRotationRate READ driveRotationRate)
    inline uint driveRotationRate() const
    { return qvariant_cast< uint >(property("DriveRotationRate")); }

    Q_PROPERTY(QString DriveSerial READ driveSerial)
    inline QString driveSerial() const
    { return qvariant_cast< QString >(property("DriveSerial")); }

    Q_PROPERTY(QList<QDBusObjectPath> DriveSimilarDevices READ driveSimilarDevices)
    inline QList<QDBusObjectPath> driveSimilarDevices() const
    { return qvariant_cast< QList<QDBusObjectPath> >(property("DriveSimilarDevices")); }

    Q_PROPERTY(QString DriveVendor READ driveVendor)
    inline QString driveVendor() const
    { return qvariant_cast< QString >(property("DriveVendor")); }

    Q_PROPERTY(QString DriveWriteCache READ driveWriteCache)
    inline QString driveWriteCache() const
    { return qvariant_cast< QString >(property("DriveWriteCache")); }

    Q_PROPERTY(QString DriveWwn READ driveWwn)
    inline QString driveWwn() const
    { return qvariant_cast< QString >(property("DriveWwn")); }

    Q_PROPERTY(QString IdLabel READ idLabel)
    inline QString idLabel() const
    { return qvariant_cast< QString >(property("IdLabel")); }

    Q_PROPERTY(QString IdType READ idType)
    inline QString idType() const
    { return qvariant_cast< QString >(property("IdType")); }

    Q_PROPERTY(QString IdUsage READ idUsage)
    inline QString idUsage() const
    { return qvariant_cast< QString >(property("IdUsage")); }

    Q_PROPERTY(QString IdUuid READ idUuid)
    inline QString idUuid() const
    { return qvariant_cast< QString >(property("IdUuid")); }

    Q_PROPERTY(QString IdVersion READ idVersion)
    inline QString idVersion() const
    { return qvariant_cast< QString >(property("IdVersion")); }

    Q_PROPERTY(QString JobId READ jobId)
    inline QString jobId() const
    { return qvariant_cast< QString >(property("JobId")); }

    Q_PROPERTY(bool JobInProgress READ jobInProgress)
    inline bool jobInProgress() const
    { return qvariant_cast< bool >(property("JobInProgress")); }

    Q_PROPERTY(uint JobInitiatedByUid READ jobInitiatedByUid)
    inline uint jobInitiatedByUid() const
    { return qvariant_cast< uint >(property("JobInitiatedByUid")); }

    Q_PROPERTY(bool JobIsCancellable READ jobIsCancellable)
    inline bool jobIsCancellable() const
    { return qvariant_cast< bool >(property("JobIsCancellable")); }

    Q_PROPERTY(double JobPercentage READ jobPercentage)
    inline double jobPercentage() const
    { return qvariant_cast< double >(property("JobPercentage")); }

    Q_PROPERTY(QDBusObjectPath LinuxDmmpComponentHolder READ linuxDmmpComponentHolder)
    inline QDBusObjectPath linuxDmmpComponentHolder() const
    { return qvariant_cast< QDBusObjectPath >(property("LinuxDmmpComponentHolder")); }

    Q_PROPERTY(QString LinuxDmmpName READ linuxDmmpName)
    inline QString linuxDmmpName() const
    { return qvariant_cast< QString >(property("LinuxDmmpName")); }

    Q_PROPERTY(QString LinuxDmmpParameters READ linuxDmmpParameters)
    inline QString linuxDmmpParameters() const
    { return qvariant_cast< QString >(property("LinuxDmmpParameters")); }

    Q_PROPERTY(QList<QDBusObjectPath> LinuxDmmpSlaves READ linuxDmmpSlaves)
    inline QList<QDBusObjectPath> linuxDmmpSlaves() const
    { return qvariant_cast< QList<QDBusObjectPath> >(property("LinuxDmmpSlaves")); }

    Q_PROPERTY(QString LinuxLoopFilename READ linuxLoopFilename)
    inline QString linuxLoopFilename() const
    { return qvariant_cast< QString >(property("LinuxLoopFilename")); }

    Q_PROPERTY(QString LinuxLvm2LVGroupName READ linuxLvm2LVGroupName)
    inline QString linuxLvm2LVGroupName() const
    { return qvariant_cast< QString >(property("LinuxLvm2LVGroupName")); }

    Q_PROPERTY(QString LinuxLvm2LVGroupUuid READ linuxLvm2LVGroupUuid)
    inline QString linuxLvm2LVGroupUuid() const
    { return qvariant_cast< QString >(property("LinuxLvm2LVGroupUuid")); }

    Q_PROPERTY(QString LinuxLvm2LVName READ linuxLvm2LVName)
    inline QString linuxLvm2LVName() const
    { return qvariant_cast< QString >(property("LinuxLvm2LVName")); }

    Q_PROPERTY(QString LinuxLvm2LVUuid READ linuxLvm2LVUuid)
    inline QString linuxLvm2LVUuid() const
    { return qvariant_cast< QString >(property("LinuxLvm2LVUuid")); }

    Q_PROPERTY(qulonglong LinuxLvm2PVGroupExtentSize READ linuxLvm2PVGroupExtentSize)
    inline qulonglong linuxLvm2PVGroupExtentSize() const
    { return qvariant_cast< qulonglong >(property("LinuxLvm2PVGroupExtentSize")); }

    Q_PROPERTY(QStringList LinuxLvm2PVGroupLogicalVolumes READ linuxLvm2PVGroupLogicalVolumes)
    inline QStringList linuxLvm2PVGroupLogicalVolumes() const
    { return qvariant_cast< QStringList >(property("LinuxLvm2PVGroupLogicalVolumes")); }

    Q_PROPERTY(QString LinuxLvm2PVGroupName READ linuxLvm2PVGroupName)
    inline QString linuxLvm2PVGroupName() const
    { return qvariant_cast< QString >(property("LinuxLvm2PVGroupName")); }

    Q_PROPERTY(QStringList LinuxLvm2PVGroupPhysicalVolumes READ linuxLvm2PVGroupPhysicalVolumes)
    inline QStringList linuxLvm2PVGroupPhysicalVolumes() const
    { return qvariant_cast< QStringList >(property("LinuxLvm2PVGroupPhysicalVolumes")); }

    Q_PROPERTY(qulonglong LinuxLvm2PVGroupSequenceNumber READ linuxLvm2PVGroupSequenceNumber)
    inline qulonglong linuxLvm2PVGroupSequenceNumber() const
    { return qvariant_cast< qulonglong >(property("LinuxLvm2PVGroupSequenceNumber")); }

    Q_PROPERTY(qulonglong LinuxLvm2PVGroupSize READ linuxLvm2PVGroupSize)
    inline qulonglong linuxLvm2PVGroupSize() const
    { return qvariant_cast< qulonglong >(property("LinuxLvm2PVGroupSize")); }

    Q_PROPERTY(qulonglong LinuxLvm2PVGroupUnallocatedSize READ linuxLvm2PVGroupUnallocatedSize)
    inline qulonglong linuxLvm2PVGroupUnallocatedSize() const
    { return qvariant_cast< qulonglong >(property("LinuxLvm2PVGroupUnallocatedSize")); }

    Q_PROPERTY(QString LinuxLvm2PVGroupUuid READ linuxLvm2PVGroupUuid)
    inline QString linuxLvm2PVGroupUuid() const
    { return qvariant_cast< QString >(property("LinuxLvm2PVGroupUuid")); }

    Q_PROPERTY(uint LinuxLvm2PVNumMetadataAreas READ linuxLvm2PVNumMetadataAreas)
    inline uint linuxLvm2PVNumMetadataAreas() const
    { return qvariant_cast< uint >(property("LinuxLvm2PVNumMetadataAreas")); }

    Q_PROPERTY(QString LinuxLvm2PVUuid READ linuxLvm2PVUuid)
    inline QString linuxLvm2PVUuid() const
    { return qvariant_cast< QString >(property("LinuxLvm2PVUuid")); }

    Q_PROPERTY(QDBusObjectPath LinuxMdComponentHolder READ linuxMdComponentHolder)
    inline QDBusObjectPath linuxMdComponentHolder() const
    { return qvariant_cast< QDBusObjectPath >(property("LinuxMdComponentHolder")); }

    Q_PROPERTY(QString LinuxMdComponentHomeHost READ linuxMdComponentHomeHost)
    inline QString linuxMdComponentHomeHost() const
    { return qvariant_cast< QString >(property("LinuxMdComponentHomeHost")); }

    Q_PROPERTY(QString LinuxMdComponentLevel READ linuxMdComponentLevel)
    inline QString linuxMdComponentLevel() const
    { return qvariant_cast< QString >(property("LinuxMdComponentLevel")); }

    Q_PROPERTY(QString LinuxMdComponentName READ linuxMdComponentName)
    inline QString linuxMdComponentName() const
    { return qvariant_cast< QString >(property("LinuxMdComponentName")); }

    Q_PROPERTY(int LinuxMdComponentNumRaidDevices READ linuxMdComponentNumRaidDevices)
    inline int linuxMdComponentNumRaidDevices() const
    { return qvariant_cast< int >(property("LinuxMdComponentNumRaidDevices")); }

    Q_PROPERTY(int LinuxMdComponentPosition READ linuxMdComponentPosition)
    inline int linuxMdComponentPosition() const
    { return qvariant_cast< int >(property("LinuxMdComponentPosition")); }

    Q_PROPERTY(QStringList LinuxMdComponentState READ linuxMdComponentState)
    inline QStringList linuxMdComponentState() const
    { return qvariant_cast< QStringList >(property("LinuxMdComponentState")); }

    Q_PROPERTY(QString LinuxMdComponentUuid READ linuxMdComponentUuid)
    inline QString linuxMdComponentUuid() const
    { return qvariant_cast< QString >(property("LinuxMdComponentUuid")); }

    Q_PROPERTY(QString LinuxMdComponentVersion READ linuxMdComponentVersion)
    inline QString linuxMdComponentVersion() const
    { return qvariant_cast< QString >(property("LinuxMdComponentVersion")); }

    Q_PROPERTY(QString LinuxMdHomeHost READ linuxMdHomeHost)
    inline QString linuxMdHomeHost() const
    { return qvariant_cast< QString >(property("LinuxMdHomeHost")); }

    Q_PROPERTY(bool LinuxMdIsDegraded READ linuxMdIsDegraded)
    inline bool linuxMdIsDegraded() const
    { return qvariant_cast< bool >(property("LinuxMdIsDegraded")); }

    Q_PROPERTY(QString LinuxMdLevel READ linuxMdLevel)
    inline QString linuxMdLevel() const
    { return qvariant_cast< QString >(property("LinuxMdLevel")); }

    Q_PROPERTY(QString LinuxMdName READ linuxMdName)
    inline QString linuxMdName() const
    { return qvariant_cast< QString >(property("LinuxMdName")); }

    Q_PROPERTY(int LinuxMdNumRaidDevices READ linuxMdNumRaidDevices)
    inline int linuxMdNumRaidDevices() const
    { return qvariant_cast< int >(property("LinuxMdNumRaidDevices")); }

    Q_PROPERTY(QList<QDBusObjectPath> LinuxMdSlaves READ linuxMdSlaves)
    inline QList<QDBusObjectPath> linuxMdSlaves() const
    { return qvariant_cast< QList<QDBusObjectPath> >(property("LinuxMdSlaves")); }

    Q_PROPERTY(QString LinuxMdState READ linuxMdState)
    inline QString linuxMdState() const
    { return qvariant_cast< QString >(property("LinuxMdState")); }

    Q_PROPERTY(QString LinuxMdSyncAction READ linuxMdSyncAction)
    inline QString linuxMdSyncAction() const
    { return qvariant_cast< QString >(property("LinuxMdSyncAction")); }

    Q_PROPERTY(double LinuxMdSyncPercentage READ linuxMdSyncPercentage)
    inline double linuxMdSyncPercentage() const
    { return qvariant_cast< double >(property("LinuxMdSyncPercentage")); }

    Q_PROPERTY(qulonglong LinuxMdSyncSpeed READ linuxMdSyncSpeed)
    inline qulonglong linuxMdSyncSpeed() const
    { return qvariant_cast< qulonglong >(property("LinuxMdSyncSpeed")); }

    Q_PROPERTY(QString LinuxMdUuid READ linuxMdUuid)
    inline QString linuxMdUuid() const
    { return qvariant_cast< QString >(property("LinuxMdUuid")); }

    Q_PROPERTY(QString LinuxMdVersion READ linuxMdVersion)
    inline QString linuxMdVersion() const
    { return qvariant_cast< QString >(property("LinuxMdVersion")); }

    Q_PROPERTY(QDBusObjectPath LuksCleartextSlave READ luksCleartextSlave)
    inline QDBusObjectPath luksCleartextSlave() const
    { return qvariant_cast< QDBusObjectPath >(property("LuksCleartextSlave")); }

    Q_PROPERTY(uint LuksCleartextUnlockedByUid READ luksCleartextUnlockedByUid)
    inline uint luksCleartextUnlockedByUid() const
    { return qvariant_cast< uint >(property("LuksCleartextUnlockedByUid")); }

    Q_PROPERTY(QDBusObjectPath LuksHolder READ luksHolder)
    inline QDBusObjectPath luksHolder() const
    { return qvariant_cast< QDBusObjectPath >(property("LuksHolder")); }

    Q_PROPERTY(QString NativePath READ nativePath)
    inline QString nativePath() const
    { return qvariant_cast< QString >(property("NativePath")); }

    Q_PROPERTY(bool OpticalDiscIsAppendable READ opticalDiscIsAppendable)
    inline bool opticalDiscIsAppendable() const
    { return qvariant_cast< bool >(property("OpticalDiscIsAppendable")); }

    Q_PROPERTY(bool OpticalDiscIsBlank READ opticalDiscIsBlank)
    inline bool opticalDiscIsBlank() const
    { return qvariant_cast< bool >(property("OpticalDiscIsBlank")); }

    Q_PROPERTY(bool OpticalDiscIsClosed READ opticalDiscIsClosed)
    inline bool opticalDiscIsClosed() const
    { return qvariant_cast< bool >(property("OpticalDiscIsClosed")); }

    Q_PROPERTY(uint OpticalDiscNumAudioTracks READ opticalDiscNumAudioTracks)
    inline uint opticalDiscNumAudioTracks() const
    { return qvariant_cast< uint >(property("OpticalDiscNumAudioTracks")); }

    Q_PROPERTY(uint OpticalDiscNumSessions READ opticalDiscNumSessions)
    inline uint opticalDiscNumSessions() const
    { return qvariant_cast< uint >(property("OpticalDiscNumSessions")); }

    Q_PROPERTY(uint OpticalDiscNumTracks READ opticalDiscNumTracks)
    inline uint opticalDiscNumTracks() const
    { return qvariant_cast< uint >(property("OpticalDiscNumTracks")); }

    Q_PROPERTY(qulonglong PartitionAlignmentOffset READ partitionAlignmentOffset)
    inline qulonglong partitionAlignmentOffset() const
    { return qvariant_cast< qulonglong >(property("PartitionAlignmentOffset")); }

    Q_PROPERTY(QStringList PartitionFlags READ partitionFlags)
    inline QStringList partitionFlags() const
    { return qvariant_cast< QStringList >(property("PartitionFlags")); }

    Q_PROPERTY(QString PartitionLabel READ partitionLabel)
    inline QString partitionLabel() const
    { return qvariant_cast< QString >(property("PartitionLabel")); }

    Q_PROPERTY(int PartitionNumber READ partitionNumber)
    inline int partitionNumber() const
    { return qvariant_cast< int >(property("PartitionNumber")); }

    Q_PROPERTY(qulonglong PartitionOffset READ partitionOffset)
    inline qulonglong partitionOffset() const
    { return qvariant_cast< qulonglong >(property("PartitionOffset")); }

    Q_PROPERTY(QString PartitionScheme READ partitionScheme)
    inline QString partitionScheme() const
    { return qvariant_cast< QString >(property("PartitionScheme")); }

    Q_PROPERTY(qulonglong PartitionSize READ partitionSize)
    inline qulonglong partitionSize() const
    { return qvariant_cast< qulonglong >(property("PartitionSize")); }

    Q_PROPERTY(QDBusObjectPath PartitionSlave READ partitionSlave)
    inline QDBusObjectPath partitionSlave() const
    { return qvariant_cast< QDBusObjectPath >(property("PartitionSlave")); }

    Q_PROPERTY(int PartitionTableCount READ partitionTableCount)
    inline int partitionTableCount() const
    { return qvariant_cast< int >(property("PartitionTableCount")); }

    Q_PROPERTY(QString PartitionTableScheme READ partitionTableScheme)
    inline QString partitionTableScheme() const
    { return qvariant_cast< QString >(property("PartitionTableScheme")); }

    Q_PROPERTY(QString PartitionType READ partitionType)
    inline QString partitionType() const
    { return qvariant_cast< QString >(property("PartitionType")); }

    Q_PROPERTY(QString PartitionUuid READ partitionUuid)
    inline QString partitionUuid() const
    { return qvariant_cast< QString >(property("PartitionUuid")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> DriveAtaSmartInitiateSelftest(const QString &test, const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(test) << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("DriveAtaSmartInitiateSelftest"), argumentList);
    }

    inline QDBusPendingReply<> DriveAtaSmartRefreshData(const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("DriveAtaSmartRefreshData"), argumentList);
    }

    inline QDBusPendingReply<> DriveDetach(const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("DriveDetach"), argumentList);
    }

    inline QDBusPendingReply<> DriveEject(const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("DriveEject"), argumentList);
    }

    inline QDBusPendingReply<QString> DriveInhibitPolling(const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("DriveInhibitPolling"), argumentList);
    }

    inline QDBusPendingReply<> DrivePollMedia()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("DrivePollMedia"), argumentList);
    }

    inline QDBusPendingReply<QString> DriveSetSpindownTimeout(int timeout_seconds, const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(timeout_seconds) << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("DriveSetSpindownTimeout"), argumentList);
    }

    inline QDBusPendingReply<> DriveUninhibitPolling(const QString &cookie)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(cookie);
        return asyncCallWithArgumentList(QLatin1String("DriveUninhibitPolling"), argumentList);
    }

    inline QDBusPendingReply<> DriveUnsetSpindownTimeout(const QString &cookie)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(cookie);
        return asyncCallWithArgumentList(QLatin1String("DriveUnsetSpindownTimeout"), argumentList);
    }

    inline QDBusPendingReply<bool> FilesystemCheck(const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("FilesystemCheck"), argumentList);
    }

    inline QDBusPendingReply<> FilesystemCreate(const QString &fstype, const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(fstype) << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("FilesystemCreate"), argumentList);
    }

    inline QDBusPendingReply<QString> FilesystemMount(const QString &filesystem_type, const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(filesystem_type) << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("FilesystemMount"), argumentList);
    }

    inline QDBusPendingReply<> FilesystemSetLabel(const QString &new_label)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(new_label);
        return asyncCallWithArgumentList(QLatin1String("FilesystemSetLabel"), argumentList);
    }

    inline QDBusPendingReply<> FilesystemUnmount(const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("FilesystemUnmount"), argumentList);
    }

    inline QDBusPendingReply<> JobCancel()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("JobCancel"), argumentList);
    }

    inline QDBusPendingReply<> LinuxLvm2LVStop(const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("LinuxLvm2LVStop"), argumentList);
    }

    inline QDBusPendingReply<> LinuxMdAddSpare(const QDBusObjectPath &component, const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(component) << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("LinuxMdAddSpare"), argumentList);
    }

    inline QDBusPendingReply<qulonglong> LinuxMdCheck(const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("LinuxMdCheck"), argumentList);
    }

    inline QDBusPendingReply<> LinuxMdExpand(const QList<QDBusObjectPath> &components, const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(components) << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("LinuxMdExpand"), argumentList);
    }

    inline QDBusPendingReply<> LinuxMdRemoveComponent(const QDBusObjectPath &component, const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(component) << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("LinuxMdRemoveComponent"), argumentList);
    }

    inline QDBusPendingReply<> LinuxMdStop(const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("LinuxMdStop"), argumentList);
    }

    inline QDBusPendingReply<> LuksChangePassphrase(const QString &current_passphrase, const QString &new_passphrase)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(current_passphrase) << qVariantFromValue(new_passphrase);
        return asyncCallWithArgumentList(QLatin1String("LuksChangePassphrase"), argumentList);
    }

    inline QDBusPendingReply<> LuksLock(const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("LuksLock"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath> LuksUnlock(const QString &passphrase, const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(passphrase) << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("LuksUnlock"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath> PartitionCreate(qulonglong offset, qulonglong size, const QString &type, const QString &label, const QStringList &flags, const QStringList &options, const QString &fstype, const QStringList &fsoptions)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(offset) << qVariantFromValue(size) << qVariantFromValue(type) << qVariantFromValue(label) << qVariantFromValue(flags) << qVariantFromValue(options) << qVariantFromValue(fstype) << qVariantFromValue(fsoptions);
        return asyncCallWithArgumentList(QLatin1String("PartitionCreate"), argumentList);
    }

    inline QDBusPendingReply<> PartitionDelete(const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("PartitionDelete"), argumentList);
    }

    inline QDBusPendingReply<> PartitionModify(const QString &type, const QString &label, const QStringList &flags)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(type) << qVariantFromValue(label) << qVariantFromValue(flags);
        return asyncCallWithArgumentList(QLatin1String("PartitionModify"), argumentList);
    }

    inline QDBusPendingReply<> PartitionTableCreate(const QString &scheme, const QStringList &options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(scheme) << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("PartitionTableCreate"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void Changed();
    void JobChanged(bool job_in_progress, bool job_is_cancellable, const QString &job_id, uint job_initiated_by_uid, double job_percentage);
};

namespace org {
  namespace freedesktop {
    namespace UDisks {
      typedef ::UDisksDeviceInterface Device;
    }
  }
}
#endif
