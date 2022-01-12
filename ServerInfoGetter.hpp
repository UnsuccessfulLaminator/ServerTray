#pragma once

#include <QObject>
#include <QString>



class ServerInfoGetter : public QObject {
    Q_OBJECT

    public slots:
        void getPlayers(const QString &addr);

    signals:
        void resultReady(const QString &result);
};
