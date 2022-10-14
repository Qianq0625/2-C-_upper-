/********************************************************************************
** Form generated from reading UI file 'interuption_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERUPTION_COMMAND_H
#define UI_INTERUPTION_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interuption_command
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *interuption_command)
    {
        if (interuption_command->objectName().isEmpty())
            interuption_command->setObjectName(QStringLiteral("interuption_command"));
        interuption_command->resize(821, 531);
        label = new QLabel(interuption_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 61, 31));
        label_2 = new QLabel(interuption_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 151, 17));

        retranslateUi(interuption_command);

        QMetaObject::connectSlotsByName(interuption_command);
    } // setupUi

    void retranslateUi(QWidget *interuption_command)
    {
        interuption_command->setWindowTitle(QApplication::translate("interuption_command", "Form", nullptr));
        label->setText(QApplication::translate("interuption_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\344\270\255\346\255\242</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("interuption_command", "\345\234\250\346\255\244\347\202\271\345\201\234\346\255\242\346\211\247\350\241\214\347\250\213\345\272\217\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class interuption_command: public Ui_interuption_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERUPTION_COMMAND_H
