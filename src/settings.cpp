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

#include "settings.h"
#include <QSettings>

static const char* SHOW_SYSTEM_DISKS = "ShowSystemDisks";
static const char* HIDE_ICON = "HideIcon";
static const char* MOUNT_AUTOMATICALY = "MountAutomaticaly";
static const char* ITEM_FORMAT = "ItemFormat";

static const char* NOTIFICATIONS = "Notifications";
static const char* NTF_DEVICES = "Devices";
static const char* NTF_MOUNT = "Mount";
#ifdef WITH_LIBNOTIFY
static const char* USE_LIBNOTIFY = "UseLibNotify";
#endif

static const char* UNMOUNT = "Unmount";
static const char* DETACH = "Detach";
static const char* FORCE_UNMOUNT = "ForceUnmount";

static const char* DEFAULT_ITEM_FORMAT = "%name% (%fs%) %size%";

SettingsManager::SettingsManager()
{
    readSettings();
}

SettingsManager& SettingsManager::instance()
{
    static SettingsManager settings;
    return settings;
}

void SettingsManager::readSettings()
{
    QSettings s("tinymount", "tinymount");
    settings.showSystemDisks = s.value(SHOW_SYSTEM_DISKS, true).toBool();
    settings.hideIcon = s.value(HIDE_ICON, false).toBool();
    settings.mountAutomaticaly = s.value(MOUNT_AUTOMATICALY, false).toBool();
    settings.itemFormat = s.value(ITEM_FORMAT, DEFAULT_ITEM_FORMAT).toString();

    s.beginGroup(NOTIFICATIONS);
    settings.deviceNotifications = s.value(NTF_DEVICES, true).toBool();
    settings.mountNotifications= s.value(NTF_MOUNT, true).toBool();
#ifdef WITH_LIBNOTIFY
    settings.useLibnotify = s.value(USE_LIBNOTIFY, true).toBool();
#endif

    s.beginGroup(UNMOUNT);
    settings.detachRemovable = s.value(DETACH, true).toBool();
    settings.forceUnmount = s.value(FORCE_UNMOUNT, false).toBool();
}

void SettingsManager::save(const Settings& newSettings)
{
    settings = newSettings;

    QSettings s("tinymount", "tinymount");
    s.setValue(SHOW_SYSTEM_DISKS, settings.showSystemDisks);
    s.setValue(HIDE_ICON, settings.hideIcon);
    s.setValue(MOUNT_AUTOMATICALY, settings.mountAutomaticaly);
    s.setValue(ITEM_FORMAT, settings.itemFormat);

    s.beginGroup(NOTIFICATIONS);
    s.setValue(NTF_DEVICES, settings.deviceNotifications);
    s.setValue(NTF_MOUNT, settings.mountNotifications);
#ifdef WITH_LIBNOTIFY
    s.setValue(USE_LIBNOTIFY, settings.useLibnotify);
#endif

    s.beginGroup(UNMOUNT);
    s.setValue(DETACH, settings.detachRemovable);
    s.setValue(FORCE_UNMOUNT, settings.forceUnmount);
}

QString SettingsManager::defaultItemFormat()
{
    return DEFAULT_ITEM_FORMAT;
}
