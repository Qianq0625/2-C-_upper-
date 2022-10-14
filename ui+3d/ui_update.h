/********************************************************************************
** Form generated from reading UI file 'update.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_H
#define UI_UPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_update
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label_2;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;

    void setupUi(QWidget *update)
    {
        if (update->objectName().isEmpty())
            update->setObjectName(QStringLiteral("update"));
        update->resize(781, 671);
        label = new QLabel(update);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 10, 181, 41));
        pushButton = new QPushButton(update);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 70, 91, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        textEdit = new QTextEdit(update);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(170, 70, 551, 161));
        label_2 = new QLabel(update);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 230, 351, 31));
        groupBox = new QGroupBox(update);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(130, 270, 601, 281));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 131, 21));
        lineEdit = new QLineEdit(update);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 590, 531, 31));
        pushButton_2 = new QPushButton(update);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(610, 590, 91, 31));

        retranslateUi(update);

        QMetaObject::connectSlotsByName(update);
    } // setupUi

    void retranslateUi(QWidget *update)
    {
        update->setWindowTitle(QApplication::translate("update", "Form", nullptr));
        label->setText(QApplication::translate("update", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\233\264\346\226\260\346\234\272\345\231\250\344\272\272\350\275\257\344\273\266</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("update", "\346\220\234\347\264\242...", nullptr));
        label_2->setText(QApplication::translate("update", "\345\215\225\345\207\273\342\200\234\346\220\234\347\264\242...\342\200\235\345\217\257\344\270\213\350\275\275\346\255\244\346\234\272\345\231\250\344\272\272\345\275\223\345\211\215\345\217\257\347\224\250\347\232\204\346\233\264\346\226\260\345\210\227\350\241\250\343\200\202", nullptr));
        groupBox->setTitle(QApplication::translate("update", "\346\217\217\350\277\260", nullptr));
        label_3->setText(QApplication::translate("update", "\346\211\276\345\210\260\347\232\204\346\233\264\346\226\260\346\227\240\346\225\210\343\200\202", nullptr));
        pushButton_2->setText(QApplication::translate("update", "\346\233\264\346\226\260...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class update: public Ui_update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_H
