/********************************************************************************
** Form generated from reading UI file 'deleteuser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEUSER_H
#define UI_DELETEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeleteUser
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *delete_text;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *delete_btn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DeleteUser)
    {
        if (DeleteUser->objectName().isEmpty())
            DeleteUser->setObjectName(QString::fromUtf8("DeleteUser"));
        DeleteUser->resize(400, 156);
        verticalLayout = new QVBoxLayout(DeleteUser);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DeleteUser);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        delete_text = new QLineEdit(DeleteUser);
        delete_text->setObjectName(QString::fromUtf8("delete_text"));

        horizontalLayout->addWidget(delete_text);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        delete_btn = new QPushButton(DeleteUser);
        delete_btn->setObjectName(QString::fromUtf8("delete_btn"));

        horizontalLayout_2->addWidget(delete_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DeleteUser);

        QMetaObject::connectSlotsByName(DeleteUser);
    } // setupUi

    void retranslateUi(QDialog *DeleteUser)
    {
        DeleteUser->setWindowTitle(QCoreApplication::translate("DeleteUser", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DeleteUser", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        delete_btn->setText(QCoreApplication::translate("DeleteUser", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteUser: public Ui_DeleteUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEUSER_H
