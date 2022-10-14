/********************************************************************************
** Form generated from reading UI file 'beforestart.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEFORESTART_H
#define UI_BEFORESTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_beforestart
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *beforestart)
    {
        if (beforestart->objectName().isEmpty())
            beforestart->setObjectName(QStringLiteral("beforestart"));
        beforestart->resize(821, 531);
        label = new QLabel(beforestart);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 151, 41));
        label_2 = new QLabel(beforestart);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 60, 211, 17));

        retranslateUi(beforestart);

        QMetaObject::connectSlotsByName(beforestart);
    } // setupUi

    void retranslateUi(QWidget *beforestart)
    {
        beforestart->setWindowTitle(QApplication::translate("beforestart", "Form", nullptr));
        label->setText(QApplication::translate("beforestart", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">BeforeStart</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("beforestart", "\346\255\244\345\272\217\345\210\227\345\260\206\345\234\250\344\270\273\347\250\213\345\272\217\344\271\213\345\211\215\346\211\247\350\241\214\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class beforestart: public Ui_beforestart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEFORESTART_H
