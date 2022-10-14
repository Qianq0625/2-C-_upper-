/********************************************************************************
** Form generated from reading UI file 'move_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVE_COMMAND_H
#define UI_MOVE_COMMAND_H

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

class Ui_move_command
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_9;
    QLabel *label_13;
    QLabel *label_10;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QLabel *label_11;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLabel *label_14;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_12;
    QComboBox *comboBox_3;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *move_command)
    {
        if (move_command->objectName().isEmpty())
            move_command->setObjectName(QStringLiteral("move_command"));
        move_command->resize(821, 531);
        lineEdit = new QLineEdit(move_command);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(380, 210, 111, 31));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton = new QPushButton(move_command);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 390, 51, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_9 = new QLabel(move_command);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(520, 271, 67, 20));
        label_13 = new QLabel(move_command);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(90, 450, 101, 31));
        label_10 = new QLabel(move_command);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setEnabled(false);
        label_10->setGeometry(QRect(380, 330, 67, 21));
        label_7 = new QLabel(move_command);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(500, 216, 67, 21));
        pushButton_2 = new QPushButton(move_command);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(30, 450, 51, 31));
        comboBox = new QComboBox(move_command);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 210, 251, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        label_11 = new QLabel(move_command);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setEnabled(false);
        label_11->setGeometry(QRect(500, 366, 67, 21));
        pushButton_3 = new QPushButton(move_command);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 420, 181, 41));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_4 = new QLabel(move_command);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 180, 67, 17));
        label_8 = new QLabel(move_command);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(500, 280, 67, 31));
        lineEdit_3 = new QLineEdit(move_command);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(380, 360, 113, 31));
        lineEdit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_14 = new QLabel(move_command);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(380, 180, 67, 21));
        label_3 = new QLabel(move_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 411, 21));
        label_5 = new QLabel(move_command);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 250, 67, 17));
        label_12 = new QLabel(move_command);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(90, 390, 67, 31));
        comboBox_3 = new QComboBox(move_command);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(655, 40, 121, 25));
        comboBox_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_3->setEditable(true);
        label_6 = new QLabel(move_command);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(380, 250, 67, 17));
        label_2 = new QLabel(move_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 241, 31));
        label = new QLabel(move_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 71, 41));
        comboBox_2 = new QComboBox(move_command);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setEnabled(false);
        comboBox_2->setGeometry(QRect(20, 280, 251, 31));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_2->setEditable(true);
        lineEdit_2 = new QLineEdit(move_command);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(380, 280, 111, 31));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(move_command);

        QMetaObject::connectSlotsByName(move_command);
    } // setupUi

    void retranslateUi(QWidget *move_command)
    {
        move_command->setWindowTitle(QApplication::translate("move_command", "Form", nullptr));
        lineEdit->setText(QApplication::translate("move_command", "60", nullptr));
        pushButton->setText(QString());
        label_9->setText(QApplication::translate("move_command", "2", nullptr));
        label_13->setText(QApplication::translate("move_command", "\346\267\273\345\212\240\345\234\206\345\275\242\347\247\273\345\212\250", nullptr));
        label_10->setText(QApplication::translate("move_command", "\344\272\244\350\236\215\345\215\212\345\276\204", nullptr));
        label_7->setText(QApplication::translate("move_command", "\302\260/S", nullptr));
        pushButton_2->setText(QString());
        comboBox->setItemText(0, QApplication::translate("move_command", "\344\275\277\347\224\250\345\267\245\345\205\267\346\263\225\345\205\260", nullptr));

        label_11->setText(QApplication::translate("move_command", "mm", nullptr));
        pushButton_3->setText(QApplication::translate("move_command", "\351\207\215\347\275\256", nullptr));
        label_4->setText(QApplication::translate("move_command", "\350\256\276\347\275\256TCP", nullptr));
        label_8->setText(QApplication::translate("move_command", "\302\260/S", nullptr));
        lineEdit_3->setText(QApplication::translate("move_command", "0", nullptr));
        label_14->setText(QApplication::translate("move_command", "\345\205\263\350\212\202\351\200\237\345\272\246", nullptr));
        label_3->setText(QApplication::translate("move_command", "\344\270\213\351\235\242\347\232\204\345\200\274\345\272\224\347\224\250\345\210\260\346\211\200\346\234\211\345\255\220\350\267\257\347\202\271\357\274\214\345\271\266\344\270\224\345\217\226\345\206\263\344\272\216\346\211\200\351\200\211\346\213\251\347\232\204\347\247\273\345\212\250\347\261\273\345\236\213\343\200\202", nullptr));
        label_5->setText(QApplication::translate("move_command", "\347\211\271\345\276\201", nullptr));
        label_12->setText(QApplication::translate("move_command", "\346\267\273\345\212\240\350\267\257\347\202\271", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("move_command", "Movej", nullptr));

        label_6->setText(QApplication::translate("move_command", "\345\205\263\350\212\202\345\212\240\351\200\237", nullptr));
        label_2->setText(QApplication::translate("move_command", "\346\214\207\345\207\272\346\234\272\345\231\250\344\272\272\345\260\206\345\246\202\344\275\225\345\234\250\350\267\257\347\202\271\344\271\213\351\227\264\347\247\273\345\212\250\343\200\202", nullptr));
        label->setText(QApplication::translate("move_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\347\247\273\345\212\250</span></p></body></html>", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("move_command", "\346\234\272\345\272\247", nullptr));

        lineEdit_2->setText(QApplication::translate("move_command", "80", nullptr));
    } // retranslateUi

};

namespace Ui {
    class move_command: public Ui_move_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVE_COMMAND_H
