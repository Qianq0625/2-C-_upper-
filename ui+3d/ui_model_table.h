/********************************************************************************
** Form generated from reading UI file 'model_table.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODEL_TABLE_H
#define UI_MODEL_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_model_table
{
public:
    QLabel *label_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QPushButton *pushButton_2;

    void setupUi(QWidget *model_table)
    {
        if (model_table->objectName().isEmpty())
            model_table->setObjectName(QStringLiteral("model_table"));
        model_table->resize(821, 531);
        label_2 = new QLabel(model_table);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 251, 21));
        pushButton_3 = new QPushButton(model_table);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 460, 101, 31));
        groupBox = new QGroupBox(model_table);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(570, 360, 241, 151));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 40, 67, 17));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 70, 67, 17));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 30, 81, 31));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 70, 81, 31));
        lineEdit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 110, 161, 31));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(180, 40, 51, 21));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(180, 70, 41, 31));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 60, 16, 20));
        label = new QLabel(model_table);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 141, 31));
        pushButton = new QPushButton(model_table);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 20, 131, 31));
        checkBox = new QCheckBox(model_table);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 100, 261, 23));
        pushButton_2 = new QPushButton(model_table);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 420, 101, 31));

        retranslateUi(model_table);

        QMetaObject::connectSlotsByName(model_table);
    } // setupUi

    void retranslateUi(QWidget *model_table)
    {
        model_table->setWindowTitle(QApplication::translate("model_table", "Form", nullptr));
        label_2->setText(QApplication::translate("model_table", "\347\224\250\344\272\216\350\241\250\347\244\272\347\273\217\350\277\207\344\275\215\347\275\256\347\232\204\350\256\241\346\225\260\345\217\230\351\207\217'cnt_4'", nullptr));
        pushButton_3->setText(QApplication::translate("model_table", "\347\247\273\351\231\244\347\202\271", nullptr));
        groupBox->setTitle(QApplication::translate("model_table", "\345\205\261\344\272\253\345\217\202\346\225\260", nullptr));
        label_4->setText(QApplication::translate("model_table", "\345\267\245\345\205\267\351\200\237\345\272\246", nullptr));
        label_5->setText(QApplication::translate("model_table", "\345\267\245\345\205\267\345\212\240\351\200\237", nullptr));
        lineEdit_2->setText(QApplication::translate("model_table", "250", nullptr));
        lineEdit_3->setText(QApplication::translate("model_table", "1200", nullptr));
        pushButton_4->setText(QApplication::translate("model_table", "\351\207\215\347\275\256\344\270\272\351\273\230\350\256\244\345\200\274", nullptr));
        label_7->setText(QApplication::translate("model_table", "mm/S", nullptr));
        label_8->setText(QApplication::translate("model_table", "mm/S", nullptr));
        label_9->setText(QApplication::translate("model_table", "2", nullptr));
        label->setText(QApplication::translate("model_table", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\250\241\345\274\217\357\274\232\345\210\227\350\241\250</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("model_table", "\346\233\264\346\224\271\346\266\210\346\201\257", nullptr));
        checkBox->setText(QApplication::translate("model_table", "\350\256\260\344\275\217\344\270\244\346\254\241\347\250\213\345\272\217\350\277\220\350\241\214\344\271\213\351\227\264\347\232\204\350\267\250\350\266\212\344\275\215\347\275\256", nullptr));
        pushButton_2->setText(QApplication::translate("model_table", "\346\267\273\345\212\240\346\226\260\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class model_table: public Ui_model_table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODEL_TABLE_H
