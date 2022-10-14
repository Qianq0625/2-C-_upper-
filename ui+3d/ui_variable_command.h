/********************************************************************************
** Form generated from reading UI file 'variable_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VARIABLE_COMMAND_H
#define UI_VARIABLE_COMMAND_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_variable_command
{
public:
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_5;
    QComboBox *comboBox;
    QPushButton *pushButton_7;
    QLabel *label_10;
    QGroupBox *groupBox_3;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_2;

    void setupUi(QWidget *variable_command)
    {
        if (variable_command->objectName().isEmpty())
            variable_command->setObjectName(QStringLiteral("variable_command"));
        variable_command->resize(821, 531);
        label_8 = new QLabel(variable_command);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(130, 406, 67, 31));
        label_9 = new QLabel(variable_command);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 380, 67, 17));
        pushButton = new QPushButton(variable_command);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(110, 20, 71, 31));
        label = new QLabel(variable_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 91, 41));
        pushButton_5 = new QPushButton(variable_command);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 380, 21, 21));
        comboBox = new QComboBox(variable_command);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setGeometry(QRect(700, 30, 86, 25));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        pushButton_7 = new QPushButton(variable_command);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(50, 500, 311, 31));
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_10 = new QLabel(variable_command);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 350, 91, 17));
        groupBox_3 = new QGroupBox(variable_command);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(490, 290, 321, 171));
        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(30, 42, 111, 21));
        checkBox_2->setLayoutDirection(Qt::RightToLeft);
        checkBox_2->setAutoRepeat(false);
        checkBox_2->setAutoExclusive(false);
        checkBox_2->setTristate(false);
        lineEdit = new QLineEdit(variable_command);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 410, 81, 25));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_8 = new QPushButton(variable_command);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(520, 500, 261, 31));
        pushButton_8->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_6 = new QPushButton(variable_command);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(50, 460, 311, 31));
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_4 = new QPushButton(variable_command);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 350, 21, 21));
        label_2 = new QLabel(variable_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 161, 31));
        label_3 = new QLabel(variable_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 110, 67, 17));
        comboBox_2 = new QComboBox(variable_command);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(100, 100, 211, 31));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_2->setEditable(true);

        retranslateUi(variable_command);

        QMetaObject::connectSlotsByName(variable_command);
    } // setupUi

    void retranslateUi(QWidget *variable_command)
    {
        variable_command->setWindowTitle(QApplication::translate("variable_command", "Form", nullptr));
        label_8->setText(QApplication::translate("variable_command", "mm", nullptr));
        label_9->setText(QApplication::translate("variable_command", "\344\272\244\350\236\215\345\215\212\345\276\204", nullptr));
        pushButton->setText(QApplication::translate("variable_command", "\351\207\215\345\221\275\345\220\215", nullptr));
        label->setText(QApplication::translate("variable_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\345\217\230\351\207\217</span></p></body></html>", nullptr));
        pushButton_5->setText(QString());
        comboBox->setItemText(0, QApplication::translate("variable_command", "\345\217\257\345\217\230\344\275\215\347\275\256", nullptr));

        pushButton_7->setText(QApplication::translate("variable_command", "\345\234\250\345\205\266\345\220\216\346\267\273\345\212\240\350\267\257\347\202\271", nullptr));
        label_10->setText(QApplication::translate("variable_command", "\345\234\250\346\255\244\347\202\271\345\201\234\346\255\242", nullptr));
        groupBox_3->setTitle(QString());
        checkBox_2->setText(QApplication::translate("variable_command", "\346\230\276\347\244\272\351\253\230\347\272\247\351\200\211\351\241\271", nullptr));
        lineEdit->setText(QApplication::translate("variable_command", "0.0", nullptr));
        pushButton_8->setText(QApplication::translate("variable_command", "\347\247\273\351\231\244\346\255\244\350\267\257\347\202\271", nullptr));
        pushButton_6->setText(QApplication::translate("variable_command", "\345\234\250\345\205\266\345\211\215\346\267\273\345\212\240\350\267\257\347\202\271", nullptr));
        pushButton_4->setText(QString());
        label_2->setText(QApplication::translate("variable_command", "\346\234\272\345\231\250\344\272\272\347\247\273\345\212\250\350\207\263\345\217\230\351\207\217\344\275\215\347\275\256", nullptr));
        label_3->setText(QApplication::translate("variable_command", "\344\275\277\347\224\250\345\217\230\351\207\217", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("variable_command", "<Varibale>", nullptr));

    } // retranslateUi

};

namespace Ui {
    class variable_command: public Ui_variable_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VARIABLE_COMMAND_H
