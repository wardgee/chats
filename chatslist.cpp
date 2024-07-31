#include "chatslist.h"
#include "qdebug.h"
#include "ui_chatslist.h"
#include "connectdatabases.h"
#include <qtoolbutton.h>
#include "adduserr.h"

ChatsList::ChatsList(const QMap<QString,QString>& user,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChatsList),user(user)
{
    ui->setupUi(this);


    for(int i = 0;i<friend_ids.size();i++){
        QToolButton *btn = new QToolButton(this);
        btn->setIcon(QPixmap(":/imgs/1.jpg"));
        btn->setIconSize(QSize(70,70));

        btn->setText("111");
        btn->setAutoRaise(true);
        btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        ui->verticalLayout->addWidget(btn);
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

