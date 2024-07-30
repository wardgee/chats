#include "widget.h"
#include "ui_widget.h"

#include <QHostAddress>

Widget::Widget(QString ini_id,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget),id(ini_id)
{
    ui->setupUi(this);
    ui->online_status->setStyleSheet("color: red;");

    c_socket = new QTcpSocket(this);
    c_socket->connectToHost(QHostAddress(ip),port);
    c_socket->write(id.toUtf8());// 发送id告诉服务端想和谁建立连接


    connect(c_socket,&QTcpSocket::readyRead,this,[=](){

        QByteArray data_return =  c_socket->readAll();

        ui->textBrowser->append("服务器："+data_return);

    });

    connect(c_socket,&QTcpSocket::disconnected,this,[=](){

        c_socket->close();
        c_socket->deleteLater();
        ui->textBrowser->append("服务器已断开连接");
        ui->online_status->setText("对方不在线");
        ui->online_status->setStyleSheet("color: red;");// 连接成功变成绿色
    });


    connect(c_socket,&QTcpSocket::connected,this,[=](){
        ui->textBrowser->append("连接成功");
        ui->online_status->setText("对方在线，快来一起聊天吧");
        ui->online_status->setStyleSheet("color: green;");// 连接成功变成绿色
    });

}

Widget::~Widget()
{
    delete ui;
}

// 发送信息
void Widget::on_pushButton_clicked()
{
    QString data_txt = ui->data_txt->toPlainText(); // 获取文本信息
    c_socket->write(data_txt.toUtf8());
    ui->textBrowser->append("client: "+data_txt);

}

QString Widget::getId() const
{
    return id;
}

void Widget::setId(const QString &newId)
{
    id = newId;
}

