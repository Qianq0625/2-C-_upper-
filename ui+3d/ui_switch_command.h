/********************************************************************************
** Form generated from reading UI file 'switch_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWITCH_COMMAND_H
#define UI_SWITCH_COMMAND_H

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

class Ui_switch_command
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;

    void setupUi(QWidget *switch_command)
    {
        if (switch_command->objectName().isEmpty())
            switch_command->setObjectName(QStringLiteral("switch_command"));
        switch_command->resize(821, 531);
        label = new QLabel(switch_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 61, 41));
        label_2 = new QLabel(switch_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 671, 101));
        label_2->setWordWrap(true);
        label_3 = new QLabel(switch_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 160, 67, 17));
        lineEdit = new QLineEdit(switch_command);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(70, 150, 581, 31));
        lineEdit->setAlignment(Qt::AlignCenter);
        checkBox = new QCheckBox(switch_command);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 380, 92, 23));
        pushButton = new QPushButton(switch_command);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 430, 51, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_2 = new QPushButton(switch_command);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 480, 51, 31));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_4 = new QLabel(switch_command);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 430, 41, 31));
        label_5 = new QLabel(switch_command);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 470, 41, 51));
        lineEdit_2 = new QLineEdit(switch_command);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 430, 81, 31));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox = new QComboBox(switch_command);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(140, 480, 201, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);

        retranslateUi(switch_command);

        QMetaObject::connectSlotsByName(switch_command);
    } // setupUi

    void retranslateUi(QWidget *switch_command)
    {
        switch_command->setWindowTitle(QApplication::translate("switch_command", "Form", nullptr));
        label->setText(QApplication::translate("switch_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\345\274\200\345\205\263</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("switch_command", "<html><head/><body><p>\346\202\250\345\217\257\344\273\245\344\275\277\347\224\250\345\274\200\345\205\263\350\257\255\345\217\245\346\235\245\346\216\247\345\210\266\346\202\250\347\232\204\347\250\213\345\272\217\346\265\201\347\250\213\343\200\202\350\277\231\344\272\233\345\217\257\344\273\245\346\233\277\346\215\242\345\244\215\346\235\202\347\232\204<span style=\" font-weight:600;\">\345\246\202\346\236\234...\345\220\246\345\210\231\345\246\202\346\236\234</span>\350\257\255\345\217\245\345\271\266\344\270\224\345\217\257\344\273\245\346\265\213\350\257\225\346\202\250\347\232\204\350\241\250\350\276\276\345\274\217\347\232\204\344\270\200\347\263\273\345\210\227\345\200\274</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("switch_command", "\345\274\200\345\205\263", nullptr));
        lineEdit->setText(QApplication::translate("switch_command", "f(x)", nullptr));
        checkBox->setText(QApplication::translate("switch_command", "\351\273\230\350\256\244\346\203\205\345\206\265", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_4->setText(QApplication::translate("switch_command", "\346\203\205\345\206\265", nullptr));
        label_5->setText(QApplication::translate("switch_command", "\346\203\205\345\206\265", nullptr));
        lineEdit_2->setText(QApplication::translate("switch_command", "1", nullptr));
        comboBox->setItemText(0, QApplication::translate("switch_command", "\346\227\240\351\200\211\346\213\251", nullptr));

    } // retranslateUi

};

namespace Ui {
    class switch_command: public Ui_switch_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWITCH_COMMAND_H
