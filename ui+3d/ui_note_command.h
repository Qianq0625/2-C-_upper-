/********************************************************************************
** Form generated from reading UI file 'note_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_COMMAND_H
#define UI_NOTE_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_note_command
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *note_command)
    {
        if (note_command->objectName().isEmpty())
            note_command->setObjectName(QStringLiteral("note_command"));
        note_command->resize(821, 531);
        label = new QLabel(note_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 71, 31));
        label_2 = new QLabel(note_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 101, 21));
        lineEdit = new QLineEdit(note_command);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 120, 771, 41));

        retranslateUi(note_command);

        QMetaObject::connectSlotsByName(note_command);
    } // setupUi

    void retranslateUi(QWidget *note_command)
    {
        note_command->setWindowTitle(QApplication::translate("note_command", "Form", nullptr));
        label->setText(QApplication::translate("note_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\263\250\351\207\212</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("note_command", "\350\257\267\350\276\223\345\205\245\346\263\250\351\207\212\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class note_command: public Ui_note_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_COMMAND_H
