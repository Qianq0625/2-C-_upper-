/********************************************************************************
** Form generated from reading UI file 'new_build.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_BUILD_H
#define UI_NEW_BUILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_new_build
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *new_build)
    {
        if (new_build->objectName().isEmpty())
            new_build->setObjectName(QStringLiteral("new_build"));
        new_build->resize(1051, 641);
        label = new QLabel(new_build);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(480, 10, 111, 61));
        groupBox = new QGroupBox(new_build);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(119, 60, 791, 161));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(148, 44, 491, 41));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        groupBox_2 = new QGroupBox(new_build);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 230, 791, 391));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 60, 491, 41));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 130, 491, 41));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(new_build);

        QMetaObject::connectSlotsByName(new_build);
    } // setupUi

    void retranslateUi(QWidget *new_build)
    {
        new_build->setWindowTitle(QApplication::translate("new_build", "Form", nullptr));
        label->setText(QApplication::translate("new_build", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\226\260\345\273\272\347\250\213\345\272\217</span></p></body></html>", nullptr));
        groupBox->setTitle(QApplication::translate("new_build", "\344\273\216\346\226\207\344\273\266\345\212\240\350\275\275", nullptr));
        pushButton->setText(QApplication::translate("new_build", "\345\212\240\350\275\275\347\250\213\345\272\217", nullptr));
        groupBox_2->setTitle(QApplication::translate("new_build", "\344\275\277\347\224\250\346\250\241\346\235\277", nullptr));
        pushButton_2->setText(QApplication::translate("new_build", "\346\213\276\345\217\226\345\222\214\346\224\276\347\275\256", nullptr));
        pushButton_3->setText(QApplication::translate("new_build", "\347\251\272\347\250\213\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_build: public Ui_new_build {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_BUILD_H
