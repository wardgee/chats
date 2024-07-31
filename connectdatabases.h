#ifndef CONNECTDATABASES_H
#define CONNECTDATABASES_H

#include <QString>
#include <QObject>
#include <QSqlDatabase>
#include "qdebug.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <qsqlquery.h>


class ConnectDatabases : public QObject
{
    Q_OBJECT
public:
    explicit ConnectDatabases(QString ip ,int port,QString database_name ,
                              QString username ,QString password,QString type = "QMYSQL",QObject *parent = nullptr);

    QMap<QString,QString> queryUser(const QString& account,const QString& password);
    bool upUser(QString username,QString password,QString frients_id = "");
    int changeUserFriendsList(QString friend_id,int chose);
    int findUser(const QString account);
    bool addFriend(const int self_id ,const QString& ids);
    QMap<QString,QString> findUserBaseId(int id);
    ~ConnectDatabases();
private:
    QSqlDatabase db;
signals:


};

#endif // CONNECTDATABASES_H
