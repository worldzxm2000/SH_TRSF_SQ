/********************************************************************************
** Form generated from reading UI file 'setparamdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPARAMDLG_H
#define UI_SETPARAMDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include"MyButton.h"
QT_BEGIN_NAMESPACE

class Ui_SetParamDlg
{
public:
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QScrollArea *ScrollArea_MinBtn;
    QWidget *ScrollAreaWidgetContents_MinBtn;
    MyButton *MinBtn;
    QScrollArea *ScrollArea_CloseBtn;
    QWidget *ScrollAreaWidgetContents_CloseBtn;
    MyButton *CloseBtn;
    QLabel *TiltleLabel;
    QLabel *TitleLabel_Name;
    QGroupBox *groupBox;
    QGroupBox *groupBox_down;
    QDateTimeEdit *BdateTimeEdit;
    QDateTimeEdit *EdateTimeEdit;
    QPushButton *DownBtn;
    QGroupBox *groupBox_time;
    QDateTimeEdit *RdateTimeEdit;
    QPushButton *RTimeBtn;
    QPushButton *WTimeBtn;
    QGroupBox *groupBox_IP;
    QPushButton *RIPBtn;
    QPushButton *WIPBtn;
    QLineEdit *DevicelineEdit_IP1;
    QLineEdit *DevicelineEdit_IP2;
    QLineEdit *DevicelineEdit_IP3;
    QLineEdit *DevicelineEdit_IP4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *DevicelineEdit_Port;
    QLabel *label_5;

    void setupUi(QWidget *SetParamDlg)
    {
        if (SetParamDlg->objectName().isEmpty())
            SetParamDlg->setObjectName(QStringLiteral("SetParamDlg"));
        SetParamDlg->resize(400, 310);
        QIcon icon;
        icon.addFile(QStringLiteral("../Image/png/Weather.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SetParamDlg->setWindowIcon(icon);
        SetParamDlg->setStyleSheet(QStringLiteral("background:rgb(77,77, 77);color:white"));
        groupBox_2 = new QGroupBox(SetParamDlg);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 381, 291));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        groupBox_2->setFont(font);
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(330, 10, 46, 26));
        groupBox_3->setFont(font);
        ScrollArea_MinBtn = new QScrollArea(groupBox_3);
        ScrollArea_MinBtn->setObjectName(QStringLiteral("ScrollArea_MinBtn"));
        ScrollArea_MinBtn->setGeometry(QRect(2, 3, 20, 20));
        ScrollArea_MinBtn->setFont(font);
        ScrollArea_MinBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_MinBtn = new QWidget();
        ScrollAreaWidgetContents_MinBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_MinBtn"));
        ScrollAreaWidgetContents_MinBtn->setGeometry(QRect(0, 0, 18, 18));
      	MinBtn = new MyButton("../Image/png/Mini.png", 1, ScrollAreaWidgetContents_MinBtn);
        MinBtn->setObjectName(QStringLiteral("MinBtn"));
        MinBtn->setGeometry(QRect(1, 1, 18, 18));
        MinBtn->setFont(font);
        ScrollArea_MinBtn->setWidget(ScrollAreaWidgetContents_MinBtn);
        ScrollArea_CloseBtn = new QScrollArea(groupBox_3);
        ScrollArea_CloseBtn->setObjectName(QStringLiteral("ScrollArea_CloseBtn"));
        ScrollArea_CloseBtn->setGeometry(QRect(24, 3, 20, 20));
        ScrollArea_CloseBtn->setFont(font);
        ScrollArea_CloseBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_CloseBtn = new QWidget();
        ScrollAreaWidgetContents_CloseBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_CloseBtn"));
        ScrollAreaWidgetContents_CloseBtn->setGeometry(QRect(0, 0, 18, 18));
        	CloseBtn = new MyButton("../Image/png/Close.png", 1, ScrollAreaWidgetContents_CloseBtn);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));
        CloseBtn->setGeometry(QRect(1, 1, 18, 18));
        CloseBtn->setFont(font);
        ScrollArea_CloseBtn->setWidget(ScrollAreaWidgetContents_CloseBtn);
        TiltleLabel = new QLabel(groupBox_2);
        TiltleLabel->setObjectName(QStringLiteral("TiltleLabel"));
        TiltleLabel->setGeometry(QRect(10, 10, 32, 32));
        TiltleLabel->setFont(font);
        TiltleLabel->setPixmap(QPixmap(QString::fromUtf8("../Image/png/control.png")));
        TitleLabel_Name = new QLabel(groupBox_2);
        TitleLabel_Name->setObjectName(QStringLiteral("TitleLabel_Name"));
        TitleLabel_Name->setGeometry(QRect(45, 15, 111, 16));
        TitleLabel_Name->setFont(font);
        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 45, 361, 231));
        groupBox->setFont(font);
        groupBox_down = new QGroupBox(groupBox);
        groupBox_down->setObjectName(QStringLiteral("groupBox_down"));
        groupBox_down->setGeometry(QRect(190, 110, 161, 111));
        groupBox_down->setFont(font);
        BdateTimeEdit = new QDateTimeEdit(groupBox_down);
        BdateTimeEdit->setObjectName(QStringLiteral("BdateTimeEdit"));
        BdateTimeEdit->setGeometry(QRect(10, 20, 141, 22));
        BdateTimeEdit->setFont(font);
        BdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        EdateTimeEdit = new QDateTimeEdit(groupBox_down);
        EdateTimeEdit->setObjectName(QStringLiteral("EdateTimeEdit"));
        EdateTimeEdit->setGeometry(QRect(10, 50, 141, 22));
        EdateTimeEdit->setFont(font);
        EdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        DownBtn = new QPushButton(groupBox_down);
        DownBtn->setObjectName(QStringLiteral("DownBtn"));
        DownBtn->setGeometry(QRect(30, 80, 75, 23));
        DownBtn->setFont(font);
        groupBox_time = new QGroupBox(groupBox);
        groupBox_time->setObjectName(QStringLiteral("groupBox_time"));
        groupBox_time->setGeometry(QRect(10, 110, 171, 111));
        groupBox_time->setFont(font);
        RdateTimeEdit = new QDateTimeEdit(groupBox_time);
        RdateTimeEdit->setObjectName(QStringLiteral("RdateTimeEdit"));
        RdateTimeEdit->setGeometry(QRect(10, 30, 151, 22));
        RdateTimeEdit->setFont(font);
        RdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        RTimeBtn = new QPushButton(groupBox_time);
        RTimeBtn->setObjectName(QStringLiteral("RTimeBtn"));
        RTimeBtn->setGeometry(QRect(10, 70, 75, 23));
        RTimeBtn->setFont(font);
        WTimeBtn = new QPushButton(groupBox_time);
        WTimeBtn->setObjectName(QStringLiteral("WTimeBtn"));
        WTimeBtn->setGeometry(QRect(90, 70, 75, 23));
        WTimeBtn->setFont(font);
        groupBox_IP = new QGroupBox(groupBox);
        groupBox_IP->setObjectName(QStringLiteral("groupBox_IP"));
        groupBox_IP->setGeometry(QRect(10, 10, 341, 81));
        groupBox_IP->setFont(font);
        RIPBtn = new QPushButton(groupBox_IP);
        RIPBtn->setObjectName(QStringLiteral("RIPBtn"));
        RIPBtn->setGeometry(QRect(10, 50, 75, 23));
        RIPBtn->setFont(font);
        WIPBtn = new QPushButton(groupBox_IP);
        WIPBtn->setObjectName(QStringLiteral("WIPBtn"));
        WIPBtn->setGeometry(QRect(100, 50, 75, 23));
        WIPBtn->setFont(font);
        DevicelineEdit_IP1 = new QLineEdit(groupBox_IP);
        DevicelineEdit_IP1->setObjectName(QStringLiteral("DevicelineEdit_IP1"));
        DevicelineEdit_IP1->setGeometry(QRect(10, 20, 41, 20));
        DevicelineEdit_IP1->setFont(font);
        DevicelineEdit_IP2 = new QLineEdit(groupBox_IP);
        DevicelineEdit_IP2->setObjectName(QStringLiteral("DevicelineEdit_IP2"));
        DevicelineEdit_IP2->setGeometry(QRect(70, 20, 41, 20));
        DevicelineEdit_IP2->setFont(font);
        DevicelineEdit_IP3 = new QLineEdit(groupBox_IP);
        DevicelineEdit_IP3->setObjectName(QStringLiteral("DevicelineEdit_IP3"));
        DevicelineEdit_IP3->setGeometry(QRect(130, 20, 41, 20));
        DevicelineEdit_IP3->setFont(font);
        DevicelineEdit_IP4 = new QLineEdit(groupBox_IP);
        DevicelineEdit_IP4->setObjectName(QStringLiteral("DevicelineEdit_IP4"));
        DevicelineEdit_IP4->setGeometry(QRect(190, 20, 41, 20));
        DevicelineEdit_IP4->setFont(font);
        label_2 = new QLabel(groupBox_IP);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(57, 25, 10, 12));
        label_2->setFont(font);
        label_3 = new QLabel(groupBox_IP);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(118, 25, 10, 12));
        label_3->setFont(font);
        label_4 = new QLabel(groupBox_IP);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(177, 25, 10, 12));
        label_4->setFont(font);
        DevicelineEdit_Port = new QLineEdit(groupBox_IP);
        DevicelineEdit_Port->setObjectName(QStringLiteral("DevicelineEdit_Port"));
        DevicelineEdit_Port->setGeometry(QRect(250, 20, 71, 20));
        DevicelineEdit_Port->setFont(font);
        label_5 = new QLabel(groupBox_IP);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(235, 25, 10, 12));
        label_5->setFont(font);

        retranslateUi(SetParamDlg);

        QMetaObject::connectSlotsByName(SetParamDlg);
    } // setupUi

    void retranslateUi(QWidget *SetParamDlg)
    {
        SetParamDlg->setWindowTitle(QApplication::translate("SetParamDlg", "\345\234\237\345\243\244\346\260\264\345\210\206\350\247\202\346\265\213\344\273\252\350\256\276\345\244\207\346\216\247\345\210\266", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
        MinBtn->setText(QApplication::translate("SetParamDlg", "PushButton", nullptr));
        CloseBtn->setText(QApplication::translate("SetParamDlg", "PushButton", nullptr));
        TiltleLabel->setText(QString());
        TitleLabel_Name->setText(QApplication::translate("SetParamDlg", "\345\234\237\345\243\244\346\260\264\345\210\206\350\247\202\346\265\213\344\273\252", nullptr));
        groupBox->setTitle(QString());
        groupBox_down->setTitle(QApplication::translate("SetParamDlg", "\346\225\260\346\215\256\350\241\245\346\212\204", nullptr));
        DownBtn->setText(QApplication::translate("SetParamDlg", "\350\241\245\346\212\204\346\225\260\346\215\256", nullptr));
        groupBox_time->setTitle(QApplication::translate("SetParamDlg", "\350\256\276\345\244\207\346\227\266\351\227\264", nullptr));
        RTimeBtn->setText(QApplication::translate("SetParamDlg", "\350\257\273\345\217\226\346\227\266\351\222\237", nullptr));
        WTimeBtn->setText(QApplication::translate("SetParamDlg", "\350\256\276\347\275\256\346\227\266\351\222\237", nullptr));
        groupBox_IP->setTitle(QApplication::translate("SetParamDlg", "IP\347\253\257\345\217\243", nullptr));
        RIPBtn->setText(QApplication::translate("SetParamDlg", "\350\257\273\345\217\226IP", nullptr));
        WIPBtn->setText(QApplication::translate("SetParamDlg", "\350\256\276\347\275\256IP", nullptr));
        label_2->setText(QApplication::translate("SetParamDlg", ".", nullptr));
        label_3->setText(QApplication::translate("SetParamDlg", ".", nullptr));
        label_4->setText(QApplication::translate("SetParamDlg", ".", nullptr));
        label_5->setText(QApplication::translate("SetParamDlg", "\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetParamDlg: public Ui_SetParamDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPARAMDLG_H
