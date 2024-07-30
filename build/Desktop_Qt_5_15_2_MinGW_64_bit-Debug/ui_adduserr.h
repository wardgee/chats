/********************************************************************************
** Form generated from reading UI file 'adduserr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERR_H
#define UI_ADDUSERR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUserr
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *account;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_friend_btn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AddUserr)
    {
        if (AddUserr->objectName().isEmpty())
            AddUserr->setObjectName(QString::fromUtf8("AddUserr"));
        AddUserr->resize(333, 112);
        gridLayout = new QGridLayout(AddUserr);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(AddUserr);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        account = new QLineEdit(AddUserr);
        account->setObjectName(QString::fromUtf8("account"));

        horizontalLayout->addWidget(account);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        widget = new QWidget(AddUserr);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        add_friend_btn = new QPushButton(widget);
        add_friend_btn->setObjectName(QString::fromUtf8("add_friend_btn"));

        horizontalLayout_2->addWidget(add_friend_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(AddUserr);

        QMetaObject::connectSlotsByName(AddUserr);
    } // setupUi

    void retranslateUi(QDialog *AddUserr)
    {
        AddUserr->setWindowTitle(QCoreApplication::translate("AddUserr", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddUserr", "\345\257\271\346\226\271\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        add_friend_btn->setText(QCoreApplication::translate("AddUserr", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUserr: public Ui_AddUserr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERR_H
