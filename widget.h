#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QString ini_id,QWidget *parent = nullptr);
    ~Widget();


    QString getId() const;
    void setId(const QString &newId);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    QTcpSocket *c_socket; // 套接字对象
    QString id; // 想要建立对话连接的id 如果id是int类型的话要涉及大小端转换比较麻烦，所以直接用string类型
    const unsigned short port = 5000;  // 端口号
    const QString ip = "192.168.10.1"; // ip和端口号为服务器的，不可修改，所有信息经过服务器中转
};
#endif // WIDGET_H
