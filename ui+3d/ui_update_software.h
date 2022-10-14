/********************************************************************************
** Form generated from reading UI file 'update_software.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_SOFTWARE_H
#define UI_UPDATE_SOFTWARE_H

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

class Ui_update_software
{
public:
    QLabel *label_2;
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QWidget *update_software)
    {
        if (update_software->objectName().isEmpty())
            update_software->setObjectName(QStringLiteral("update_software"));
        update_software->resize(781, 671);
        label_2 = new QLabel(update_software);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 230, 351, 31));
        textEdit = new QTextEdit(update_software);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(140, 70, 551, 161));
        groupBox = new QGroupBox(update_software);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(100, 270, 601, 281));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 131, 21));
        label_3->setScaledContents(false);
        lineEdit = new QLineEdit(update_software);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 590, 531, 31));
        pushButton = new QPushButton(update_software);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 70, 91, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_2 = new QPushButton(update_software);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(610, 590, 91, 31));
        label = new QLabel(update_software);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 10, 181, 41));

        retranslateUi(update_software);

        QMetaObject::connectSlotsByName(update_software);
    } // setupUi

    void retranslateUi(QWidget *update_software)
    {
        update_software->setWindowTitle(QApplication::translate("update_software", "Form", nullptr));
        label_2->setText(QApplication::translate("update_software", "\345\215\225\345\207\273\342\200\234\346\220\234\347\264\242...\342\200\235\345\217\257\344\270\213\350\275\275\346\255\244\346\234\272\345\231\250\344\272\272\345\275\223\345\211\215\345\217\257\347\224\250\347\232\204\346\233\264\346\226\260\345\210\227\350\241\250\343\200\202", nullptr));
        groupBox->setTitle(QApplication::translate("update_software", "\346\217\217\350\277\260", nullptr));
        label_3->setText(QString());
        pushButton->setText(QApplication::translate("update_software", "\346\220\234\347\264\242...", nullptr));
        pushButton_2->setText(QApplication::translate("update_software", "\346\233\264\346\226\260...", nullptr));
        label->setText(QApplication::translate("update_software", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\233\264\346\226\260\346\234\272\345\231\250\344\272\272\350\275\257\344\273\266</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class update_software: public Ui_update_software {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_SOFTWARE_H
