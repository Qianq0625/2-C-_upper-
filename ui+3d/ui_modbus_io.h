/********************************************************************************
** Form generated from reading UI file 'modbus_io.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODBUS_IO_H
#define UI_MODBUS_IO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Modbus_io
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_6;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QWidget *page_2;

    void setupUi(QWidget *Modbus_io)
    {
        if (Modbus_io->objectName().isEmpty())
            Modbus_io->setObjectName(QStringLiteral("Modbus_io"));
        Modbus_io->resize(781, 590);
        label = new QLabel(Modbus_io);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, -10, 291, 71));
        pushButton = new QPushButton(Modbus_io);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 10, 71, 41));
        stackedWidget = new QStackedWidget(Modbus_io);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 60, 781, 521));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 791, 551));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 160, 121, 23));
        checkBox->setChecked(false);
        checkBox->setTristate(false);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(0, 0, 781, 141));
        groupBox_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        groupBox_2->setAcceptDrops(false);
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 40, 21, 17));
        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(50, 30, 131, 31));
        lineEdit_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 70, 31, 31));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setEnabled(true);
        comboBox_2->setGeometry(QRect(130, 70, 141, 31));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_2->setEditable(true);
        lineEdit_5 = new QLineEdit(groupBox_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(280, 70, 61, 31));
        lineEdit_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(350, 70, 161, 31));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(720, 30, 51, 31));
        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(720, 70, 51, 31));
        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(720, 110, 51, 31));
        QIcon icon;
        icon.addFile(QStringLiteral("../../DEBUG/imagic/yes.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon);
        pushButton_9->setIconSize(QSize(20, 20));
        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(710, 160, 61, 61));
        pushButton_10->setIcon(icon);
        pushButton_10->setIconSize(QSize(32, 32));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(Modbus_io);

        QMetaObject::connectSlotsByName(Modbus_io);
    } // setupUi

    void retranslateUi(QWidget *Modbus_io)
    {
        Modbus_io->setWindowTitle(QApplication::translate("Modbus_io", "Form", nullptr));
        label->setText(QApplication::translate("Modbus_io", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">MODBUS\345\256\242\346\210\267\347\253\257IO\350\256\276\347\275\256</span></p></body></html>", nullptr));
        pushButton->setText(QString());
        groupBox->setTitle(QString());
        checkBox->setText(QApplication::translate("Modbus_io", "\346\230\276\347\244\272\351\253\230\347\272\247\351\200\211\351\241\271", nullptr));
        groupBox_2->setTitle(QApplication::translate("Modbus_io", "0.0.0.0", nullptr));
        label_3->setText(QApplication::translate("Modbus_io", "IP:", nullptr));
        lineEdit_4->setText(QApplication::translate("Modbus_io", "0.0.0.0", nullptr));
        pushButton_6->setText(QString());
        comboBox_2->setItemText(0, QApplication::translate("Modbus_io", "\350\257\267\351\200\211\346\213\251", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("Modbus_io", "\346\225\260\345\255\227\350\276\223\345\205\245", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("Modbus_io", "\346\225\260\345\255\227\350\276\223\345\207\272", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("Modbus_io", "\345\257\204\345\255\230\345\231\250\350\276\223\345\205\245", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("Modbus_io", "\345\257\204\345\255\230\345\231\250\350\276\223\345\207\272", nullptr));

        lineEdit_5->setText(QApplication::translate("Modbus_io", "0", nullptr));
        lineEdit_6->setText(QApplication::translate("Modbus_io", "MODBUS_1", nullptr));
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Modbus_io: public Ui_Modbus_io {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODBUS_IO_H
