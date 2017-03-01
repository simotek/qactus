/*
 *  Qactus - A Qt based OBS notifier
 *
 *  Copyright (C) 2010-2017 Javier Llorente <javier@opensuse.org>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) version 3.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef TRAYICON_H
#define TRAYICON_H

#include <QWidget>
#include <QtGui>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QAction>

class TrayIcon : public QSystemTrayIcon
{
Q_OBJECT
public:
    explicit TrayIcon(QWidget *parent = 0);
    QMenu *trayIconMenu;

private:
    bool notifyIcon;
    const QString NOTIFY_ICON = ":/obs_change.png";
    const QString NORMAL_ICON = ":/obs.png";

public slots:
    void toggleIcon(bool toggle);

};

#endif // TRAYICON_H
