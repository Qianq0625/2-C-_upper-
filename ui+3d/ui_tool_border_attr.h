/********************************************************************************
** Form generated from reading UI file 'tool_border_attr.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOL_BORDER_ATTR_H
#define UI_TOOL_BORDER_ATTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tool_border_attr
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_4;
    QComboBox *comboBox_2;

    void setupUi(QWidget *tool_border_attr)
    {
        if (tool_border_attr->objectName().isEmpty())
            tool_border_attr->setObjectName(QStringLiteral("tool_border_attr"));
        tool_border_attr->resize(811, 151);
        label = new QLabel(tool_border_attr);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 121, 21));
        label_2 = new QLabel(tool_border_attr);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 30, 41, 21));
        lineEdit = new QLineEdit(tool_border_attr);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 60, 31, 21));
        label_3 = new QLabel(tool_border_attr);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 67, 17));
        comboBox = new QComboBox(tool_border_attr);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 110, 271, 31));
        pushButton = new QPushButton(tool_border_attr);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 110, 41, 31));
        label_11 = new QLabel(tool_border_attr);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(60, 60, 67, 17));
        label_12 = new QLabel(tool_border_attr);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(90, 60, 71, 16));
        label_13 = new QLabel(tool_border_attr);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(70, 60, 20, 20));
        label_13->setFrameShape(QFrame::HLine);
        label_16 = new QLabel(tool_border_attr);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(150, 50, 20, 31));
        label_4 = new QLabel(tool_border_attr);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(430, 30, 111, 21));
        comboBox_2 = new QComboBox(tool_border_attr);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(430, 60, 351, 31));

        retranslateUi(tool_border_attr);

        QMetaObject::connectSlotsByName(tool_border_attr);
    } // setupUi

    void retranslateUi(QWidget *tool_border_attr)
    {
        tool_border_attr->setWindowTitle(QApplication::translate("tool_border_attr", "Form", nullptr));
        label->setText(QApplication::translate("tool_border_attr", "<html><head/><body><p><span style=\" font-weight:600;\">\345\267\245\345\205\267\350\276\271\347\225\214\345\261\236\346\200\247</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("tool_border_attr", "\345\201\217\347\246\273", nullptr));
        lineEdit->setText(QApplication::translate("tool_border_attr", "35", nullptr));
        label_3->setText(QApplication::translate("tool_border_attr", "\345\244\215\345\210\266\347\211\271\346\200\247", nullptr));
        pushButton->setText(QString());
        label_11->setText(QApplication::translate("tool_border_attr", "5", nullptr));
        label_12->setText(QApplication::translate("tool_border_attr", "181,-1.0", nullptr));
        label_13->setText(QString());
        label_16->setText(QApplication::translate("tool_border_attr", "\302\260", nullptr));
        label_4->setText(QApplication::translate("tool_border_attr", "\351\200\211\346\213\251\345\256\211\345\205\250\346\250\241\345\274\217:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tool_border_attr: public Ui_tool_border_attr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOL_BORDER_ATTR_H
