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

    QMap<QString,QString>& queryUser(QString& account,QString& password);
    bool upsize(QString username,QString password,QString frients_id = "");
    int changeUserFriendsList(QString friend_id,int chose);
    int findUser(const QString account);
    ~ConnectDatabases();
private:
    QMap<QString,QString> user_map;// 用于保存查询出来的结果集
    QSqlDatabase db;
signals:


};

#endif // CONNECTDATABASES_H
