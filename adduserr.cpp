#include "adduserr.h"
#include "connectdatabases.h"
#include "ui_adduserr.h"
#include <QMessageBox>
#include <QSqlQuery>

AddUserr::AddUserr(QList<int>& friend_ids,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddUserr) , id_list(friend_ids)
{
    ui->setupUi(this);
}

AddUserr::~AddUserr()
{
    delete ui;
}



void AddUserr::on_add_friend_btn_clicked()
{

    QString friend_account = ui->account->text();
    ConnectDatabases d("127.0.0.1", 3306, "chats_database", "root", "liweijiaw");
    int friend_id =  d.findUser(friend_account);// 得到要添加的用户的id

    // 如果自己的好友列表中已有该id，退出
    if (id_list.contains(friend_id)){
        QMessageBox::information(this,"提示","已经添加了该好友");
        return;
    }else{
        id_list.append(friend_id);
        // todo 更新数据库，把id_list转换为string再插入数据库
    }


}

