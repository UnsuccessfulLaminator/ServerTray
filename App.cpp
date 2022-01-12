#include "App.hpp"
#include <QToolTip>
#include <QCursor>
#include <QString>
#include <QRect>



App::App(int argc, char **argv) : QApplication(argc, argv) {
    mainIcon = new QIcon("icon.png");
    waitIcon = new QIcon("wait.png");
    tray = new QSystemTrayIcon(*mainIcon, this);
    
    connect(tray, &QSystemTrayIcon::activated, this, &App::iconActivated);
    connect(this, &App::getPlayers, &sget, &ServerInfoGetter::getPlayers);
    connect(&sget, &ServerInfoGetter::resultReady, this, &App::playersReceived);

    tray->show();
    
    sget.moveToThread(&sgetThread);
    sgetThread.start();

    QToolTip::showText(QCursor::pos(), "Started");
}

App::~App() {
    sgetThread.quit();
    sgetThread.wait();

    delete mainIcon;
    delete waitIcon;
}

void App::iconActivated() {
    if(!waiting) {
        waiting = true;
        tooltipPoint = QCursor::pos();
        tray->setIcon(*waitIcon);
        
        emit getPlayers("lowpowergutter.aternos.me");
    }
}

void App::playersReceived(const QString &players) {
    tray->setIcon(*mainIcon);
    waiting = false;
    
    QToolTip::showText(tooltipPoint, players, nullptr, QRect(), 3000);
}
