/********************************************************************************
** Form generated from reading UI file 'subprogram.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBPROGRAM_H
#define UI_SUBPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Subprogram
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;

    void setupUi(QWidget *Subprogram)
    {
        if (Subprogram->objectName().isEmpty())
            Subprogram->setObjectName(QStringLiteral("Subprogram"));
        Subprogram->resize(821, 531);
        label = new QLabel(Subprogram);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 171, 31));
        label_2 = new QLabel(Subprogram);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 381, 17));
        label_3 = new QLabel(Subprogram);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 80, 91, 21));
        lineEdit = new QLineEdit(Subprogram);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 110, 711, 31));
        pushButton = new QPushButton(Subprogram);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 10, 141, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_2 = new QPushButton(Subprogram);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 150, 181, 31));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_3 = new QPushButton(Subprogram);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 380, 291, 31));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_4 = new QPushButton(Subprogram);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 380, 291, 31));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        checkBox = new QCheckBox(Subprogram);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 420, 231, 23));
        checkBox_2 = new QCheckBox(Subprogram);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 460, 131, 23));
        checkBox_2->setChecked(true);
        checkBox_3 = new QCheckBox(Subprogram);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 500, 161, 23));

        retranslateUi(Subprogram);

        QMetaObject::connectSlotsByName(Subprogram);
    } // setupUi

    void retranslateUi(QWidget *Subprogram)
    {
        Subprogram->setWindowTitle(QApplication::translate("Subprogram", "Form", nullptr));
        label->setText(QApplication::translate("Subprogram", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">SubProgram_1</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Subprogram", "\345\255\220\347\250\213\345\272\217\345\217\257\344\273\245\346\214\207\345\220\221\347\243\201\347\233\230\344\270\212\347\232\204\346\226\207\344\273\266\357\274\214\344\271\237\345\217\257\344\273\245\345\214\205\345\220\253\345\234\250\346\255\244\347\250\213\345\272\217\344\270\255\343\200\202", nullptr));
        label_3->setText(QApplication::translate("Subprogram", "\345\255\220\347\250\213\345\272\217\346\226\207\344\273\266\357\274\232", nullptr));
        lineEdit->setText(QApplication::translate("Subprogram", "< No File Selected >", nullptr));
        pushButton->setText(QApplication::translate("Subprogram", "\351\207\215\345\221\275\345\220\215", nullptr));
        pushButton_2->setText(QApplication::translate("Subprogram", "\345\212\240\350\275\275\346\226\207\344\273\266", nullptr));
        pushButton_3->setText(QApplication::translate("Subprogram", "\344\277\235\345\255\230\345\255\220\347\250\213\345\272\217", nullptr));
        pushButton_4->setText(QApplication::translate("Subprogram", "\346\270\205\351\231\244\345\255\220\347\250\213\345\272\217", nullptr));
        checkBox->setText(QApplication::translate("Subprogram", "\345\257\271\346\255\244\347\250\213\345\272\217\344\270\215\346\226\255\346\233\264\346\226\260\345\255\220\347\250\213\345\272\217\346\226\207\344\273\266", nullptr));
        checkBox_2->setText(QApplication::translate("Subprogram", "\346\230\276\347\244\272\345\255\220\347\250\213\345\272\217\346\240\221", nullptr));
        checkBox_3->setText(QApplication::translate("Subprogram", "\350\267\237\350\270\252\347\250\213\345\272\217\346\211\247\350\241\214\346\203\205\345\206\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Subprogram: public Ui_Subprogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBPROGRAM_H
