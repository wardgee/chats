#ifndef CHATSLIST_H
#define CHATSLIST_H

#include <QMap>
#include <QWidget>

namespace Ui {
class ChatsList;
}

class ChatsList : public QWidget
{
    Q_OBJECT

public:
    explicit ChatsList(const QMap<QString,QString> user,QWidget *parent = nullptr);
    ~ChatsList();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ChatsList *ui;
    QList<int> friend_ids;
    const QMap<QString,QString> user;
};

#endif // CHATSLIST_H
