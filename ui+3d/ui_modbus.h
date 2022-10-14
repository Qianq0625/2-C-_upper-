/********************************************************************************
** Form generated from reading UI file 'modbus.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODBUS_H
#define UI_MODBUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modbus
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;

    void setupUi(QWidget *modbus)
    {
        if (modbus->objectName().isEmpty())
            modbus->setObjectName(QStringLiteral("modbus"));
        modbus->resize(1050, 591);
        groupBox = new QGroupBox(modbus);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, -20, 1051, 611));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(530, 30, 501, 561));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 30, 511, 561));

        retranslateUi(modbus);

        QMetaObject::connectSlotsByName(modbus);
    } // setupUi

    void retranslateUi(QWidget *modbus)
    {
        modbus->setWindowTitle(QApplication::translate("modbus", "Form", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QApplication::translate("modbus", "\350\276\223\345\207\272", nullptr));
        groupBox_3->setTitle(QApplication::translate("modbus", "\350\276\223\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modbus: public Ui_modbus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODBUS_H
