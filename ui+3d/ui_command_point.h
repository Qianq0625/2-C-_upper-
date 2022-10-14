/********************************************************************************
** Form generated from reading UI file 'command_point.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMAND_POINT_H
#define UI_COMMAND_POINT_H

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

class Ui_command_point
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QWidget *widget;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QWidget *command_point)
    {
        if (command_point->objectName().isEmpty())
            command_point->setObjectName(QStringLiteral("command_point"));
        command_point->resize(821, 531);
        label = new QLabel(command_point);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 31, 31));
        pushButton = new QPushButton(command_point);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 20, 89, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        widget = new QWidget(command_point);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 60, 201, 231));
        comboBox = new QComboBox(command_point);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setGeometry(QRect(720, 10, 86, 25));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        pushButton_2 = new QPushButton(command_point);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 100, 281, 31));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_3 = new QPushButton(command_point);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 160, 281, 31));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        groupBox = new QGroupBox(command_point);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(490, 280, 321, 171));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 42, 111, 21));
        checkBox->setLayoutDirection(Qt::RightToLeft);
        checkBox->setAutoRepeat(false);
        checkBox->setAutoExclusive(false);
        checkBox->setTristate(false);
        label_2 = new QLabel(command_point);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 354, 91, 17));
        label_3 = new QLabel(command_point);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 384, 67, 17));
        pushButton_4 = new QPushButton(command_point);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 354, 21, 21));
        pushButton_5 = new QPushButton(command_point);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 384, 21, 21));
        lineEdit = new QLineEdit(command_point);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 414, 91, 25));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(command_point);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 410, 67, 31));
        pushButton_6 = new QPushButton(command_point);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(40, 450, 311, 31));
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_7 = new QPushButton(command_point);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(40, 490, 311, 31));
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_8 = new QPushButton(command_point);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(520, 490, 261, 31));
        pushButton_8->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(command_point);

        QMetaObject::connectSlotsByName(command_point);
    } // setupUi

    void retranslateUi(QWidget *command_point)
    {
        command_point->setWindowTitle(QApplication::translate("command_point", "Form", nullptr));
        label->setText(QApplication::translate("command_point", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">A</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("command_point", "\351\207\215\345\221\275\345\220\215", nullptr));
        comboBox->setItemText(0, QApplication::translate("command_point", "\345\233\272\345\256\232\344\275\215\347\275\256", nullptr));

        pushButton_2->setText(QApplication::translate("command_point", "\346\234\272\345\231\250\344\272\272\347\247\273\350\207\263\346\255\244\345\244\204", nullptr));
        pushButton_3->setText(QApplication::translate("command_point", "\346\233\264\346\224\271\346\255\244\350\267\257\347\202\271", nullptr));
        groupBox->setTitle(QString());
        checkBox->setText(QApplication::translate("command_point", "\346\230\276\347\244\272\351\253\230\347\272\247\351\200\211\351\241\271", nullptr));
        label_2->setText(QApplication::translate("command_point", "\345\234\250\346\255\244\347\202\271\345\201\234\346\255\242", nullptr));
        label_3->setText(QApplication::translate("command_point", "\344\272\244\350\236\215\345\215\212\345\276\204", nullptr));
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        lineEdit->setText(QApplication::translate("command_point", "0.0", nullptr));
        label_4->setText(QApplication::translate("command_point", "mm", nullptr));
        pushButton_6->setText(QApplication::translate("command_point", "\345\234\250\345\205\266\345\211\215\346\267\273\345\212\240\350\267\257\347\202\271", nullptr));
        pushButton_7->setText(QApplication::translate("command_point", "\345\234\250\345\205\266\345\220\216\346\267\273\345\212\240\350\267\257\347\202\271", nullptr));
        pushButton_8->setText(QApplication::translate("command_point", "\347\247\273\351\231\244\346\255\244\350\267\257\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class command_point: public Ui_command_point {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMAND_POINT_H
