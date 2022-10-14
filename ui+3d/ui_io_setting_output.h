/********************************************************************************
** Form generated from reading UI file 'io_setting_output.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IO_SETTING_OUTPUT_H
#define UI_IO_SETTING_OUTPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_io_setting_output
{
public:
    QComboBox *comboBox_3;
    QComboBox *comboBox_2;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QWidget *io_setting_output)
    {
        if (io_setting_output->objectName().isEmpty())
            io_setting_output->setObjectName(QStringLiteral("io_setting_output"));
        io_setting_output->resize(751, 141);
        comboBox_3 = new QComboBox(io_setting_output);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setEnabled(false);
        comboBox_3->setGeometry(QRect(410, 30, 321, 31));
        comboBox_3->setEditable(true);
        comboBox_2 = new QComboBox(io_setting_output);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setEnabled(false);
        comboBox_2->setGeometry(QRect(10, 100, 381, 31));
        comboBox_2->setEditable(true);
        label_6 = new QLabel(io_setting_output);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(420, 10, 111, 21));
        label_5 = new QLabel(io_setting_output);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 70, 91, 17));
        lineEdit = new QLineEdit(io_setting_output);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 281, 31));
        label_4 = new QLabel(io_setting_output);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 181, 17));
        pushButton = new QPushButton(io_setting_output);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 30, 89, 31));

        retranslateUi(io_setting_output);

        QMetaObject::connectSlotsByName(io_setting_output);
    } // setupUi

    void retranslateUi(QWidget *io_setting_output)
    {
        io_setting_output->setWindowTitle(QApplication::translate("io_setting_output", "Form", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("io_setting_output", "\345\220\257\347\224\250", nullptr));

        comboBox_2->setItemText(0, QApplication::translate("io_setting_output", "\350\277\220\350\241\214\346\227\266\346\234\200\351\253\230-\345\201\234\346\255\242\346\227\266\346\234\200\344\275\216", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("io_setting_output", "\346\227\240", nullptr));

        label_6->setText(QApplication::translate("io_setting_output", "I/O\351\200\211\351\241\271\345\215\241\346\216\247\345\210\266", nullptr));
        label_5->setText(QApplication::translate("io_setting_output", "\347\250\213\345\272\217\344\270\255\347\232\204\346\223\215\344\275\234", nullptr));
        label_4->setText(QApplication::translate("io_setting_output", "\351\207\215\345\221\275\345\220\215\357\274\210\350\246\201\345\234\250\347\250\213\345\272\217\344\270\255\344\275\277\347\224\250\357\274\211", nullptr));
        pushButton->setText(QApplication::translate("io_setting_output", "\346\270\205\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class io_setting_output: public Ui_io_setting_output {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IO_SETTING_OUTPUT_H
