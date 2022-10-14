/********************************************************************************
** Form generated from reading UI file 'wait_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAIT_COMMAND_H
#define UI_WAIT_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wait_command
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QLineEdit *lineEdit_2;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *wait_command)
    {
        if (wait_command->objectName().isEmpty())
            wait_command->setObjectName(QStringLiteral("wait_command"));
        wait_command->resize(821, 531);
        label = new QLabel(wait_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 91, 41));
        label_2 = new QLabel(wait_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 261, 21));
        label_3 = new QLabel(wait_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 100, 67, 17));
        label_4 = new QLabel(wait_command);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 140, 67, 17));
        lineEdit = new QLineEdit(wait_command);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 130, 71, 31));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(wait_command);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 136, 21, 21));
        label_6 = new QLabel(wait_command);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 170, 101, 31));
        label_7 = new QLabel(wait_command);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 220, 31, 17));
        label_8 = new QLabel(wait_command);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 260, 31, 21));
        comboBox = new QComboBox(wait_command);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(170, 170, 111, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        comboBox_2 = new QComboBox(wait_command);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(290, 170, 86, 31));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_2->setEditable(true);
        comboBox_3 = new QComboBox(wait_command);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(100, 210, 141, 31));
        comboBox_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_3->setEditable(true);
        comboBox_4 = new QComboBox(wait_command);
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(250, 210, 41, 31));
        comboBox_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_4->setEditable(true);
        lineEdit_2 = new QLineEdit(wait_command);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(300, 210, 51, 31));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9 = new QLabel(wait_command);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(360, 210, 31, 31));
        lineEdit_3 = new QLineEdit(wait_command);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 260, 311, 31));
        lineEdit_3->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(wait_command);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 100, 21, 21));
        pushButton_2 = new QPushButton(wait_command);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 140, 21, 21));
        pushButton_3 = new QPushButton(wait_command);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 180, 21, 21));
        pushButton_4 = new QPushButton(wait_command);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 220, 21, 21));
        pushButton_5 = new QPushButton(wait_command);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 260, 21, 21));

        retranslateUi(wait_command);

        QMetaObject::connectSlotsByName(wait_command);
    } // setupUi

    void retranslateUi(QWidget *wait_command)
    {
        wait_command->setWindowTitle(QApplication::translate("wait_command", "Form", nullptr));
        label->setText(QApplication::translate("wait_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\347\255\211\345\276\205</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("wait_command", "\350\257\267\351\200\211\346\213\251\350\247\246\345\217\221\346\234\272\345\231\250\344\272\272\344\270\213\344\270\200\344\270\252\345\212\250\344\275\234\347\232\204\346\226\271\345\274\217\357\274\232", nullptr));
        label_3->setText(QApplication::translate("wait_command", "\344\270\215\347\255\211\345\276\205", nullptr));
        label_4->setText(QApplication::translate("wait_command", "\347\255\211\345\276\205", nullptr));
        lineEdit->setText(QApplication::translate("wait_command", "0.01", nullptr));
        label_5->setText(QApplication::translate("wait_command", "\347\247\222", nullptr));
        label_6->setText(QApplication::translate("wait_command", "\347\255\211\345\276\205\346\225\260\345\255\227\350\276\223\345\205\245", nullptr));
        label_7->setText(QApplication::translate("wait_command", "\347\255\211\345\276\205", nullptr));
        label_8->setText(QApplication::translate("wait_command", "\347\255\211\345\276\205", nullptr));
        comboBox->setItemText(0, QApplication::translate("wait_command", "<Di.input>", nullptr));

        comboBox_2->setItemText(0, QApplication::translate("wait_command", "\344\275\216", nullptr));

        comboBox_3->setItemText(0, QApplication::translate("wait_command", "<An.input>", nullptr));

        comboBox_4->setItemText(0, QApplication::translate("wait_command", ">", nullptr));

        lineEdit_2->setText(QApplication::translate("wait_command", "4.0", nullptr));
        label_9->setText(QApplication::translate("wait_command", "mA", nullptr));
        lineEdit_3->setText(QApplication::translate("wait_command", "f(x)", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class wait_command: public Ui_wait_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAIT_COMMAND_H
