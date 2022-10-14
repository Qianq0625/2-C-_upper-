/********************************************************************************
** Form generated from reading UI file 'exporation_type.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORATION_TYPE_H
#define UI_EXPORATION_TYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exporation_type
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *exporation_type)
    {
        if (exporation_type->objectName().isEmpty())
            exporation_type->setObjectName(QStringLiteral("exporation_type"));
        exporation_type->resize(821, 531);
        label = new QLabel(exporation_type);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 161, 31));
        label_2 = new QLabel(exporation_type);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 101, 17));
        label_3 = new QLabel(exporation_type);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 110, 201, 17));
        label_4 = new QLabel(exporation_type);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 180, 211, 17));
        pushButton = new QPushButton(exporation_type);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 240, 221, 81));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_2 = new QPushButton(exporation_type);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 240, 231, 81));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(exporation_type);

        QMetaObject::connectSlotsByName(exporation_type);
    } // setupUi

    void retranslateUi(QWidget *exporation_type)
    {
        exporation_type->setWindowTitle(QApplication::translate("exporation_type", "Form", nullptr));
        label->setText(QApplication::translate("exporation_type", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\351\200\211\346\213\251\346\216\242\345\257\273\347\261\273\345\236\213</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("exporation_type", "\346\216\242\345\257\273\346\223\215\344\275\234\347\224\261", nullptr));
        label_3->setText(QApplication::translate("exporation_type", "\350\265\267\345\247\213\344\275\215\347\275\256s\345\222\214\346\226\271\345\220\221d\346\235\245\350\256\276\345\256\232\343\200\202", nullptr));
        label_4->setText(QApplication::translate("exporation_type", "\350\257\267\345\234\250\347\240\201\345\236\233\345\222\214\345\215\270\345\236\233\344\271\213\351\227\264\350\277\233\350\241\214\351\200\211\346\213\251\343\200\202", nullptr));
        pushButton->setText(QApplication::translate("exporation_type", "\347\240\201\345\236\233", nullptr));
        pushButton_2->setText(QApplication::translate("exporation_type", "\345\215\270\345\236\233", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exporation_type: public Ui_exporation_type {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORATION_TYPE_H
