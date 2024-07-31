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

    explicit ConnectDatabases(QString ip="127.0.0.1" ,int port=3306,QString database_name ="chats_database" ,
                              QString username ="root" ,QString password = "liweijiaw",QString type = "QMYSQL",QObject *parent = nullptr);

    QMap<QString,QString> queryUser(const QString& account,const QString& password);
    bool upUser(QString username,QString password,QString frients_id = "");
    int changeUserFriendsList(QString friend_id,int chose);
    int findUser(const QString account);
    bool updateFriendList(const int self_id ,const QString& ids);
    bool deleteFriend(const QString &account);
    QMap<QString,QString> findUserBaseId(int id);
    ~ConnectDatabases();
private:
    QSqlDatabase db;
signals:


};

#endif // CONNECTDATABASES_H
