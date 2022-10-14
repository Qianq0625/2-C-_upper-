/********************************************************************************
** Form generated from reading UI file 'password.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORD_H
#define UI_PASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_password
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_2;

    void setupUi(QWidget *password)
    {
        if (password->objectName().isEmpty())
            password->setObjectName(QStringLiteral("password"));
        password->resize(781, 671);
        label = new QLabel(password);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 101, 31));
        label_2 = new QLabel(password);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 67, 17));
        label_3 = new QLabel(password);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 160, 81, 17));
        lineEdit = new QLineEdit(password);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(550, 100, 181, 31));
        lineEdit_2 = new QLineEdit(password);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(550, 140, 181, 31));
        pushButton = new QPushButton(password);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(668, 190, 61, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_4 = new QLabel(password);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 260, 101, 41));
        label_5 = new QLabel(password);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 360, 67, 17));
        label_6 = new QLabel(password);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 450, 67, 17));
        label_7 = new QLabel(password);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 490, 81, 17));
        lineEdit_3 = new QLineEdit(password);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(550, 350, 181, 31));
        lineEdit_4 = new QLineEdit(password);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(550, 440, 181, 31));
        lineEdit_5 = new QLineEdit(password);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(550, 480, 181, 31));
        pushButton_2 = new QPushButton(password);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(670, 530, 61, 31));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(password);

        QMetaObject::connectSlotsByName(password);
    } // setupUi

    void retranslateUi(QWidget *password)
    {
        password->setWindowTitle(QApplication::translate("password", "Form", nullptr));
        label->setText(QApplication::translate("password", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\347\263\273\347\273\237\345\257\206\347\240\201</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("password", "\346\226\260\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("password", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("password", "\345\272\224\347\224\250", nullptr));
        label_4->setText(QApplication::translate("password", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\345\256\211\345\205\250\345\257\206\347\240\201</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("password", "\345\275\223\345\211\215\345\257\206\347\240\201", nullptr));
        label_6->setText(QApplication::translate("password", "\346\226\260\345\257\206\347\240\201", nullptr));
        label_7->setText(QApplication::translate("password", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", nullptr));
        pushButton_2->setText(QApplication::translate("password", "\345\272\224\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class password: public Ui_password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORD_H
