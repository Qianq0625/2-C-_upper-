/********************************************************************************
** Form generated from reading UI file 'script_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCRIPT_COMMAND_H
#define UI_SCRIPT_COMMAND_H

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

class Ui_script_command
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *script_command)
    {
        if (script_command->objectName().isEmpty())
            script_command->setObjectName(QStringLiteral("script_command"));
        script_command->resize(821, 531);
        label = new QLabel(script_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 101, 41));
        label_2 = new QLabel(script_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 421, 21));
        lineEdit = new QLineEdit(script_command);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 150, 761, 41));
        comboBox = new QComboBox(script_command);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(725, 50, 71, 25));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        pushButton = new QPushButton(script_command);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(558, 200, 101, 41));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_2 = new QPushButton(script_command);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(670, 200, 121, 41));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(script_command);

        QMetaObject::connectSlotsByName(script_command);
    } // setupUi

    void retranslateUi(QWidget *script_command)
    {
        script_command->setWindowTitle(QApplication::translate("script_command", "Form", nullptr));
        label->setText(QApplication::translate("script_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\350\204\232\346\234\254\344\273\243\347\240\201</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("script_command", "\346\202\250\345\217\257\345\234\250\344\270\213\351\235\242\350\276\223\345\205\245\344\275\234\344\270\272\350\204\232\346\234\254\344\273\243\347\240\201\347\224\261\351\200\232\347\224\250\346\234\272\345\231\250\344\272\272\346\216\247\345\210\266\345\231\250\346\211\247\350\241\214\347\232\204\346\226\207\346\234\254\343\200\202", nullptr));
        comboBox->setItemText(0, QApplication::translate("script_command", "Line", nullptr));

        pushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("script_command", "f(x)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class script_command: public Ui_script_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCRIPT_COMMAND_H
