/********************************************************************************
** Form generated from reading UI file 'model_box.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODEL_BOX_H
#define UI_MODEL_BOX_H

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

class Ui_model_box
{
public:
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label_10;

    void setupUi(QWidget *model_box)
    {
        if (model_box->objectName().isEmpty())
            model_box->setObjectName(QStringLiteral("model_box"));
        model_box->resize(821, 531);
        lineEdit = new QLineEdit(model_box);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(680, 150, 101, 31));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(model_box);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 251, 21));
        label = new QLabel(model_box);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 141, 31));
        lineEdit_4 = new QLineEdit(model_box);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(680, 190, 101, 31));
        lineEdit_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_3 = new QPushButton(model_box);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 460, 101, 31));
        pushButton_2 = new QPushButton(model_box);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 420, 101, 31));
        label_3 = new QLabel(model_box);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(530, 160, 141, 17));
        groupBox = new QGroupBox(model_box);
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
        checkBox = new QCheckBox(model_box);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 100, 261, 23));
        pushButton = new QPushButton(model_box);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 20, 131, 31));
        label_6 = new QLabel(model_box);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(530, 200, 141, 17));
        lineEdit_5 = new QLineEdit(model_box);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(680, 230, 101, 31));
        lineEdit_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(model_box);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(530, 240, 141, 17));

        retranslateUi(model_box);

        QMetaObject::connectSlotsByName(model_box);
    } // setupUi

    void retranslateUi(QWidget *model_box)
    {
        model_box->setWindowTitle(QApplication::translate("model_box", "Form", nullptr));
        lineEdit->setText(QApplication::translate("model_box", "5", nullptr));
        label_2->setText(QApplication::translate("model_box", "\347\224\250\344\272\216\350\241\250\347\244\272\347\273\217\350\277\207\344\275\215\347\275\256\347\232\204\350\256\241\346\225\260\345\217\230\351\207\217'cnt_3'", nullptr));
        label->setText(QApplication::translate("model_box", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\250\241\345\274\217\357\274\232\347\233\222\345\255\220</span></p></body></html>", nullptr));
        lineEdit_4->setText(QApplication::translate("model_box", "5", nullptr));
        pushButton_3->setText(QApplication::translate("model_box", "\347\247\273\351\231\244\347\202\271", nullptr));
        pushButton_2->setText(QApplication::translate("model_box", "\346\267\273\345\212\240\346\226\260\347\202\271", nullptr));
        label_3->setText(QApplication::translate("model_box", "\347\202\2711\350\207\263\347\202\2712\347\232\204\351\227\264\351\232\224\350\256\241\346\225\260", nullptr));
        groupBox->setTitle(QApplication::translate("model_box", "\345\205\261\344\272\253\345\217\202\346\225\260", nullptr));
        label_4->setText(QApplication::translate("model_box", "\345\267\245\345\205\267\351\200\237\345\272\246", nullptr));
        label_5->setText(QApplication::translate("model_box", "\345\267\245\345\205\267\345\212\240\351\200\237", nullptr));
        lineEdit_2->setText(QApplication::translate("model_box", "250", nullptr));
        lineEdit_3->setText(QApplication::translate("model_box", "1200", nullptr));
        pushButton_4->setText(QApplication::translate("model_box", "\351\207\215\347\275\256\344\270\272\351\273\230\350\256\244\345\200\274", nullptr));
        label_7->setText(QApplication::translate("model_box", "mm/S", nullptr));
        label_8->setText(QApplication::translate("model_box", "mm/S", nullptr));
        label_9->setText(QApplication::translate("model_box", "2", nullptr));
        checkBox->setText(QApplication::translate("model_box", "\350\256\260\344\275\217\344\270\244\346\254\241\347\250\213\345\272\217\350\277\220\350\241\214\344\271\213\351\227\264\347\232\204\350\267\250\350\266\212\344\275\215\347\275\256", nullptr));
        pushButton->setText(QApplication::translate("model_box", "\346\233\264\346\224\271\346\266\210\346\201\257", nullptr));
        label_6->setText(QApplication::translate("model_box", "\347\202\2712\350\207\263\347\202\2713\347\232\204\351\227\264\351\232\224\350\256\241\346\225\260", nullptr));
        lineEdit_5->setText(QApplication::translate("model_box", "5", nullptr));
        label_10->setText(QApplication::translate("model_box", "\347\202\2713\350\207\263\347\202\2714\347\232\204\351\227\264\351\232\224\350\256\241\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class model_box: public Ui_model_box {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODEL_BOX_H
