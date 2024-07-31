#ifndef DELETEUSER_H
#define DELETEUSER_H

#include <QDialog>

namespace Ui {
class DeleteUser;
}

class DeleteUser : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteUser(const int self_id,QList<int> remove_ids,QWidget *parent = nullptr);
    ~DeleteUser();

private slots:
    void on_delete_btn_clicked();

private:
    Ui::DeleteUser *ui;
    QList<int> id_list;
    int self_id;
};

#endif // DELETEUSER_H
