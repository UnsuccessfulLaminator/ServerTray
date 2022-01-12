#pragma once

#include <QApplication>
#include <QSystemTrayIcon>
#include <QThread>
#include "ServerInfoGetter.hpp"



class App : public QApplication {
    Q_OBJECT

    private:
        ServerInfoGetter sget;
        QIcon *mainIcon, *waitIcon;
        QSystemTrayIcon *tray;
        QThread sgetThread;
        bool waiting = false;
        QPoint tooltipPoint;

    public:
        App(int argc, char **argv);
        ~App();

    public slots:
        void iconActivated();
        void playersReceived(const QString &players);

    signals:
        void getPlayers(const QString &addr);
};
