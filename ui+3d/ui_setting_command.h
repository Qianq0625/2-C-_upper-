/********************************************************************************
** Form generated from reading UI file 'setting_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_COMMAND_H
#define UI_SETTING_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setting_command
{
public:
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QLabel *label_9;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_5;
    QComboBox *comboBox_3;
    QLabel *label_8;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLineEdit *lineEdit;
    QComboBox *comboBox_4;
    QPushButton *pushButton_6;
    QLabel *label_5;

    void setupUi(QWidget *setting_command)
    {
        if (setting_command->objectName().isEmpty())
            setting_command->setObjectName(QStringLiteral("setting_command"));
        setting_command->resize(821, 531);
        label_7 = new QLabel(setting_command);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 220, 31, 17));
        lineEdit_3 = new QLineEdit(setting_command);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(250, 210, 311, 31));
        lineEdit_3->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(setting_command);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 140, 21, 21));
        label_9 = new QLabel(setting_command);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(350, 170, 31, 31));
        pushButton = new QPushButton(setting_command);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 100, 21, 21));
        label = new QLabel(setting_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 91, 41));
        pushButton_5 = new QPushButton(setting_command);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 260, 21, 21));
        comboBox_3 = new QComboBox(setting_command);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(100, 210, 141, 31));
        comboBox_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_3->setEditable(true);
        label_8 = new QLabel(setting_command);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 260, 131, 21));
        label_4 = new QLabel(setting_command);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 140, 101, 17));
        lineEdit_2 = new QLineEdit(setting_command);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(290, 170, 51, 31));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(setting_command);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 170, 101, 31));
        label_2 = new QLabel(setting_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 551, 21));
        comboBox_2 = new QComboBox(setting_command);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(190, 260, 151, 31));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_2->setEditable(true);
        pushButton_3 = new QPushButton(setting_command);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 180, 21, 21));
        label_3 = new QLabel(setting_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 100, 67, 17));
        comboBox = new QComboBox(setting_command);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(170, 170, 111, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        pushButton_4 = new QPushButton(setting_command);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 220, 21, 21));
        comboBox_5 = new QComboBox(setting_command);
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(170, 130, 111, 31));
        comboBox_5->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_5->setEditable(true);
        comboBox_6 = new QComboBox(setting_command);
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(290, 130, 86, 31));
        comboBox_6->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_6->setEditable(true);
        checkBox = new QCheckBox(setting_command);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 380, 161, 23));
        checkBox_2 = new QCheckBox(setting_command);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setEnabled(false);
        checkBox_2->setGeometry(QRect(60, 420, 171, 23));
        checkBox_3 = new QCheckBox(setting_command);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(30, 460, 81, 23));
        lineEdit = new QLineEdit(setting_command);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(190, 380, 71, 31));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox_4 = new QComboBox(setting_command);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(120, 460, 121, 31));
        comboBox_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_4->setEditable(true);
        pushButton_6 = new QPushButton(setting_command);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setEnabled(false);
        pushButton_6->setGeometry(QRect(650, 470, 121, 31));
        label_5 = new QLabel(setting_command);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(270, 387, 67, 31));

        retranslateUi(setting_command);

        QMetaObject::connectSlotsByName(setting_command);
    } // setupUi

    void retranslateUi(QWidget *setting_command)
    {
        setting_command->setWindowTitle(QApplication::translate("setting_command", "Form", nullptr));
        label_7->setText(QApplication::translate("setting_command", "\350\256\276\347\275\256", nullptr));
        lineEdit_3->setText(QApplication::translate("setting_command", "f(x)", nullptr));
        pushButton_2->setText(QString());
        label_9->setText(QApplication::translate("setting_command", "mA", nullptr));
        pushButton->setText(QString());
        label->setText(QApplication::translate("setting_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\350\256\276\347\275\256</span></p></body></html>", nullptr));
        pushButton_5->setText(QString());
        comboBox_3->setItemText(0, QApplication::translate("setting_command", "<Output>", nullptr));

        label_8->setText(QApplication::translate("setting_command", "\345\256\211\350\243\205\345\217\230\351\207\217\345\242\236\351\207\217\344\270\2721\357\274\232", nullptr));
        label_4->setText(QApplication::translate("setting_command", "\350\256\276\347\275\256\346\225\260\345\255\227\350\276\223\345\207\272", nullptr));
        lineEdit_2->setText(QApplication::translate("setting_command", "4.0", nullptr));
        label_6->setText(QApplication::translate("setting_command", "\350\256\276\347\275\256\346\250\241\346\213\237\350\276\223\345\207\272", nullptr));
        label_2->setText(QApplication::translate("setting_command", "\351\200\211\346\213\251\345\270\214\346\234\233\346\234\272\345\231\250\344\272\272\345\234\250\347\250\213\345\272\217\346\255\244\347\202\271\344\275\215\347\275\256\345\244\204\346\211\247\350\241\214\347\232\204\345\212\250\344\275\234\343\200\202\346\202\250\350\277\230\345\217\257\344\273\245\346\233\264\346\224\271\346\234\272\345\231\250\344\272\272\347\232\204\346\234\211\346\225\210\350\275\275\350\215\267\343\200\202", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("setting_command", "<Variable>", nullptr));

        pushButton_3->setText(QString());
        label_3->setText(QApplication::translate("setting_command", "\346\227\240\345\212\250\344\275\234", nullptr));
        comboBox->setItemText(0, QApplication::translate("setting_command", "<An.input>", nullptr));

        pushButton_4->setText(QString());
        comboBox_5->setItemText(0, QApplication::translate("setting_command", "<Di.input>", nullptr));

        comboBox_6->setItemText(0, QApplication::translate("setting_command", "\344\275\216", nullptr));

        checkBox->setText(QApplication::translate("setting_command", "\345\260\206\346\200\273\346\234\211\346\225\210\350\264\237\350\275\275\350\256\276\347\275\256\344\270\272", nullptr));
        checkBox_2->setText(QApplication::translate("setting_command", "\344\275\277\347\224\250\344\270\273\345\212\250TCP\344\275\234\344\270\272\351\207\215\345\277\203", nullptr));
        checkBox_3->setText(QApplication::translate("setting_command", "\350\256\276\347\275\256TCP", nullptr));
        lineEdit->setText(QApplication::translate("setting_command", "0.00", nullptr));
        pushButton_6->setText(QApplication::translate("setting_command", "\347\253\213\345\215\263\346\211\247\350\241\214\345\212\250\344\275\234", nullptr));
        label_5->setText(QApplication::translate("setting_command", "kg\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setting_command: public Ui_setting_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_COMMAND_H
