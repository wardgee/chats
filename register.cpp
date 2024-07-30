#include "register.h"

#include <ConnectDatabases.h>
Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);


}

Register::~Register()
{
    delete ui;
}

// 获取注册信息
void Register::on_pushButton_clicked()
{
    QString account = ui->lineEdit->text(); // 获取账号
    QString password = ui->lineEdit_pw->text(); // 获取密码
    QString passwrod_confirm = ui->lineEdit_pw_confirm->text(); // 获取确认密码

    if(account== "" || password== ""){
        QMessageBox::warning(this,"warning","请输入账号或密码");
        return;
    }

    if(password!=passwrod_confirm){
        QMessageBox::warning(this,"warning","两次密码不正确，请重新输入");
        ui->lineEdit_pw_confirm->clear();
        return;
    }

    // 连接数据库
    ConnectDatabases d("127.0.0.1",3306,"chats_database","root","liweijiaw");
    if(d.upsize(account,password)){// 插入到数据库
        QMessageBox::information(this,"通知","注册成功！点击返回登录页面");
        this->close();
        parentWidget()->show();
    }else{
        QMessageBox::critical(this,"error","注册出现未知错误，请联系软件管理员");
    }

    return;


}
