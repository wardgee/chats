/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QFontComboBox *fontComboBox;
    QComboBox *comboBox;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QToolButton *toolButton_4;
    QToolButton *toolButton_3;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QTextEdit *data_txt;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidget;
    QLabel *online_status;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(941, 508);
        Widget->setMinimumSize(QSize(0, 100));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_3 = new QWidget(Widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(widget_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        frame_2 = new QFrame(widget_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        fontComboBox = new QFontComboBox(frame_2);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        horizontalLayout_2->addWidget(fontComboBox);

        comboBox = new QComboBox(frame_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        toolButton_2 = new QToolButton(frame_2);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setCheckable(true);

        horizontalLayout_2->addWidget(toolButton_2);

        toolButton = new QToolButton(frame_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setCheckable(true);

        horizontalLayout_2->addWidget(toolButton);

        toolButton_4 = new QToolButton(frame_2);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setCheckable(true);

        horizontalLayout_2->addWidget(toolButton_4);

        toolButton_3 = new QToolButton(frame_2);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));

        horizontalLayout_2->addWidget(toolButton_3);

        toolButton_5 = new QToolButton(frame_2);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));

        horizontalLayout_2->addWidget(toolButton_5);

        toolButton_6 = new QToolButton(frame_2);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));

        horizontalLayout_2->addWidget(toolButton_6);


        verticalLayout->addWidget(frame_2);


        verticalLayout_2->addWidget(widget_2);

        data_txt = new QTextEdit(widget_3);
        data_txt->setObjectName(QString::fromUtf8("data_txt"));
        data_txt->setMinimumSize(QSize(0, 0));
        data_txt->setMaximumSize(QSize(16777215, 100));
        data_txt->setSizeIncrement(QSize(0, 0));
        data_txt->setBaseSize(QSize(0, 0));

        verticalLayout_2->addWidget(data_txt);


        verticalLayout_3->addLayout(verticalLayout_2);

        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_3->addWidget(widget);


        horizontalLayout_3->addLayout(verticalLayout_3);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(widget_4);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setFrameShape(QFrame::NoFrame);

        verticalLayout_4->addWidget(tableWidget);


        horizontalLayout_3->addWidget(widget_4);


        gridLayout->addWidget(widget_3, 1, 0, 1, 1);

        online_status = new QLabel(Widget);
        online_status->setObjectName(QString::fromUtf8("online_status"));

        gridLayout->addWidget(online_status, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "5", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "6", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "7", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Widget", "8", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Widget", "9", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Widget", "10", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("Widget", "11", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("Widget", "12", nullptr));

        toolButton_2->setText(QCoreApplication::translate("Widget", "\345\212\240\347\262\227", nullptr));
        toolButton->setText(QCoreApplication::translate("Widget", "\345\200\276\346\226\234", nullptr));
        toolButton_4->setText(QCoreApplication::translate("Widget", "\344\270\213\345\210\222", nullptr));
        toolButton_3->setText(QCoreApplication::translate("Widget", "\351\242\234\350\211\262", nullptr));
        toolButton_5->setText(QCoreApplication::translate("Widget", "\346\226\207\344\273\266", nullptr));
        toolButton_6->setText(QCoreApplication::translate("Widget", "\347\205\247\347\211\207", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\234\250\347\272\277\344\272\272\346\225\260\357\274\2320\344\272\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "\346\210\220\345\221\230\357\274\232", nullptr));
        online_status->setText(QCoreApplication::translate("Widget", "  \345\257\271\346\226\271\344\270\215\345\234\250\347\272\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
