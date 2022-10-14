/********************************************************************************
** Form generated from reading UI file 'install.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTALL_H
#define UI_INSTALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Install
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QPushButton *pBtnleft;
    QPushButton *pBtnup;
    QToolButton *toolButton;
    QPushButton *pushButton_6;
    QPushButton *pBtndown;
    QLabel *label_4;
    QPushButton *pushButton_12;
    QToolButton *toolButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QLabel *label_3;
    QPushButton *pushButton_11;
    QLabel *label_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;

    void setupUi(QWidget *Install)
    {
        if (Install->objectName().isEmpty())
            Install->setObjectName(QStringLiteral("Install"));
        Install->resize(773, 601);
        groupBox = new QGroupBox(Install);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, -20, 771, 621));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 30, 271, 61));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 60, 681, 501));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(710, 210, 41, 20));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(700, 310, 61, 31));
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../DEBUG/imagic/upward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setIconSize(QSize(22, 22));
        pushButton_5->setCheckable(true);
        pBtnleft = new QPushButton(groupBox);
        pBtnleft->setObjectName(QStringLiteral("pBtnleft"));
        pBtnleft->setGeometry(QRect(700, 120, 61, 31));
        pBtnleft->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../DEBUG/imagic/\345\220\221\345\267\246\346\267\241\345\205\245\357\274\210\347\201\260\357\274\211.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnleft->setIcon(icon1);
        pBtnleft->setIconSize(QSize(32, 32));
        pBtnleft->setCheckable(true);
        pBtnup = new QPushButton(groupBox);
        pBtnup->setObjectName(QStringLiteral("pBtnup"));
        pBtnup->setGeometry(QRect(700, 160, 61, 31));
        pBtnup->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../DEBUG/imagic/\345\220\221\344\270\212\346\267\241\345\205\245\357\274\210\347\201\260\357\274\211.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnup->setIcon(icon2);
        pBtnup->setIconSize(QSize(32, 32));
        pBtnup->setCheckable(true);
        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(700, 240, 61, 61));
        toolButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(30, 30));
        toolButton->setCheckable(true);
        toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(700, 390, 61, 31));
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../DEBUG/imagic/\344\270\212\345\215\207_\344\270\212\347\256\255\345\244\264 \345\220\221\344\270\212 \346\266\250 \351\235\242\346\200\247 copy -3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon3);
        pushButton_6->setIconSize(QSize(30, 30));
        pushButton_6->setCheckable(true);
        pBtndown = new QPushButton(groupBox);
        pBtndown->setObjectName(QStringLiteral("pBtndown"));
        pBtndown->setGeometry(QRect(700, 80, 61, 31));
        pBtndown->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../DEBUG/imagic/\345\220\221\344\270\213\346\267\241\345\205\245\357\274\210\347\201\260\357\274\211.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtndown->setIcon(icon4);
        pBtndown->setIconSize(QSize(32, 32));
        pBtndown->setCheckable(true);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(730, 370, 31, 16));
        QFont font;
        font.setPointSize(11);
        label_4->setFont(font);
        pushButton_12 = new QPushButton(groupBox);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(710, 30, 41, 41));
        pushButton_12->setAutoFillBackground(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../DEBUG/imagic/help-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon5);
        pushButton_12->setIconSize(QSize(32, 32));
        pushButton_12->setFlat(true);
        toolButton_2 = new QToolButton(groupBox);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(700, 430, 61, 61));
        toolButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        toolButton_2->setIcon(icon3);
        toolButton_2->setIconSize(QSize(30, 30));
        toolButton_2->setCheckable(true);
        toolButton_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(690, 580, 71, 31));
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(380, 570, 51, 31));
        pushButton_9->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../DEBUG/imagic/leftward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon6);
        pushButton_9->setIconSize(QSize(32, 32));
        pushButton_9->setCheckable(true);
        pushButton_9->setChecked(false);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(460, 580, 31, 17));
        pushButton_11 = new QPushButton(groupBox);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(500, 570, 51, 31));
        pushButton_11->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../../DEBUG/imagic/rightward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon7);
        pushButton_11->setIconSize(QSize(18, 18));
        pushButton_11->setCheckable(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 570, 231, 31));
        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(560, 570, 111, 31));
        pushButton_10->setLayoutDirection(Qt::LeftToRight);
        pushButton_10->setAutoFillBackground(false);
        pushButton_10->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_10->setIcon(icon7);
        pushButton_10->setIconSize(QSize(18, 18));
        pushButton_10->setCheckable(true);
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(260, 570, 111, 31));
        pushButton_8->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_8->setIcon(icon6);
        pushButton_8->setIconSize(QSize(32, 32));
        pushButton_8->setCheckable(true);

        retranslateUi(Install);

        QMetaObject::connectSlotsByName(Install);
    } // setupUi

    void retranslateUi(QWidget *Install)
    {
        Install->setWindowTitle(QApplication::translate("Install", "Form", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("Install", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\234\272\345\231\250\344\272\272\347\232\204\345\256\211\350\243\205\344\275\215\347\275\256\345\222\214\350\247\222\345\272\246</span></p></body></html>", nullptr));
        groupBox_2->setTitle(QString());
        label_5->setText(QApplication::translate("Install", "<html><head/><body><p>\345\200\276\346\226\234</p></body></html>", nullptr));
        pushButton_5->setText(QString());
        pBtnleft->setText(QString());
        pBtnup->setText(QString());
        toolButton->setText(QApplication::translate("Install", "45 \302\260", nullptr));
        pushButton_6->setText(QString());
        pBtndown->setText(QString());
        label_4->setText(QApplication::translate("Install", "0.0 \302\260", nullptr));
        pushButton_12->setText(QString());
        toolButton_2->setText(QApplication::translate("Install", "45 \302\260", nullptr));
        pushButton_7->setText(QApplication::translate("Install", "\351\200\200\345\207\272", nullptr));
        pushButton_9->setText(QString());
        label_3->setText(QApplication::translate("Install", "0.0 \302\260", nullptr));
        pushButton_11->setText(QString());
        label_2->setText(QApplication::translate("Install", "<html><head/><body><p>\346\227\213\350\275\254\350\256\276\347\275\256\346\234\272\345\231\250\344\272\272\346\234\272\345\272\247\347\232\204\345\256\211\350\243\205\350\247\222\345\272\246</p></body></html>", nullptr));
        pushButton_10->setText(QApplication::translate("Install", "45 \302\260", nullptr));
        pushButton_8->setText(QApplication::translate("Install", "45 \302\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Install: public Ui_Install {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTALL_H
