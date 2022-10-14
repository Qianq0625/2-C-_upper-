/********************************************************************************
** Form generated from reading UI file 'move_bottom.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVE_BOTTOM_H
#define UI_MOVE_BOTTOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_move_bottom
{
public:
    QPushButton *confirmBtn;
    QLabel *speed_label;
    QLabel *label_3;
    QSlider *speed_horizontal;
    QPushButton *cancelBtn;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;

    void setupUi(QWidget *move_bottom)
    {
        if (move_bottom->objectName().isEmpty())
            move_bottom->setObjectName(QStringLiteral("move_bottom"));
        move_bottom->resize(1050, 81);
        confirmBtn = new QPushButton(move_bottom);
        confirmBtn->setObjectName(QStringLiteral("confirmBtn"));
        confirmBtn->setGeometry(QRect(930, 20, 101, 41));
        confirmBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../iimt_cr_pro-master/image/yes.png"), QSize(), QIcon::Normal, QIcon::Off);
        confirmBtn->setIcon(icon);
        confirmBtn->setIconSize(QSize(20, 20));
        speed_label = new QLabel(move_bottom);
        speed_label->setObjectName(QStringLiteral("speed_label"));
        speed_label->setGeometry(QRect(580, 31, 21, 20));
        label_3 = new QLabel(move_bottom);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(600, 30, 21, 20));
        speed_horizontal = new QSlider(move_bottom);
        speed_horizontal->setObjectName(QStringLiteral("speed_horizontal"));
        speed_horizontal->setGeometry(QRect(400, 30, 181, 21));
        speed_horizontal->setValue(50);
        speed_horizontal->setOrientation(Qt::Horizontal);
        cancelBtn = new QPushButton(move_bottom);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(810, 20, 101, 41));
        cancelBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../iimt_cr_pro-master/image/cac.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelBtn->setIcon(icon1);
        cancelBtn->setIconSize(QSize(20, 20));
        radioButton_2 = new QRadioButton(move_bottom);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 38, 112, 23));
        radioButton_2->setChecked(true);
        radioButton = new QRadioButton(move_bottom);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(20, 10, 112, 31));

        retranslateUi(move_bottom);

        QMetaObject::connectSlotsByName(move_bottom);
    } // setupUi

    void retranslateUi(QWidget *move_bottom)
    {
        move_bottom->setWindowTitle(QApplication::translate("move_bottom", "Form", nullptr));
        confirmBtn->setText(QApplication::translate("move_bottom", "\347\241\256\345\256\232", nullptr));
        speed_label->setText(QApplication::translate("move_bottom", "50", nullptr));
        label_3->setText(QApplication::translate("move_bottom", "%", nullptr));
        cancelBtn->setText(QApplication::translate("move_bottom", "\345\217\226\346\266\210", nullptr));
        radioButton_2->setText(QApplication::translate("move_bottom", "\347\234\237\345\256\236\346\234\272\345\231\250\344\272\272", nullptr));
        radioButton->setText(QApplication::translate("move_bottom", "\346\250\241\346\213\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class move_bottom: public Ui_move_bottom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVE_BOTTOM_H
