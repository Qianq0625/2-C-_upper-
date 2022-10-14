/********************************************************************************
** Form generated from reading UI file 'variable_install.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VARIABLE_INSTALL_H
#define UI_VARIABLE_INSTALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_variable_install
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *widget;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QWidget *variable_install)
    {
        if (variable_install->objectName().isEmpty())
            variable_install->setObjectName(QStringLiteral("variable_install"));
        variable_install->resize(782, 613);
        label = new QLabel(variable_install);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 10, 121, 51));
        groupBox = new QGroupBox(variable_install);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 40, 781, 551));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 20, 391, 31));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 20, 391, 31));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 50, 781, 291));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 500, 71, 31));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(false);
        pushButton_4->setGeometry(QRect(340, 500, 61, 31));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setEnabled(false);
        pushButton_5->setGeometry(QRect(420, 500, 61, 31));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(0, 340, 811, 151));
        widget->setAcceptDrops(false);
        widget->setInputMethodHints(Qt::ImhNone);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 36, 67, 17));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 36, 67, 17));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 66, 221, 31));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 66, 451, 31));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 56, 61, 41));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 6, 121, 21));
        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setEnabled(false);
        pushButton_6->setGeometry(QRect(588, 110, 61, 31));
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(668, 110, 61, 31));
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(variable_install);

        QMetaObject::connectSlotsByName(variable_install);
    } // setupUi

    void retranslateUi(QWidget *variable_install)
    {
        variable_install->setWindowTitle(QApplication::translate("variable_install", "Form", nullptr));
        label->setText(QApplication::translate("variable_install", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">\345\256\211\350\243\205\345\217\230\351\207\217</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("variable_install", "\345\217\230\351\207\217", nullptr));
        pushButton_2->setText(QApplication::translate("variable_install", "\345\200\274", nullptr));
        pushButton_3->setText(QApplication::translate("variable_install", "\346\226\260\345\273\272", nullptr));
        pushButton_4->setText(QApplication::translate("variable_install", "\347\274\226\350\276\221\345\200\274", nullptr));
        pushButton_5->setText(QApplication::translate("variable_install", "\345\210\240\351\231\244", nullptr));
        label_2->setText(QApplication::translate("variable_install", "\345\220\215\347\247\260", nullptr));
        label_3->setText(QApplication::translate("variable_install", "\345\200\274", nullptr));
        label_4->setText(QApplication::translate("variable_install", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">=</span></p></body></html>", nullptr));
#ifndef QT_NO_WHATSTHIS
        label_5->setWhatsThis(QApplication::translate("variable_install", "<html><head/><body><p><span style=\" font-weight:600;\">\345\210\233\345\273\272\346\226\260\347\232\204\345\256\211\350\243\205\345\217\230\351\207\217</span></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        label_5->setText(QApplication::translate("variable_install", "\345\210\233\345\273\272\346\226\260\347\232\204\345\256\211\350\243\205\345\217\230\351\207\217", nullptr));
        pushButton_6->setText(QApplication::translate("variable_install", "\347\241\256\345\256\232", nullptr));
        pushButton_7->setText(QApplication::translate("variable_install", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class variable_install: public Ui_variable_install {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VARIABLE_INSTALL_H
