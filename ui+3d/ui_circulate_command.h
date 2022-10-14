/********************************************************************************
** Form generated from reading UI file 'circulate_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIRCULATE_COMMAND_H
#define UI_CIRCULATE_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_circulate_command
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
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *circulate_command)
    {
        if (circulate_command->objectName().isEmpty())
            circulate_command->setObjectName(QStringLiteral("circulate_command"));
        circulate_command->resize(821, 531);
        label = new QLabel(circulate_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 61, 41));
        label_2 = new QLabel(circulate_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 241, 21));
        label_3 = new QLabel(circulate_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 90, 67, 21));
        label_4 = new QLabel(circulate_command);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 130, 67, 17));
        lineEdit = new QLineEdit(circulate_command);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 130, 41, 31));
        label_5 = new QLabel(circulate_command);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 130, 101, 17));
        label_6 = new QLabel(circulate_command);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 120, 61, 41));
        label_7 = new QLabel(circulate_command);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 170, 231, 21));
        lineEdit_2 = new QLineEdit(circulate_command);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(50, 210, 331, 31));
        pushButton = new QPushButton(circulate_command);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 210, 91, 31));
        pushButton->setCheckable(false);
        checkBox = new QCheckBox(circulate_command);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setEnabled(false);
        checkBox->setGeometry(QRect(50, 260, 141, 23));
        pushButton_2 = new QPushButton(circulate_command);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 90, 21, 21));
        pushButton_3 = new QPushButton(circulate_command);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 130, 21, 21));
        pushButton_4 = new QPushButton(circulate_command);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 170, 21, 21));

        retranslateUi(circulate_command);

        QMetaObject::connectSlotsByName(circulate_command);
    } // setupUi

    void retranslateUi(QWidget *circulate_command)
    {
        circulate_command->setWindowTitle(QApplication::translate("circulate_command", "Form", nullptr));
        label->setText(QApplication::translate("circulate_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\345\276\252\347\216\257</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("circulate_command", "\350\257\267\351\200\211\346\213\251\347\250\213\345\272\217\345\234\250\346\255\244\345\276\252\347\216\257\344\270\255\346\211\247\350\241\214\347\232\204\346\254\241\346\225\260\343\200\202", nullptr));
        label_3->setText(QApplication::translate("circulate_command", "\345\247\213\347\273\210\345\276\252\347\216\257", nullptr));
        label_4->setText(QApplication::translate("circulate_command", "\345\276\252\347\216\257", nullptr));
        label_5->setText(QApplication::translate("circulate_command", "\346\254\241\357\274\214\344\275\277\347\224\250\345\217\230\351\207\217\357\274\232", nullptr));
        label_6->setText(QApplication::translate("circulate_command", "<html><head/><body><p><span style=\" font-weight:600;\">\345\276\252\347\216\257_1</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("circulate_command", "\345\217\252\350\246\201\344\270\213\345\210\227\350\241\250\350\276\276\345\274\217\344\270\272\347\234\237\345\260\261\344\270\200\347\233\264\345\276\252\347\216\257\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("circulate_command", "f(X)", nullptr));
        checkBox->setText(QApplication::translate("circulate_command", "\344\270\215\346\226\255\346\243\200\346\237\245\350\241\250\350\276\276\345\274\217", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class circulate_command: public Ui_circulate_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIRCULATE_COMMAND_H
