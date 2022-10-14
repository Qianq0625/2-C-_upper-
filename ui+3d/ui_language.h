/********************************************************************************
** Form generated from reading UI file 'language.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANGUAGE_H
#define UI_LANGUAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_language
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QCheckBox *checkBox;
    QFrame *line;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QWidget *language)
    {
        if (language->objectName().isEmpty())
            language->setObjectName(QStringLiteral("language"));
        language->resize(781, 671);
        label = new QLabel(language);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 101, 31));
        comboBox = new QComboBox(language);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setGeometry(QRect(30, 60, 161, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        checkBox = new QCheckBox(language);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(60, 110, 181, 23));
        line = new QFrame(language);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 150, 741, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(language);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 180, 101, 31));
        radioButton = new QRadioButton(language);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(30, 220, 112, 23));
        radioButton_2 = new QRadioButton(language);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(30, 250, 112, 23));
        label_3 = new QLabel(language);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(520, 580, 241, 20));
        pushButton = new QPushButton(language);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(678, 610, 71, 41));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(language);

        QMetaObject::connectSlotsByName(language);
    } // setupUi

    void retranslateUi(QWidget *language)
    {
        language->setWindowTitle(QApplication::translate("language", "Form", nullptr));
        label->setText(QApplication::translate("language", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\350\257\255\350\250\200\351\200\211\346\213\251</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QApplication::translate("language", "\344\270\255\346\226\207\347\211\210\357\274\210\347\256\200\344\275\223\357\274\211", nullptr));

        checkBox->setText(QApplication::translate("language", "English programming", nullptr));
        label_2->setText(QApplication::translate("language", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\345\215\225\344\275\215\351\200\211\346\213\251</span></p></body></html>", nullptr));
        radioButton->setText(QApplication::translate("language", "\345\205\254\345\210\266\345\215\225\344\275\215", nullptr));
        radioButton_2->setText(QApplication::translate("language", "\347\276\216\345\233\275\346\203\257\344\276\213", nullptr));
        label_3->setText(QApplication::translate("language", "\351\207\215\346\226\260\345\220\257\345\212\250PolyScope\344\273\245\344\275\277\346\226\260\350\256\276\347\275\256\347\224\237\346\225\210", nullptr));
        pushButton->setText(QApplication::translate("language", "\351\207\215\345\220\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class language: public Ui_language {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANGUAGE_H
