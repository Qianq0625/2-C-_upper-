/********************************************************************************
** Form generated from reading UI file 'network.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORK_H
#define UI_NETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_network
{
public:
    QLabel *label;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QLabel *label_9;

    void setupUi(QWidget *network)
    {
        if (network->objectName().isEmpty())
            network->setObjectName(QStringLiteral("network"));
        network->resize(781, 635);
        label = new QLabel(network);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 71, 31));
        label_2 = new QLabel(network);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 131, 17));
        radioButton = new QRadioButton(network);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(40, 80, 112, 23));
        radioButton_2 = new QRadioButton(network);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(40, 110, 112, 23));
        radioButton_3 = new QRadioButton(network);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(40, 140, 112, 23));
        label_3 = new QLabel(network);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 177, 101, 20));
        groupBox = new QGroupBox(network);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 210, 741, 361));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 50, 67, 17));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 80, 67, 17));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 110, 67, 17));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 200, 121, 17));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(90, 230, 121, 17));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(390, 50, 261, 25));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(390, 80, 261, 25));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(390, 110, 261, 25));
        lineEdit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setEnabled(false);
        lineEdit_4->setGeometry(QRect(390, 190, 261, 25));
        lineEdit_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setEnabled(false);
        lineEdit_5->setGeometry(QRect(390, 220, 261, 25));
        lineEdit_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(548, 270, 101, 31));
        label_9 = new QLabel(network);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 180, 16, 16));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/no.png")));
        label_9->setScaledContents(true);
        label_9->setOpenExternalLinks(true);

        retranslateUi(network);

        QMetaObject::connectSlotsByName(network);
    } // setupUi

    void retranslateUi(QWidget *network)
    {
        network->setWindowTitle(QApplication::translate("network", "Form", nullptr));
        label->setText(QApplication::translate("network", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\347\275\221\347\273\234</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("network", "\351\200\211\346\213\251\344\275\240\347\232\204\347\275\221\347\273\234\346\226\271\346\263\225", nullptr));
        radioButton->setText(QApplication::translate("network", "DHCP", nullptr));
        radioButton_2->setText(QApplication::translate("network", "\351\235\231\346\200\201\345\234\260\345\235\200", nullptr));
        radioButton_3->setText(QApplication::translate("network", "\347\246\201\347\224\250\347\275\221\347\273\234", nullptr));
        label_3->setText(QApplication::translate("network", "\346\234\252\350\277\236\346\216\245\347\275\221\347\273\234\357\274\201", nullptr));
        groupBox->setTitle(QApplication::translate("network", "\347\275\221\347\273\234\350\257\246\347\273\206\350\256\276\347\275\256:", nullptr));
        label_4->setText(QApplication::translate("network", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        label_5->setText(QApplication::translate("network", "\345\255\220\347\275\221\346\216\251\347\240\201\357\274\232", nullptr));
        label_6->setText(QApplication::translate("network", "\351\273\230\350\256\244\347\275\221\345\205\263\357\274\232", nullptr));
        label_7->setText(QApplication::translate("network", "\351\246\226\351\200\211DNS\346\234\215\345\212\241\345\231\250\357\274\232", nullptr));
        label_8->setText(QApplication::translate("network", "\345\244\207\347\224\250DNS\346\234\215\345\212\241\345\231\250\357\274\232", nullptr));
        lineEdit->setText(QApplication::translate("network", "0.0.0.0", nullptr));
        lineEdit_2->setText(QApplication::translate("network", "0.0.0.0", nullptr));
        lineEdit_3->setText(QApplication::translate("network", "0.0.0.0", nullptr));
        lineEdit_4->setText(QApplication::translate("network", "0.0.0.0", nullptr));
        lineEdit_5->setText(QApplication::translate("network", "0.0.0.0", nullptr));
        pushButton->setText(QApplication::translate("network", "\345\272\224\347\224\250", nullptr));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class network: public Ui_network {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORK_H
