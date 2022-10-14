/********************************************************************************
** Form generated from reading UI file 'pop_up_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POP_UP_COMMAND_H
#define UI_POP_UP_COMMAND_H

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

class Ui_pop_up_command
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QCheckBox *checkBox;

    void setupUi(QWidget *pop_up_command)
    {
        if (pop_up_command->objectName().isEmpty())
            pop_up_command->setObjectName(QStringLiteral("pop_up_command"));
        pop_up_command->resize(821, 531);
        label = new QLabel(pop_up_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 101, 31));
        label_2 = new QLabel(pop_up_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 341, 21));
        lineEdit = new QLineEdit(pop_up_command);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 100, 781, 31));
        pushButton = new QPushButton(pop_up_command);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(668, 150, 131, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_3 = new QLabel(pop_up_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 170, 111, 17));
        pushButton_2 = new QPushButton(pop_up_command);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 200, 21, 21));
        pushButton_3 = new QPushButton(pop_up_command);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 240, 21, 21));
        pushButton_4 = new QPushButton(pop_up_command);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 280, 21, 21));
        label_4 = new QLabel(pop_up_command);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 200, 67, 17));
        label_5 = new QLabel(pop_up_command);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 240, 67, 17));
        label_6 = new QLabel(pop_up_command);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 280, 67, 17));
        checkBox = new QCheckBox(pop_up_command);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 490, 241, 23));

        retranslateUi(pop_up_command);

        QMetaObject::connectSlotsByName(pop_up_command);
    } // setupUi

    void retranslateUi(QWidget *pop_up_command)
    {
        pop_up_command->setWindowTitle(QApplication::translate("pop_up_command", "Form", nullptr));
        label->setText(QApplication::translate("pop_up_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\345\274\271\345\207\272\347\252\227\345\217\243</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("pop_up_command", "\345\234\250\345\261\217\345\271\225\344\270\212\346\230\276\347\244\272\344\273\245\344\270\213\346\266\210\346\201\257\357\274\214\347\255\211\345\276\205\347\224\250\346\210\267\346\214\211\344\270\213\342\200\234\347\241\256\345\256\232\342\200\235\346\214\211\351\222\256", nullptr));
        pushButton->setText(QApplication::translate("pop_up_command", "\351\242\204\350\247\210\345\274\271\345\207\272\347\252\227\345\217\243", nullptr));
        label_3->setText(QApplication::translate("pop_up_command", "\345\274\271\345\207\272\347\252\227\345\217\243\347\261\273\345\236\213\357\274\232", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        label_4->setText(QApplication::translate("pop_up_command", "\346\266\210\346\201\257", nullptr));
        label_5->setText(QApplication::translate("pop_up_command", "\350\255\246\345\221\212", nullptr));
        label_6->setText(QApplication::translate("pop_up_command", "\351\224\231\350\257\257", nullptr));
        checkBox->setText(QApplication::translate("pop_up_command", "\346\230\276\347\244\272\346\255\244\345\274\271\345\207\272\347\252\227\345\217\243\346\227\266\344\270\255\346\255\242\347\250\213\345\272\217\346\211\247\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pop_up_command: public Ui_pop_up_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POP_UP_COMMAND_H
