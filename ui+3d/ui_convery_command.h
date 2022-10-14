/********************************************************************************
** Form generated from reading UI file 'convery_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERY_COMMAND_H
#define UI_CONVERY_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_convery_command
{
public:
    QLabel *label;

    void setupUi(QWidget *convery_command)
    {
        if (convery_command->objectName().isEmpty())
            convery_command->setObjectName(QStringLiteral("convery_command"));
        convery_command->resize(821, 531);
        label = new QLabel(convery_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 181, 41));

        retranslateUi(convery_command);

        QMetaObject::connectSlotsByName(convery_command);
    } // setupUi

    void retranslateUi(QWidget *convery_command)
    {
        convery_command->setWindowTitle(QApplication::translate("convery_command", "Form", nullptr));
        label->setText(QApplication::translate("convery_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\255\243\345\234\250\350\267\237\350\270\252\350\276\223\351\200\201\346\234\272</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class convery_command: public Ui_convery_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERY_COMMAND_H
