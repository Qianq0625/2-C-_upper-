/********************************************************************************
** Form generated from reading UI file 'thread_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREAD_COMMAND_H
#define UI_THREAD_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thread_command
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;

    void setupUi(QWidget *thread_command)
    {
        if (thread_command->objectName().isEmpty())
            thread_command->setObjectName(QStringLiteral("thread_command"));
        thread_command->resize(821, 531);
        label = new QLabel(thread_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 81, 31));
        label_2 = new QLabel(thread_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 601, 17));
        label_3 = new QLabel(thread_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 271, 17));
        checkBox = new QCheckBox(thread_command);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 440, 92, 23));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(thread_command);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 480, 151, 23));

        retranslateUi(thread_command);

        QMetaObject::connectSlotsByName(thread_command);
    } // setupUi

    void retranslateUi(QWidget *thread_command)
    {
        thread_command->setWindowTitle(QApplication::translate("thread_command", "Form", nullptr));
        label->setText(QApplication::translate("thread_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\347\272\277\347\250\213</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("thread_command", "\347\272\277\347\250\213\346\230\257\346\214\207\351\232\217\344\270\273\347\250\213\345\272\217\344\270\200\350\265\267\350\277\220\350\241\214\347\232\204\345\271\266\350\241\214\347\250\213\345\272\217\343\200\202\347\272\277\347\250\213\345\217\257\344\273\245\346\211\247\350\241\214I/O\345\212\250\344\275\234\343\200\201\347\255\211\345\276\205\344\277\241\345\217\267\344\273\245\345\217\212\350\256\276\347\275\256\345\217\230\351\207\217\343\200\202", nullptr));
        label_3->setText(QApplication::translate("thread_command", "\350\277\231\345\217\257\347\224\250\344\272\216\345\234\250\346\234\272\345\231\250\344\272\272\350\277\220\350\241\214\346\227\266\346\216\247\345\210\266\345\205\266\344\273\226\346\234\272\345\231\250\343\200\202", nullptr));
        checkBox->setText(QApplication::translate("thread_command", "\346\260\270\350\277\234\345\276\252\347\216\257", nullptr));
        checkBox_2->setText(QApplication::translate("thread_command", "\350\267\237\350\270\252\347\250\213\345\272\217\346\211\247\350\241\214\346\203\205\345\206\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thread_command: public Ui_thread_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREAD_COMMAND_H
