/********************************************************************************
** Form generated from reading UI file 'safe_pasword.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFE_PASWORD_H
#define UI_SAFE_PASWORD_H

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

class Ui_safe_pasword
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *safe_pasword)
    {
        if (safe_pasword->objectName().isEmpty())
            safe_pasword->setObjectName(QStringLiteral("safe_pasword"));
        safe_pasword->resize(1009, 61);
        label = new QLabel(safe_pasword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 20, 71, 31));
        lineEdit = new QLineEdit(safe_pasword);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(432, 20, 191, 31));
        pushButton = new QPushButton(safe_pasword);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(638, 20, 91, 31));
        pushButton_2 = new QPushButton(safe_pasword);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(740, 20, 81, 31));
        pushButton_2->setCheckable(false);
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(false);
        pushButton_3 = new QPushButton(safe_pasword);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(900, 20, 81, 31));
        pushButton_3->setFocusPolicy(Qt::StrongFocus);
        pushButton_3->setAcceptDrops(false);

        retranslateUi(safe_pasword);

        QMetaObject::connectSlotsByName(safe_pasword);
    } // setupUi

    void retranslateUi(QWidget *safe_pasword)
    {
        safe_pasword->setWindowTitle(QApplication::translate("safe_pasword", "Form", nullptr));
        label->setText(QApplication::translate("safe_pasword", "\345\256\211\345\205\250\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("safe_pasword", "\350\247\243\351\224\201\343\200\202", nullptr));
        pushButton_2->setText(QApplication::translate("safe_pasword", "\351\224\201\345\256\232\343\200\202", nullptr));
        pushButton_3->setText(QApplication::translate("safe_pasword", "\345\272\224\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class safe_pasword: public Ui_safe_pasword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFE_PASWORD_H
