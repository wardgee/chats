/********************************************************************************
** Form generated from reading UI file 'chatslist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATSLIST_H
#define UI_CHATSLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatsList
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *box_layout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ChatsList)
    {
        if (ChatsList->objectName().isEmpty())
            ChatsList->setObjectName(QString::fromUtf8("ChatsList"));
        ChatsList->resize(263, 564);
        verticalLayout = new QVBoxLayout(ChatsList);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(ChatsList);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(ChatsList);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        toolBox = new QToolBox(ChatsList);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 241, 206));
        box_layout = new QVBoxLayout(page);
        box_layout->setObjectName(QString::fromUtf8("box_layout"));
        toolBox->addItem(page, QString::fromUtf8("\345\245\275\345\217\213"));

        verticalLayout->addWidget(toolBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ChatsList);

        toolBox->setCurrentIndex(0);
        toolBox->layout()->setSpacing(0);


        QMetaObject::connectSlotsByName(ChatsList);
    } // setupUi

    void retranslateUi(QWidget *ChatsList)
    {
        ChatsList->setWindowTitle(QCoreApplication::translate("ChatsList", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ChatsList", "\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ChatsList", "\345\210\240\351\231\244\345\245\275\345\217\213", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("ChatsList", "\345\245\275\345\217\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatsList: public Ui_ChatsList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATSLIST_H
