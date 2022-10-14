/********************************************************************************
** Form generated from reading UI file 'instruction_tcp_locate.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTION_TCP_LOCATE_H
#define UI_INSTRUCTION_TCP_LOCATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_instruction_TCP_locate
{
public:
    QPushButton *set_scancle;
    QPushButton *set_btn;
    QPushButton *set_btn_3;
    QPushButton *set_btn_4;
    QPushButton *set_btn_2;
    QPushButton *set_sure;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *instruction_TCP_locate)
    {
        if (instruction_TCP_locate->objectName().isEmpty())
            instruction_TCP_locate->setObjectName(QStringLiteral("instruction_TCP_locate"));
        instruction_TCP_locate->resize(293, 601);
        set_scancle = new QPushButton(instruction_TCP_locate);
        set_scancle->setObjectName(QStringLiteral("set_scancle"));
        set_scancle->setGeometry(QRect(150, 510, 131, 31));
        set_scancle->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../REALSE/IMAGE/cac.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_scancle->setIcon(icon);
        set_btn = new QPushButton(instruction_TCP_locate);
        set_btn->setObjectName(QStringLiteral("set_btn"));
        set_btn->setGeometry(QRect(70, 150, 161, 41));
        set_btn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        set_btn_3 = new QPushButton(instruction_TCP_locate);
        set_btn_3->setObjectName(QStringLiteral("set_btn_3"));
        set_btn_3->setGeometry(QRect(70, 330, 161, 41));
        set_btn_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        set_btn_4 = new QPushButton(instruction_TCP_locate);
        set_btn_4->setObjectName(QStringLiteral("set_btn_4"));
        set_btn_4->setGeometry(QRect(70, 420, 161, 41));
        set_btn_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        set_btn_2 = new QPushButton(instruction_TCP_locate);
        set_btn_2->setObjectName(QStringLiteral("set_btn_2"));
        set_btn_2->setGeometry(QRect(70, 240, 161, 41));
        set_btn_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        set_sure = new QPushButton(instruction_TCP_locate);
        set_sure->setObjectName(QStringLiteral("set_sure"));
        set_sure->setGeometry(QRect(10, 510, 131, 31));
        set_sure->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../REALSE/IMAGE/yes.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_sure->setIcon(icon1);
        label = new QLabel(instruction_TCP_locate);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 101, 41));
        label_2 = new QLabel(instruction_TCP_locate);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 101, 21));
        label_3 = new QLabel(instruction_TCP_locate);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 90, 221, 21));

        retranslateUi(instruction_TCP_locate);

        QMetaObject::connectSlotsByName(instruction_TCP_locate);
    } // setupUi

    void retranslateUi(QWidget *instruction_TCP_locate)
    {
        instruction_TCP_locate->setWindowTitle(QApplication::translate("instruction_TCP_locate", "Form", nullptr));
        set_scancle->setText(QApplication::translate("instruction_TCP_locate", "\345\217\226\346\266\210", nullptr));
        set_btn->setText(QApplication::translate("instruction_TCP_locate", "\350\256\276\347\275\256\347\202\271\357\274\221", nullptr));
        set_btn_3->setText(QApplication::translate("instruction_TCP_locate", "\350\256\276\347\275\256\347\202\2713", nullptr));
        set_btn_4->setText(QApplication::translate("instruction_TCP_locate", "\350\256\276\347\275\256\347\202\2714", nullptr));
        set_btn_2->setText(QApplication::translate("instruction_TCP_locate", "\350\256\276\347\275\256\347\202\2712", nullptr));
        set_sure->setText(QApplication::translate("instruction_TCP_locate", "\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("instruction_TCP_locate", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\347\244\272\346\225\231TCP\344\275\215\347\275\256</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("instruction_TCP_locate", "\351\234\200\350\246\201\346\233\264\345\244\232\344\270\252\347\202\271", nullptr));
        label_3->setText(QApplication::translate("instruction_TCP_locate", "\344\273\216\344\270\215\345\220\214\350\247\222\345\272\246\345\260\206TCP\347\247\273\350\207\263\345\220\214\344\270\200\344\275\215\347\275\256\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class instruction_TCP_locate: public Ui_instruction_TCP_locate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTION_TCP_LOCATE_H
