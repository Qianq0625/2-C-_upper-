/********************************************************************************
** Form generated from reading UI file 'valuation_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALUATION_COMMAND_H
#define UI_VALUATION_COMMAND_H

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

class Ui_valuation_command
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_6;
    QComboBox *comboBox_2;

    void setupUi(QWidget *valuation_command)
    {
        if (valuation_command->objectName().isEmpty())
            valuation_command->setObjectName(QStringLiteral("valuation_command"));
        valuation_command->resize(821, 531);
        label = new QLabel(valuation_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 81, 41));
        label_2 = new QLabel(valuation_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 241, 21));
        label_3 = new QLabel(valuation_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 61, 31));
        label_4 = new QLabel(valuation_command);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 80, 71, 51));
        comboBox = new QComboBox(valuation_command);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 140, 151, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        label_5 = new QLabel(valuation_command);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 140, 67, 17));
        lineEdit = new QLineEdit(valuation_command);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(230, 140, 361, 31));
        lineEdit->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(valuation_command);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 190, 151, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_6 = new QLabel(valuation_command);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(660, 20, 31, 21));
        comboBox_2 = new QComboBox(valuation_command);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(710, 20, 86, 25));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_2->setEditable(true);

        retranslateUi(valuation_command);

        QMetaObject::connectSlotsByName(valuation_command);
    } // setupUi

    void retranslateUi(QWidget *valuation_command)
    {
        valuation_command->setWindowTitle(QApplication::translate("valuation_command", "Form", nullptr));
        label->setText(QApplication::translate("valuation_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\350\265\213\345\200\274</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("valuation_command", "\344\275\277\347\224\250\350\241\250\350\276\276\345\274\217\347\232\204\345\200\274\344\270\272\351\200\211\345\256\232\347\232\204\345\217\230\351\207\217\350\265\213\345\200\274\343\200\202", nullptr));
        label_3->setText(QApplication::translate("valuation_command", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">\345\217\230\351\207\217</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("valuation_command", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">\350\241\250\350\276\276\345\274\217</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QApplication::translate("valuation_command", "var_2", nullptr));

        label_5->setText(QApplication::translate("valuation_command", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">=</span></p></body></html>", nullptr));
        lineEdit->setText(QApplication::translate("valuation_command", "2*force()", nullptr));
        pushButton->setText(QApplication::translate("valuation_command", "\351\207\215\345\221\275\345\220\215", nullptr));
        label_6->setText(QApplication::translate("valuation_command", "\346\235\245\346\272\220", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("valuation_command", "\350\241\250\350\276\276\345\274\217", nullptr));

    } // retranslateUi

};

namespace Ui {
    class valuation_command: public Ui_valuation_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALUATION_COMMAND_H
