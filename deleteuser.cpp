#include "deleteuser.h"
#include "ui_deleteuser.h"
#include "connectDatabases.h"

#include <QMessageBox>

DeleteUser::DeleteUser(const int self_id,QList<int> friend_ids,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeleteUser)
{
    this->id_list = friend_ids;
    this->self_id = self_id;
    ui->setupUi(this);
}

DeleteUser::~DeleteUser()
{
    delete ui;
}


void DeleteUser::on_delete_btn_clicked()
{
    QString friend_account = ui->delete_text->text();
    ConnectDatabases db;
    int friend_id = db.findUser(friend_account);// 得到要添加的用户的id

    if(friend_id == 0){
        qDebug()<< "数据库查询出错！";
        return;
    }

    // 如果自己的好友列表中已有该id，退出
    if (self_id==friend_id){
        QMessageBox::information(this,"提示","您没有这个好友");
        return;
    }else if(friend_id == -1){
        QMessageBox::information(this,"提示","该用户不存在");
        return;
    }else{
        id_list.removeOne(friend_id);

        // 新数据库，把id_list转换为string再插入数据库
        QString id_list_string("");
        for(auto it = id_list.begin();it != id_list.end(); ++it){
            id_list_string+=QString::number(*it)+",";
            qDebug() << *it;
        }

        if(db.updateFriendList(self_id,id_list_string)){
            QMessageBox::information(this,"提示","删除成功");
        }

        return;
    }
}

