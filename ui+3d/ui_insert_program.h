/********************************************************************************
** Form generated from reading UI file 'insert_program.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_PROGRAM_H
#define UI_INSERT_PROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_insert_program
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *insert_program)
    {
        if (insert_program->objectName().isEmpty())
            insert_program->setObjectName(QStringLiteral("insert_program"));
        insert_program->resize(821, 531);
        label = new QLabel(insert_program);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 201, 31));
        label_2 = new QLabel(insert_program);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 511, 21));
        pushButton = new QPushButton(insert_program);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(548, 104, 231, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(insert_program);

        QMetaObject::connectSlotsByName(insert_program);
    } // setupUi

    void retranslateUi(QWidget *insert_program)
    {
        insert_program->setWindowTitle(QApplication::translate("insert_program", "Form", nullptr));
        label->setText(QApplication::translate("insert_program", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\345\234\250\346\255\244\345\244\204\346\217\222\345\205\245\347\250\213\345\272\217\350\241\214</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("insert_program", "\345\234\250\347\273\223\346\236\204\351\200\211\351\241\271\345\215\241\344\270\255\357\274\214\346\202\250\344\274\232\346\211\276\345\210\260\345\220\204\347\247\215\347\250\213\345\272\217\350\241\250\350\276\276\345\274\217\357\274\214\350\277\231\344\272\233\350\241\250\350\276\276\345\274\217\345\217\257\344\273\245\346\217\222\345\205\245\345\210\260\347\250\213\345\272\217\344\270\255\343\200\202", nullptr));
        pushButton->setText(QApplication::translate("insert_program", "\347\273\223\346\236\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insert_program: public Ui_insert_program {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_PROGRAM_H
