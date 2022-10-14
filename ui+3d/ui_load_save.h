/********************************************************************************
** Form generated from reading UI file 'load_save.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOAD_SAVE_H
#define UI_LOAD_SAVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_load_save
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *load_save)
    {
        if (load_save->objectName().isEmpty())
            load_save->setObjectName(QStringLiteral("load_save"));
        load_save->resize(781, 641);
        label = new QLabel(load_save);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 10, 351, 41));
        label_2 = new QLabel(load_save);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 741, 41));
        label_2->setWordWrap(true);
        label_3 = new QLabel(load_save);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 200, 141, 17));
        lineEdit = new QLineEdit(load_save);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 220, 381, 31));
        pushButton = new QPushButton(load_save);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 260, 71, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_2 = new QPushButton(load_save);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 260, 101, 31));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_4 = new QLabel(load_save);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 330, 181, 17));
        pushButton_3 = new QPushButton(load_save);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 360, 71, 31));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_4 = new QPushButton(load_save);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(140, 360, 71, 31));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(load_save);

        QMetaObject::connectSlotsByName(load_save);
    } // setupUi

    void retranslateUi(QWidget *load_save)
    {
        load_save->setWindowTitle(QApplication::translate("load_save", "Form", nullptr));
        label->setText(QApplication::translate("load_save", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\345\212\240\350\275\275/\344\277\235\345\255\230\346\234\272\345\231\250\344\272\272\345\256\211\350\243\205\350\256\276\347\275\256\350\207\263\346\226\207\344\273\266</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("load_save", "\346\234\272\345\231\250\344\272\272\345\256\211\350\243\205\350\256\276\347\275\256\346\266\265\347\233\226\344\272\206\346\234\272\345\231\250\344\272\272\345\234\250\345\267\245\344\275\234\347\216\257\345\242\203\344\270\255\350\256\276\347\275\256\347\232\204\346\226\271\346\226\271\351\235\242\351\235\242\343\200\202\345\214\205\346\213\254\346\234\272\345\231\250\344\272\272\347\232\204\346\234\272\346\242\260\345\256\211\350\243\205\357\274\214\344\270\216\345\205\266\344\273\226\350\256\276\345\244\207\347\232\204\347\224\265\346\260\224\350\277\236\346\216\245\357\274\214\344\273\245\345\217\212\346\234\272\345\231\250\344\272\272\347\250\213\345\272\217\344\276\235\350\265\226\347\232\204\346\211\200\346\234\211\345\205\266\344\273\226\351\200\211\351\241\271\343\200\202\344\270\215\345\214\205\346\213\254\347\250\213\345\272\217\346\234\254\350\272\253\343\200\202", nullptr));
        label_3->setText(QApplication::translate("load_save", "\344\277\235\345\255\230\345\275\223\345\211\215\347\232\204\345\256\211\350\243\205\350\256\276\347\275\256", nullptr));
        lineEdit->setText(QApplication::translate("load_save", "default", nullptr));
        pushButton->setText(QApplication::translate("load_save", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QApplication::translate("load_save", "\345\217\246\345\255\230\344\270\272...", nullptr));
        label_4->setText(QApplication::translate("load_save", "\345\212\240\350\275\275\344\270\215\345\220\214\347\232\204\345\256\211\350\243\205\350\256\276\347\275\256\346\226\207\344\273\266", nullptr));
        pushButton_3->setText(QApplication::translate("load_save", "\345\212\240\350\275\275", nullptr));
        pushButton_4->setText(QApplication::translate("load_save", "\346\226\260\345\273\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class load_save: public Ui_load_save {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOAD_SAVE_H
