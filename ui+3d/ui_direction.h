/********************************************************************************
** Form generated from reading UI file 'direction.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIRECTION_H
#define UI_DIRECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_direction
{
public:
    QLabel *label;
    QLabel *label_2;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QWidget *direction)
    {
        if (direction->objectName().isEmpty())
            direction->setObjectName(QStringLiteral("direction"));
        direction->resize(821, 531);
        label = new QLabel(direction);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 61, 41));
        label_2 = new QLabel(direction);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 451, 17));
        checkBox = new QCheckBox(direction);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 100, 141, 23));
        lineEdit = new QLineEdit(direction);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 100, 81, 25));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(direction);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 100, 67, 21));
        checkBox_2 = new QCheckBox(direction);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 140, 161, 23));
        lineEdit_2 = new QLineEdit(direction);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 140, 401, 31));
        pushButton = new QPushButton(direction);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 140, 91, 31));
        groupBox = new QGroupBox(direction);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(560, 360, 241, 151));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 40, 67, 17));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 70, 67, 17));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 30, 81, 31));
        lineEdit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(90, 70, 81, 31));
        lineEdit_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 110, 161, 31));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(180, 40, 51, 21));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(180, 70, 41, 31));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 60, 16, 20));

        retranslateUi(direction);

        QMetaObject::connectSlotsByName(direction);
    } // setupUi

    void retranslateUi(QWidget *direction)
    {
        direction->setWindowTitle(QApplication::translate("direction", "Form", nullptr));
        label->setText(QApplication::translate("direction", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\226\271\345\220\221</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("direction", "\344\270\244\344\270\252\350\267\257\347\202\271\347\232\204\345\267\245\345\205\267\344\270\255\345\277\203\347\202\271\357\274\210TCP\357\274\211\344\275\215\347\275\256\344\271\213\351\227\264\347\232\204\350\277\236\346\216\245\347\241\256\345\256\232\344\272\206\345\236\233\345\240\206\346\226\271\345\220\221\343\200\202", nullptr));
        checkBox->setText(QApplication::translate("direction", "\345\234\250\350\257\245\350\267\235\347\246\273\345\220\216\345\201\234\346\255\242", nullptr));
        lineEdit->setText(QApplication::translate("direction", "500.0", nullptr));
        label_3->setText(QApplication::translate("direction", "mm", nullptr));
        checkBox_2->setText(QApplication::translate("direction", "\346\273\241\350\266\263\344\273\245\344\270\213\346\235\241\344\273\266\345\201\234\346\255\242", nullptr));
        pushButton->setText(QApplication::translate("direction", "f(x)", nullptr));
        groupBox->setTitle(QApplication::translate("direction", "\345\205\261\344\272\253\345\217\202\346\225\260", nullptr));
        label_4->setText(QApplication::translate("direction", "\345\267\245\345\205\267\351\200\237\345\272\246", nullptr));
        label_5->setText(QApplication::translate("direction", "\345\267\245\345\205\267\345\212\240\351\200\237", nullptr));
        lineEdit_3->setText(QApplication::translate("direction", "250", nullptr));
        lineEdit_4->setText(QApplication::translate("direction", "1200", nullptr));
        pushButton_4->setText(QApplication::translate("direction", "\351\207\215\347\275\256\344\270\272\351\273\230\350\256\244\345\200\274", nullptr));
        label_7->setText(QApplication::translate("direction", "mm/S", nullptr));
        label_8->setText(QApplication::translate("direction", "mm/S", nullptr));
        label_9->setText(QApplication::translate("direction", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class direction: public Ui_direction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIRECTION_H
