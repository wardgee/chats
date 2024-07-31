#include "adduserr.h"
#include "connectdatabases.h"
#include "ui_adduserr.h"
#include <QMessageBox>
#include <QSqlQuery>

AddUserr::AddUserr(const int self_id,QList<int> friend_ids,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddUserr) , id_list(friend_ids),self_id(self_id)
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

    if(friend_id == 0){
        qDebug()<< "数据库查询出错！";
        return;
    }

    // 如果自己的好友列表中已有该id，退出
    if (id_list.contains(friend_id) || self_id==friend_id){
        QMessageBox::information(this,"提示","已经添加了该好友");
        return;
    }else if(friend_id == -1){
        QMessageBox::information(this,"提示","该用户不存在");
        return;
    }else{
        id_list.append(friend_id);

        // todo 更新数据库，把id_list转换为string再插入数据库
        QString id_list_string("");
        for(auto it = id_list.begin();it != id_list.end(); ++it){
            id_list_string+=QString::number(*it)+",";
            qDebug() << *it;
        }

        if(d.addFriend(self_id,id_list_string)){
           QMessageBox::information(this,"提示","添加成功");
        }

        return;
    }

}

