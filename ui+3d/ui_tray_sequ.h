/********************************************************************************
** Form generated from reading UI file 'tray_sequ.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAY_SEQU_H
#define UI_TRAY_SEQU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tray_sequ
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox;

    void setupUi(QWidget *tray_sequ)
    {
        if (tray_sequ->objectName().isEmpty())
            tray_sequ->setObjectName(QStringLiteral("tray_sequ"));
        tray_sequ->resize(821, 531);
        label = new QLabel(tray_sequ);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 101, 51));
        label_2 = new QLabel(tray_sequ);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 251, 17));
        label_3 = new QLabel(tray_sequ);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 441, 51));
        label_3->setWordWrap(true);
        label_4 = new QLabel(tray_sequ);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 160, 221, 17));
        label_5 = new QLabel(tray_sequ);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 200, 67, 21));
        comboBox = new QComboBox(tray_sequ);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(110, 190, 91, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);

        retranslateUi(tray_sequ);

        QMetaObject::connectSlotsByName(tray_sequ);
    } // setupUi

    void retranslateUi(QWidget *tray_sequ)
    {
        tray_sequ->setWindowTitle(QApplication::translate("tray_sequ", "Form", nullptr));
        label->setText(QApplication::translate("tray_sequ", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\211\230\347\233\230\345\272\217\345\210\227</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("tray_sequ", "\346\234\272\345\231\250\344\272\272\345\234\250\346\257\217\344\270\252\344\275\215\347\275\256\345\272\224\346\211\247\350\241\214\344\273\200\344\271\210\345\212\250\344\275\234\357\274\237", nullptr));
        label_3->setText(QApplication::translate("tray_sequ", "\351\200\232\350\277\207\347\274\226\345\206\231\346\214\207\344\273\244\345\272\217\345\210\227\346\214\207\347\244\272\346\234\272\345\231\250\344\272\272\345\234\250\346\237\220\344\270\252\344\275\215\347\275\256\346\211\247\350\241\214\344\273\200\344\271\210\345\212\250\344\275\234\357\274\214\347\224\261\346\255\244\345\221\212\347\237\245\346\234\272\345\231\250\344\272\272\345\234\250\346\257\217\344\270\252\344\275\215\347\275\256\345\244\204\346\211\247\350\241\214\344\273\200\344\271\210\345\212\250\344\275\234\343\200\202", nullptr));
        label_4->setText(QApplication::translate("tray_sequ", "\346\214\211\347\205\247\345\256\232\344\271\211\357\274\214\351\224\232\347\202\271\344\275\215\347\275\256\344\270\272\346\226\260\344\275\215\347\275\256\343\200\202", nullptr));
        label_5->setText(QApplication::translate("tray_sequ", "\351\224\232\347\202\271\344\275\215\347\275\256", nullptr));
        comboBox->setItemText(0, QApplication::translate("tray_sequ", "\346\250\241\345\274\217\347\202\271_2", nullptr));

    } // retranslateUi

};

namespace Ui {
    class tray_sequ: public Ui_tray_sequ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAY_SEQU_H
