#ifndef ADDUSERR_H
#define ADDUSERR_H

#include <QDialog>

namespace Ui {
class AddUserr;
}

class AddUserr : public QDialog
{
    Q_OBJECT

public:
    explicit AddUserr(QList<int>& friend_ids,QWidget *parent = nullptr);
    ~AddUserr();

private slots:
    void on_add_friend_btn_clicked();

private:
    Ui::AddUserr *ui;
    QList<int>& id_list;
};

#endif // ADDUSERR_H
