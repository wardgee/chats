#include "login.h"
#include "register.h"
#include "ui_login.h"

#include <chatsList.h>
#include <ConnectDatabases.h>
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_register_2_clicked(){
    Register *r = new Register(this);
    this->hide();
    r->show();

}

void Login::on_login_clicked()
{
    // 获取用户名和密码输入
    QString account = ui->account->text();
    QString password = ui->password->text();

    // 非空判断
    if (account.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "登录失败", "用户名和密码不能为空！");
        return;
    }

    ConnectDatabases db;


    QMap<QString, QString> user = db.queryUser(account, password);
    if (user.isEmpty()) {
        // 用户不存在
        QMessageBox::warning(this, "登录失败", "用户名或密码错误！");
    } else {
        // 用户存在，进行后续操作
        QMessageBox::information(this, "登录成功", "欢迎回来，" + user.value("username") + "！");

        ChatsList *l = new ChatsList(user);
        l->show();
        this->close(); // 关闭登录窗口
    }

}

