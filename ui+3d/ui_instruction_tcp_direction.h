/********************************************************************************
** Form generated from reading UI file 'instruction_tcp_direction.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTION_TCP_DIRECTION_H
#define UI_INSTRUCTION_TCP_DIRECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_instruction_tcp_direction
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QPushButton *set_sure;
    QPushButton *set_scancle;
    QPushButton *set_btn_4;
    QComboBox *comboBox;

    void setupUi(QWidget *instruction_tcp_direction)
    {
        if (instruction_tcp_direction->objectName().isEmpty())
            instruction_tcp_direction->setObjectName(QStringLiteral("instruction_tcp_direction"));
        instruction_tcp_direction->resize(301, 601);
        label_2 = new QLabel(instruction_tcp_direction);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 101, 21));
        label_3 = new QLabel(instruction_tcp_direction);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 261, 51));
        label_3->setWordWrap(true);
        label = new QLabel(instruction_tcp_direction);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 20, 101, 21));
        set_sure = new QPushButton(instruction_tcp_direction);
        set_sure->setObjectName(QStringLiteral("set_sure"));
        set_sure->setEnabled(false);
        set_sure->setGeometry(QRect(20, 490, 121, 31));
        QIcon icon;
        icon.addFile(QStringLiteral("../../REALSE/IMAGE/yes.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_sure->setIcon(icon);
        set_scancle = new QPushButton(instruction_tcp_direction);
        set_scancle->setObjectName(QStringLiteral("set_scancle"));
        set_scancle->setGeometry(QRect(150, 490, 131, 31));
        set_scancle->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../REALSE/IMAGE/cac.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_scancle->setIcon(icon1);
        set_btn_4 = new QPushButton(instruction_tcp_direction);
        set_btn_4->setObjectName(QStringLiteral("set_btn_4"));
        set_btn_4->setGeometry(QRect(30, 260, 231, 41));
        set_btn_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox = new QComboBox(instruction_tcp_direction);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(35, 200, 221, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);

        retranslateUi(instruction_tcp_direction);

        QMetaObject::connectSlotsByName(instruction_tcp_direction);
    } // setupUi

    void retranslateUi(QWidget *instruction_tcp_direction)
    {
        instruction_tcp_direction->setWindowTitle(QApplication::translate("instruction_tcp_direction", "Form", nullptr));
        label_2->setText(QApplication::translate("instruction_tcp_direction", "\346\234\252\351\200\211\344\270\255\347\211\271\345\276\201", nullptr));
        label_3->setText(QApplication::translate("instruction_tcp_direction", "\351\200\211\346\213\251\344\270\200\344\270\252\347\211\271\345\276\201\357\274\214\347\204\266\345\220\216\344\275\277\347\224\250\345\267\245\345\205\267\345\234\250\346\214\207\345\220\221\346\211\200\351\200\211\347\211\271\345\276\201Z\350\275\264\347\232\204\346\226\271\345\220\221\344\270\212\350\256\276\347\275\256\344\270\200\344\270\252\347\202\271\343\200\202", nullptr));
        label->setText(QApplication::translate("instruction_tcp_direction", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\347\244\272\346\225\231TCP\346\226\271\345\220\221</span></p></body></html>", nullptr));
        set_sure->setText(QApplication::translate("instruction_tcp_direction", "\350\256\276\347\275\256", nullptr));
        set_scancle->setText(QApplication::translate("instruction_tcp_direction", "\345\217\226\346\266\210", nullptr));
        set_btn_4->setText(QApplication::translate("instruction_tcp_direction", "\350\256\276\347\275\256\347\202\271", nullptr));
        comboBox->setItemText(0, QApplication::translate("instruction_tcp_direction", "<\346\234\252\345\256\232\344\271\211>", nullptr));

    } // retranslateUi

};

namespace Ui {
    class instruction_tcp_direction: public Ui_instruction_tcp_direction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTION_TCP_DIRECTION_H
