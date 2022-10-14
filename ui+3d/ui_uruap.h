/********************************************************************************
** Form generated from reading UI file 'uruap.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_URUAP_H
#define UI_URUAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uruap
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *uruap)
    {
        if (uruap->objectName().isEmpty())
            uruap->setObjectName(QStringLiteral("uruap"));
        uruap->resize(781, 671);
        label = new QLabel(uruap);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 81, 31));
        label_2 = new QLabel(uruap);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 121, 21));
        textEdit = new QTextEdit(uruap);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 70, 741, 141));
        label_3 = new QLabel(uruap);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 230, 81, 17));
        textEdit_2 = new QTextEdit(uruap);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(20, 260, 741, 311));
        pushButton = new QPushButton(uruap);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 590, 121, 31));
        QFont font;
        font.setPointSize(15);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_2 = new QPushButton(uruap);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(150, 590, 121, 31));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral(""));
        pushButton_3 = new QPushButton(uruap);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(670, 600, 89, 41));

        retranslateUi(uruap);

        QMetaObject::connectSlotsByName(uruap);
    } // setupUi

    void retranslateUi(QWidget *uruap)
    {
        uruap->setWindowTitle(QApplication::translate("uruap", "Form", nullptr));
        label->setText(QApplication::translate("uruap", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">URCap</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("uruap", "\346\277\200\346\264\273\347\232\204URCap", nullptr));
        label_3->setText(QApplication::translate("uruap", "URCap\344\277\241\346\201\257", nullptr));
        pushButton->setText(QApplication::translate("uruap", "+", nullptr));
        pushButton_2->setText(QApplication::translate("uruap", "+", nullptr));
        pushButton_3->setText(QApplication::translate("uruap", "\351\207\215\345\220\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uruap: public Ui_uruap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_URUAP_H
