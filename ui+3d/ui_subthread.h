/********************************************************************************
** Form generated from reading UI file 'subthread.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBTHREAD_H
#define UI_SUBTHREAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Subthread
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;

    void setupUi(QWidget *Subthread)
    {
        if (Subthread->objectName().isEmpty())
            Subthread->setObjectName(QStringLiteral("Subthread"));
        Subthread->resize(821, 531);
        label = new QLabel(Subthread);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 141, 31));
        label_2 = new QLabel(Subthread);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 281, 21));
        comboBox = new QComboBox(Subthread);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 100, 411, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);

        retranslateUi(Subthread);

        QMetaObject::connectSlotsByName(Subthread);
    } // setupUi

    void retranslateUi(QWidget *Subthread)
    {
        Subthread->setWindowTitle(QApplication::translate("Subthread", "Form", nullptr));
        label->setText(QApplication::translate("Subthread", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\350\260\203\347\224\250\345\255\220\344\276\213\347\250\213</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Subthread", "\351\200\211\346\213\251\345\234\250\347\250\213\345\272\217\346\211\247\350\241\214\350\207\263\346\255\244\347\202\271\345\244\204\345\244\232\350\260\203\347\224\250\347\232\204\345\255\220\344\276\213\347\250\213\343\200\202", nullptr));
        comboBox->setItemText(0, QApplication::translate("Subthread", "SubProgram_1", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Subthread: public Ui_Subthread {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBTHREAD_H
