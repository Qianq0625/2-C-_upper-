/********************************************************************************
** Form generated from reading UI file 'tray_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAY_COMMAND_H
#define UI_TRAY_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tray_command
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;

    void setupUi(QWidget *tray_command)
    {
        if (tray_command->objectName().isEmpty())
            tray_command->setObjectName(QStringLiteral("tray_command"));
        tray_command->resize(821, 531);
        label = new QLabel(tray_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 61, 41));
        label_2 = new QLabel(tray_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 751, 41));
        label_2->setWordWrap(true);
        label_3 = new QLabel(tray_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 110, 221, 17));
        label_4 = new QLabel(tray_command);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 140, 241, 17));
        label_5 = new QLabel(tray_command);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 170, 321, 17));
        label_6 = new QLabel(tray_command);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 200, 321, 17));
        label_7 = new QLabel(tray_command);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 450, 111, 17));
        checkBox = new QCheckBox(tray_command);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 470, 221, 23));
        checkBox_2 = new QCheckBox(tray_command);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 490, 231, 23));

        retranslateUi(tray_command);

        QMetaObject::connectSlotsByName(tray_command);
    } // setupUi

    void retranslateUi(QWidget *tray_command)
    {
        tray_command->setWindowTitle(QApplication::translate("tray_command", "Form", nullptr));
        label->setText(QApplication::translate("tray_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\211\230\347\233\230</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("tray_command", "\346\211\230\347\233\230\346\223\215\344\275\234\344\275\277\346\234\272\345\231\250\344\272\272\345\217\257\344\273\245\345\234\250\350\213\245\345\271\262\344\270\215\345\220\214\344\275\215\347\275\256\346\211\247\350\241\214\345\220\214\346\240\267\347\232\204\350\277\220\345\212\250\345\222\214\345\212\250\344\275\234\345\272\217\345\210\227\343\200\202\350\277\231\345\257\271\344\272\216\346\211\247\350\241\214\346\211\230\347\233\230\345\240\206\345\236\233\346\210\226\347\261\273\344\274\274\346\223\215\344\275\234\351\235\236\345\270\270\346\234\211\347\224\250\343\200\202\346\211\230\347\233\230\346\223\215\344\275\234\345\214\205\346\213\254\344\273\245\344\270\213\345\271\263\351\235\242\347\211\271\345\276\201", nullptr));
        label_3->setText(QApplication::translate("tray_command", "\350\246\201\345\234\250\350\213\245\345\271\262\344\275\215\347\275\256\346\211\247\350\241\214\347\232\204\347\250\213\345\272\217\345\272\217\345\210\227\343\200\202", nullptr));
        label_4->setText(QApplication::translate("tray_command", "The\346\250\241\345\274\217\357\274\214\344\273\245\345\210\227\350\241\250\346\210\226\347\202\271\351\230\265\345\275\242\345\274\217\346\217\220\344\276\233\343\200\202", nullptr));
        label_5->setText(QApplication::translate("tray_command", "\345\234\250\347\254\254\344\270\200\344\270\252\344\275\215\347\275\256\344\271\213\345\211\215\346\211\247\350\241\214\347\232\204\345\217\257\351\200\211before start\345\272\217\345\210\227\343\200\202", nullptr));
        label_6->setText(QApplication::translate("tray_command", "\345\234\250\346\234\200\345\220\216\344\270\200\344\270\252\344\275\215\347\275\256\344\271\213\345\220\216\346\211\247\350\241\214\347\232\204\345\217\257\351\200\211after end\345\272\217\345\210\227\343\200\202", nullptr));
        label_7->setText(QApplication::translate("tray_command", "\345\217\257\351\200\211\347\250\213\345\272\217\345\272\217\345\210\227", nullptr));
        checkBox->setText(QApplication::translate("tray_command", "\347\254\254\344\270\200\344\270\252\347\202\271\345\211\215\347\232\204\347\211\271\345\256\232\347\250\213\345\272\217\345\272\217\345\210\227", nullptr));
        checkBox_2->setText(QApplication::translate("tray_command", "\346\234\200\345\220\216\344\270\200\344\270\252\347\202\271\345\220\216\347\232\204\347\211\271\345\256\232\347\250\213\345\272\217\345\272\217\345\210\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tray_command: public Ui_tray_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAY_COMMAND_H
