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
    explicit AddUserr(const int self_id,QList<int> friend_ids,QWidget *parent = nullptr);
    ~AddUserr();

private slots:
    void on_add_friend_btn_clicked();

private:
    Ui::AddUserr *ui;
    QList<int> id_list;
    const int self_id;
};

#endif // ADDUSERR_H
