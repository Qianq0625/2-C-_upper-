/********************************************************************************
** Form generated from reading UI file 'command_program.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMAND_PROGRAM_H
#define UI_COMMAND_PROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_command_program
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *command_program)
    {
        if (command_program->objectName().isEmpty())
            command_program->setObjectName(QStringLiteral("command_program"));
        command_program->resize(821, 531);
        label = new QLabel(command_program);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 61, 41));
        label_2 = new QLabel(command_program);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 50, 151, 31));
        label_3 = new QLabel(command_program);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 80, 301, 31));
        label_4 = new QLabel(command_program);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 110, 291, 31));
        checkBox = new QCheckBox(command_program);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 430, 171, 21));
        checkBox_2 = new QCheckBox(command_program);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 460, 141, 21));
        checkBox_2->setChecked(false);
        checkBox_3 = new QCheckBox(command_program);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(20, 485, 131, 31));
        label_5 = new QLabel(command_program);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 50, 31, 31));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../DEBUG/imagic/black_point.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(command_program);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 80, 31, 31));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../DEBUG/imagic/black_point.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(command_program);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 110, 31, 31));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../DEBUG/imagic/black_point.png")));
        label_7->setScaledContents(true);

        retranslateUi(command_program);

        QMetaObject::connectSlotsByName(command_program);
    } // setupUi

    void retranslateUi(QWidget *command_program)
    {
        command_program->setWindowTitle(QApplication::translate("command_program", "Form", nullptr));
        label->setText(QApplication::translate("command_program", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\347\250\213\345\272\217</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("command_program", "\345\267\246\344\276\247\347\252\227\345\217\243\346\230\276\347\244\272\347\250\213\345\272\217\346\240\221\343\200\202", nullptr));
        label_3->setText(QApplication::translate("command_program", "\344\275\277\347\224\250\344\270\213\344\270\200\344\270\252\345\222\214\344\270\212\344\270\200\344\270\252\346\214\211\351\222\256\345\217\257\345\234\250\347\250\213\345\272\217\346\240\221\344\270\255\347\247\273\345\212\250\343\200\202", nullptr));
        label_4->setText(QApplication::translate("command_program", "\344\275\277\347\224\250\347\273\223\346\236\204\351\200\211\351\241\271\345\215\241\345\217\257\344\277\256\346\224\271\347\250\213\345\272\217\346\240\221\343\200\202", nullptr));
        checkBox->setText(QApplication::translate("command_program", "\346\267\273\345\212\240BeforeStart\345\272\217\345\210\227", nullptr));
        checkBox_2->setText(QApplication::translate("command_program", "\350\256\276\347\275\256\345\210\235\345\247\213\345\217\230\351\207\217\345\200\274", nullptr));
        checkBox_3->setText(QApplication::translate("command_program", "\347\250\213\345\272\217\346\260\270\350\277\234\345\276\252\347\216\257", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class command_program: public Ui_command_program {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMAND_PROGRAM_H
