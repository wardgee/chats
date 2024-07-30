#include "connectdatabases.h"
#include <QSqlRecord>

// 把连接数据库，查询数据库的操作封装一遍
ConnectDatabases::ConnectDatabases(QString ip, int port, QString database_name,
                                   QString username, QString password,QString type, QObject *parent)
    : QObject{parent}
{
    // 1. 添加一个数据库实例
    db = QSqlDatabase::addDatabase(type); // QMYSQL是mysql的数据库引擎
    // 2. 得到实例对象之后需要初始化连接信息
    //    -- 服务器的IP, 端口, 数据库名, 用户名, 密码
    db.setHostName(ip);
    db.setPort(port);
    db.setDatabaseName(database_name);
    db.setUserName(username);
    db.setPassword(password);

    // 3. 连接数据库
    if(!db.open())
    {
        qDebug() << db.lastError().text(); // 连接未成功打印错误信息
        return;
    }
    else
    {
        qDebug() << "s数据库连接成功...";
    }
}

// 登录查询
QMap<QString,QString>& ConnectDatabases::queryUser(QString& account,QString& password)
{
    QSqlQuery query(db);
    QString sql = "select * from chats_users where username = :account and password = :password";

    query.prepare(sql);
    query.bindValue(":account", account);
    query.bindValue(":password", password);



    if(!query.exec())
    {
        qDebug()<< query.lastError();
    }


    // 遍历结果集
    if(query.next())
    {
        // 从当前记录中取出各个字段的值
        user_map.insert("id",query.value(0).toString());
        user_map.insert("username",query.value(1).toString());
        user_map.insert("password",query.value(2).toString());
        user_map.insert("friends_id",query.value(3).toString());

    }

    return user_map;
}

// 添加用户
bool ConnectDatabases::upsize(QString username,QString password,QString frients_id)
{
    QSqlQuery query(db);
    QString sql ="";

    if(frients_id == ""){
        // 4. 插入数据
        sql = "insert into chats_users (username, password) values (:username,:password)";

        query.prepare(sql);
        query.bindValue(":username", username);
        query.bindValue(":password", password);
    }else{
        sql = "insert into chats_users (username,password,frients_id) values(:username, :password, :frients_id)";
        query.prepare(sql); // 设置使用参数化

        // 绑定参数
        query.bindValue(":username", username);
        query.bindValue(":password", password);
        query.bindValue(":frients_id",frients_id);
    }



    db.transaction();// 开始事务
    if(query.exec())
    {
        db.commit();
        return true;
    }
    else
    {
        db.rollback();
        qDebug()<< query.lastError();
        return false;
    }
}

// 返回0：删除成功 返回1：添加成功 返回-1：没有这个好友
// chose = 1 添加好友 chose = 0 删除好友
int ConnectDatabases::changeUserFriendsList(QString friend_id, int chose)
{
    QString sql;
    if(chose == 1){

        sql = "update chats_users set frients_id = '9,3' where username = 'sdsddddd';";

    }
}

int ConnectDatabases::findUser(const QString account)
{
    QSqlQuery query(db);
    QString sql = "select * from chats_users where username = :account";

    query.prepare(sql);
    query.bindValue(":account",account);

    if(!query.exec()){
        qDebug()<< query.lastError();
        return 0;
    }

    if(query.next()){
        return query.value(0).toInt();
    }else{
        return -1;
    }
}


// 用户添加或删除好友


ConnectDatabases::~ConnectDatabases()
{
    db.close();
    qDebug()<< "与"+db.hostName()<<"的连接已关闭";
}
