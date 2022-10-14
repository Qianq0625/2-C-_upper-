/********************************************************************************
** Form generated from reading UI file 'if_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IF_COMMAND_H
#define UI_IF_COMMAND_H

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

class Ui_if_command
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *if_command)
    {
        if (if_command->objectName().isEmpty())
            if_command->setObjectName(QStringLiteral("if_command"));
        if_command->resize(821, 531);
        label = new QLabel(if_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 71, 41));
        label_2 = new QLabel(if_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 421, 31));
        label_3 = new QLabel(if_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 31, 21));
        lineEdit = new QLineEdit(if_command);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 100, 741, 31));
        checkBox = new QCheckBox(if_command);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(40, 150, 131, 23));
        pushButton = new QPushButton(if_command);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 434, 101, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_2 = new QPushButton(if_command);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 434, 101, 31));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_3 = new QPushButton(if_command);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 480, 101, 31));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(if_command);

        QMetaObject::connectSlotsByName(if_command);
    } // setupUi

    void retranslateUi(QWidget *if_command)
    {
        if_command->setWindowTitle(QApplication::translate("if_command", "Form", nullptr));
        label->setText(QApplication::translate("if_command", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">If</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("if_command", "\346\240\271\346\215\256\347\211\271\345\256\232\344\274\240\346\204\237\345\231\250\350\276\223\345\205\245\347\232\204\347\212\266\346\200\201\346\210\226\347\250\213\345\272\217\345\217\230\351\207\217\357\274\214\345\260\206\346\211\247\350\241\214\344\273\245\344\270\213\347\250\213\345\272\217\350\241\214\343\200\202", nullptr));
        label_3->setText(QApplication::translate("if_command", "<html><head/><body><p><span style=\" font-size:12pt;\">if</span></p></body></html>", nullptr));
        checkBox->setText(QApplication::translate("if_command", "\344\270\215\346\226\255\346\243\200\346\237\245\350\241\250\350\276\276\345\274\217", nullptr));
        pushButton->setText(QApplication::translate("if_command", "\346\267\273\345\212\240 Elself", nullptr));
        pushButton_2->setText(QApplication::translate("if_command", "\347\247\273\351\231\244 Elself", nullptr));
        pushButton_3->setText(QApplication::translate("if_command", "\346\267\273\345\212\240 Else", nullptr));
    } // retranslateUi

};

namespace Ui {
    class if_command: public Ui_if_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IF_COMMAND_H
