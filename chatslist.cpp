#include "chatslist.h"
#include "ui_chatslist.h"
#include "connectdatabases.h"
#include <qtoolbutton.h>
#include "adduserr.h"
#include "QVector"
ChatsList::ChatsList(const QMap<QString,QString> user,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChatsList),user(user)
{
    ui->setupUi(this);

    ConnectDatabases d("127.0.0.1", 3306, "chats_database", "root", "liweijiaw");
    QVector<QMap<QString,QString>> user_friends_vector;

    QString a = user.value("friends_id");
    QStringList i= a.split(",");

    for(auto it = i.begin();it != i.end();++ it){
        if(*it!=""){
            int id = (*it).toInt();
            friend_ids.append(id);
            user_friends_vector.append(d.findUserBaseId(id));
        }
    }




    for(auto user :user_friends_vector){
        QToolButton *btn = new QToolButton(this);
        btn->setIcon(QPixmap(":/imgs/1.jpg"));
        btn->setIconSize(QSize(70,70));

        btn->setText(user["username"]);
        btn->setAutoRaise(true);
        btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        ui->box_layout->addWidget(btn);
    }

}

ChatsList::~ChatsList()
{
    delete ui;
}

// 添加好友
void ChatsList::on_pushButton_clicked()
{
    int self_id = user["id"].toInt();
    AddUserr *window = new AddUserr(self_id,friend_ids);
    window->show();
}

