/********************************************************************************
** Form generated from reading UI file 'conveyor_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVEYOR_SETTINGS_H
#define UI_CONVEYOR_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_conveyor_settings
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *comboBox_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_10;
    QCheckBox *checkBox_2;
    QWidget *widget;
    QLabel *label_3;
    QLabel *label_9;
    QCheckBox *checkBox;
    QLabel *label_8;
    QLabel *label_5;
    QWidget *widget_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QComboBox *comboBox_4;
    QLabel *label_7;
    QLabel *label_2;

    void setupUi(QWidget *conveyor_settings)
    {
        if (conveyor_settings->objectName().isEmpty())
            conveyor_settings->setObjectName(QStringLiteral("conveyor_settings"));
        conveyor_settings->resize(781, 603);
        groupBox = new QGroupBox(conveyor_settings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, -20, 781, 621));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 171, 31));
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(420, 170, 251, 25));
        comboBox_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_3->setEditable(true);
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(420, 250, 251, 25));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_2->setEditable(true);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 160, 121, 17));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 280, 131, 17));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 490, 67, 17));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(420, 490, 92, 23));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 350, 711, 211));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 140, 81, 17));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 450, 67, 17));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(60, 70, 141, 23));
        checkBox->setChecked(true);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 410, 67, 17));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 240, 71, 31));
        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(30, 160, 671, 61));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(420, 400, 261, 31));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(420, 130, 251, 25));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(420, 450, 261, 25));
        comboBox_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_4->setEditable(true);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 380, 291, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 110, 101, 21));

        retranslateUi(conveyor_settings);

        QMetaObject::connectSlotsByName(conveyor_settings);
    } // setupUi

    void retranslateUi(QWidget *conveyor_settings)
    {
        conveyor_settings->setWindowTitle(QApplication::translate("conveyor_settings", "Form", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("conveyor_settings", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\350\276\223\351\200\201\346\234\272\350\267\237\350\270\252\350\256\276\347\275\256</span></p></body></html>", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("conveyor_settings", "\345\234\206\345\275\242", nullptr));

        comboBox_2->setItemText(0, QApplication::translate("conveyor_settings", "\351\200\211\346\213\251Modbus", nullptr));

        label_4->setText(QApplication::translate("conveyor_settings", "\347\274\226\347\240\201\345\231\250\350\256\241\346\225\260\345\217\257\345\217\230", nullptr));
        label_6->setText(QApplication::translate("conveyor_settings", "\351\200\211\346\213\251\350\276\223\351\200\201\346\234\272\347\261\273\345\236\213", nullptr));
        label_10->setText(QApplication::translate("conveyor_settings", "\346\227\213\350\275\254\345\267\245\345\205\267", nullptr));
        checkBox_2->setText(QString());
        label_3->setText(QApplication::translate("conveyor_settings", "\347\274\226\347\240\201\345\231\250\347\261\273\345\236\213", nullptr));
        label_9->setText(QApplication::translate("conveyor_settings", "\344\270\255\345\277\203", nullptr));
        checkBox->setText(QApplication::translate("conveyor_settings", "\345\220\257\347\224\250\350\276\223\351\200\201\346\234\272\350\267\237\350\270\252", nullptr));
        label_8->setText(QApplication::translate("conveyor_settings", "\346\257\217\350\275\254\350\267\263\346\225\260", nullptr));
        label_5->setText(QApplication::translate("conveyor_settings", "<html><head/><body><p><span style=\" font-weight:600;\">\350\267\237\350\270\252\345\217\202\346\225\260</span></p></body></html>", nullptr));
        lineEdit->setText(QApplication::translate("conveyor_settings", "0", nullptr));
        comboBox->setItemText(0, QApplication::translate("conveyor_settings", "\347\273\235\345\257\271\345\274\217", nullptr));

        comboBox_4->setItemText(0, QApplication::translate("conveyor_settings", "\345\234\206\345\275\242", nullptr));

        label_7->setText(QApplication::translate("conveyor_settings", "\346\263\250\346\204\217\357\274\232\345\256\232\344\271\211\344\270\200\344\270\252\346\214\207\345\256\232\350\276\223\351\200\201\346\234\272\344\270\255\345\277\203\347\232\204\347\202\271\347\211\271\345\276\201", nullptr));
        label_2->setText(QApplication::translate("conveyor_settings", "<html><head/><body><p><span style=\" font-weight:600;\">\350\276\223\351\200\201\346\234\272\345\217\202\346\225\260</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class conveyor_settings: public Ui_conveyor_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVEYOR_SETTINGS_H
