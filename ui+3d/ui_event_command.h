/********************************************************************************
** Form generated from reading UI file 'event_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENT_COMMAND_H
#define UI_EVENT_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_event_command
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;

    void setupUi(QWidget *event_command)
    {
        if (event_command->objectName().isEmpty())
            event_command->setObjectName(QStringLiteral("event_command"));
        event_command->resize(821, 531);
        label = new QLabel(event_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 71, 41));
        label_2 = new QLabel(event_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 701, 61));
        label_2->setWordWrap(true);
        label_3 = new QLabel(event_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 130, 401, 17));
        lineEdit = new QLineEdit(event_command);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 160, 781, 31));

        retranslateUi(event_command);

        QMetaObject::connectSlotsByName(event_command);
    } // setupUi

    void retranslateUi(QWidget *event_command)
    {
        event_command->setWindowTitle(QApplication::translate("event_command", "Form", nullptr));
        label->setText(QApplication::translate("event_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\344\272\213\344\273\266</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("event_command", "\342\200\234\344\272\213\344\273\266\342\200\235\344\270\216\342\200\234\344\270\255\346\226\255\342\200\235\347\261\273\344\274\274\357\274\214\344\270\215\350\277\207\357\274\214\345\234\250\345\217\221\347\224\237\344\272\213\344\273\266\346\227\266\357\274\214\346\211\247\350\241\214\344\272\213\344\273\266\344\273\243\347\240\201\347\232\204\345\220\214\346\227\266\344\274\232\347\273\247\347\273\255\346\211\247\350\241\214\344\270\273\347\250\213\345\272\217\357\274\214\344\272\213\344\273\266\346\211\247\350\241\214\347\232\204\350\277\207\347\250\213\344\270\255\357\274\214\346\226\260\344\272\213\344\273\266\344\270\215\345\217\227\345\275\261\345\223\215\343\200\202", nullptr));
        label_3->setText(QApplication::translate("event_command", "\346\240\271\346\215\256\347\211\271\345\256\232\344\274\240\346\204\237\345\231\250\350\276\223\345\205\245\347\232\204\347\212\266\346\200\201\346\210\226\347\250\213\345\272\217\345\217\230\351\207\217\357\274\214\345\260\206\346\211\247\350\241\214\344\273\245\344\270\213\347\250\213\345\272\217\350\241\214\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class event_command: public Ui_event_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENT_COMMAND_H
