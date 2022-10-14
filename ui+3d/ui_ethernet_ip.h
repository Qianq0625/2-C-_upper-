/********************************************************************************
** Form generated from reading UI file 'ethernet_ip.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETHERNET_IP_H
#define UI_ETHERNET_IP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ethernet_ip
{
public:
    QGroupBox *groupBox;
    QLabel *label_6;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_2;

    void setupUi(QWidget *ethernet_ip)
    {
        if (ethernet_ip->objectName().isEmpty())
            ethernet_ip->setObjectName(QStringLiteral("ethernet_ip"));
        ethernet_ip->resize(782, 621);
        groupBox = new QGroupBox(ethernet_ip);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, -20, 781, 641));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 520, 291, 17));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(50, 340, 241, 25));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 230, 341, 41));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 460, 191, 17));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 40, 21, 21));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 291, 41));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(420, 230, 331, 41));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 420, 301, 17));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 490, 221, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 310, 281, 17));

        retranslateUi(ethernet_ip);

        QMetaObject::connectSlotsByName(ethernet_ip);
    } // setupUi

    void retranslateUi(QWidget *ethernet_ip)
    {
        ethernet_ip->setWindowTitle(QApplication::translate("ethernet_ip", "Form", nullptr));
        groupBox->setTitle(QString());
        label_6->setText(QApplication::translate("ethernet_ip", "\347\273\277\350\211\262\350\241\250\347\244\272\346\234\272\345\231\250\344\272\272\345\267\262\350\277\236\346\216\245EtherNet/IP\346\211\253\346\217\217\344\273\252", nullptr));
        comboBox->setItemText(0, QApplication::translate("ethernet_ip", "\346\232\202\345\201\234", nullptr));

        pushButton_2->setText(QApplication::translate("ethernet_ip", "\345\220\257\347\224\250", nullptr));
        label_4->setText(QApplication::translate("ethernet_ip", "\347\201\260\350\211\262\350\241\250\347\244\272\346\255\244\345\212\237\350\203\275\345\267\262\347\246\201\347\224\250", nullptr));
        pushButton->setText(QString());
        label->setText(QApplication::translate("ethernet_ip", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\344\273\245\345\244\252\347\275\221/IP \351\200\202\351\205\215\345\231\250\357\274\232\345\267\262\347\246\201\347\224\250</span></p></body></html>", nullptr));
        pushButton_3->setText(QApplication::translate("ethernet_ip", "\347\246\201\347\224\250", nullptr));
        label_3->setText(QApplication::translate("ethernet_ip", "LED\350\241\250\347\244\272\344\270\216EtherNet/IP\346\211\253\346\217\217\344\273\252\350\277\236\346\216\245\347\232\204\347\212\266\346\200\201\357\274\232", nullptr));
        label_5->setText(QApplication::translate("ethernet_ip", "\351\273\204\350\211\262\350\241\250\347\244\272\346\234\272\345\231\250\344\272\272\346\262\241\346\234\211\350\277\236\346\216\245\346\211\253\346\217\217\344\273\252", nullptr));
        label_2->setText(QApplication::translate("ethernet_ip", "\345\275\223\344\273\245\345\244\252\347\275\221/IP\346\211\253\346\217\217\344\273\252\350\277\236\346\216\245\344\270\242\345\244\261\346\227\266\347\250\213\345\272\217\345\212\250\344\275\234\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ethernet_ip: public Ui_ethernet_ip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETHERNET_IP_H
