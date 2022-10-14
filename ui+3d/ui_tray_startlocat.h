/********************************************************************************
** Form generated from reading UI file 'tray_startlocat.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAY_STARTLOCAT_H
#define UI_TRAY_STARTLOCAT_H

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

class Ui_tray_startlocat
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;

    void setupUi(QWidget *tray_startlocat)
    {
        if (tray_startlocat->objectName().isEmpty())
            tray_startlocat->setObjectName(QStringLiteral("tray_startlocat"));
        tray_startlocat->resize(821, 531);
        label = new QLabel(tray_startlocat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 131, 41));
        pushButton = new QPushButton(tray_startlocat);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 20, 89, 25));
        groupBox = new QGroupBox(tray_startlocat);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 50, 191, 201));
        pushButton_2 = new QPushButton(tray_startlocat);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 90, 89, 25));

        retranslateUi(tray_startlocat);

        QMetaObject::connectSlotsByName(tray_startlocat);
    } // setupUi

    void retranslateUi(QWidget *tray_startlocat)
    {
        tray_startlocat->setWindowTitle(QApplication::translate("tray_startlocat", "Form", nullptr));
        label->setText(QApplication::translate("tray_startlocat", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\350\265\267\345\247\213\344\275\215\347\275\256_1</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("tray_startlocat", "\351\207\215\345\221\275\345\220\215", nullptr));
        groupBox->setTitle(QString());
        pushButton_2->setText(QApplication::translate("tray_startlocat", "\346\214\207\345\256\232\344\275\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tray_startlocat: public Ui_tray_startlocat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAY_STARTLOCAT_H
