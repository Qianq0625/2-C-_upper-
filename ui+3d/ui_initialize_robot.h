/********************************************************************************
** Form generated from reading UI file 'initialize_robot.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALIZE_ROBOT_H
#define UI_INITIALIZE_ROBOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Initialize_robot
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QGroupBox *groupBox;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QWidget *Initialize_robot)
    {
        if (Initialize_robot->objectName().isEmpty())
            Initialize_robot->setObjectName(QStringLiteral("Initialize_robot"));
        Initialize_robot->resize(1050, 760);
        label = new QLabel(Initialize_robot);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(460, 30, 131, 51));
        label_2 = new QLabel(Initialize_robot);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 80, 491, 21));
        label_3 = new QLabel(Initialize_robot);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 120, 67, 17));
        label_4 = new QLabel(Initialize_robot);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 160, 101, 31));
        label_5 = new QLabel(Initialize_robot);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(400, 120, 67, 17));
        lineEdit = new QLineEdit(Initialize_robot);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(350, 160, 113, 25));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton = new QPushButton(Initialize_robot);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 110, 31, 31));
        label_6 = new QLabel(Initialize_robot);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(470, 160, 67, 17));
        pushButton_2 = new QPushButton(Initialize_robot);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 220, 571, 41));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_3 = new QPushButton(Initialize_robot);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(670, 220, 271, 41));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_7 = new QLabel(Initialize_robot);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 340, 101, 21));
        lineEdit_2 = new QLineEdit(Initialize_robot);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(350, 330, 311, 31));
        pushButton_4 = new QPushButton(Initialize_robot);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(670, 330, 271, 31));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        groupBox = new QGroupBox(Initialize_robot);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 370, 571, 341));
        pushButton_5 = new QPushButton(Initialize_robot);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(670, 490, 271, 31));
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_6 = new QPushButton(Initialize_robot);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(670, 540, 271, 31));
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_7 = new QPushButton(Initialize_robot);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(750, 710, 291, 41));
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon;
        icon.addFile(QStringLiteral("../DEBUG/imagic/no.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon);
        pushButton_8 = new QPushButton(Initialize_robot);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(1000, 10, 41, 41));
        pushButton_8->setAutoFillBackground(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral("../DEBUG/imagic/help-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon1);
        pushButton_8->setIconSize(QSize(32, 32));
        pushButton_8->setFlat(true);

        retranslateUi(Initialize_robot);

        QMetaObject::connectSlotsByName(Initialize_robot);
    } // setupUi

    void retranslateUi(QWidget *Initialize_robot)
    {
        Initialize_robot->setWindowTitle(QApplication::translate("Initialize_robot", "Form", nullptr));
        label->setText(QApplication::translate("Initialize_robot", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">\345\210\235\345\247\213\345\214\226\346\234\272\345\231\250\344\272\272</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Initialize_robot", "\347\241\256\344\277\235\345\256\211\350\243\205\350\256\276\347\275\256\345\222\214\346\234\211\346\225\210\350\264\237\350\275\275\346\255\243\347\241\256\357\274\214\345\271\266\346\214\211\345\270\246\346\234\211\347\273\277\350\211\262\345\233\276\346\240\207\347\232\204\346\214\211\351\222\256\357\274\214\345\210\235\345\247\213\345\214\226\346\234\272\345\231\250\344\272\272\343\200\202", nullptr));
        label_3->setText(QApplication::translate("Initialize_robot", "\346\234\272\345\231\250\344\272\272", nullptr));
        label_4->setText(QApplication::translate("Initialize_robot", "\345\275\223\345\211\215\346\234\211\346\225\210\350\264\237\350\275\275", nullptr));
        label_5->setText(QApplication::translate("Initialize_robot", "\346\255\243\345\270\270", nullptr));
        lineEdit->setText(QApplication::translate("Initialize_robot", "0.00", nullptr));
        pushButton->setText(QString());
        label_6->setText(QApplication::translate("Initialize_robot", "kg", nullptr));
        pushButton_2->setText(QApplication::translate("Initialize_robot", "\345\220\257\345\212\250", nullptr));
        pushButton_3->setText(QApplication::translate("Initialize_robot", "\345\205\263", nullptr));
        label_7->setText(QApplication::translate("Initialize_robot", "\345\256\211\350\243\205\350\256\276\347\275\256\346\226\207\344\273\266", nullptr));
        lineEdit_2->setText(QApplication::translate("Initialize_robot", "default", nullptr));
        pushButton_4->setText(QApplication::translate("Initialize_robot", "\345\212\240\350\275\275\345\256\211\350\243\205\350\256\276\347\275\256", nullptr));
        groupBox->setTitle(QString());
        pushButton_5->setText(QApplication::translate("Initialize_robot", "\351\205\215\347\275\256TCP", nullptr));
        pushButton_6->setText(QApplication::translate("Initialize_robot", "\351\205\215\347\275\256\345\256\211\350\243\205\344\275\215\347\275\256", nullptr));
        pushButton_7->setText(QApplication::translate("Initialize_robot", "\351\200\200\345\207\272", nullptr));
        pushButton_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Initialize_robot: public Ui_Initialize_robot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALIZE_ROBOT_H
