/********************************************************************************
** Form generated from reading UI file 'profinet_io.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFINET_IO_H
#define UI_PROFINET_IO_H

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

class Ui_profinet_io
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *profinet_io)
    {
        if (profinet_io->objectName().isEmpty())
            profinet_io->setObjectName(QStringLiteral("profinet_io"));
        profinet_io->resize(781, 641);
        pushButton = new QPushButton(profinet_io);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 21, 21));
        pushButton_3 = new QPushButton(profinet_io);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(410, 200, 341, 41));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_5 = new QLabel(profinet_io);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 490, 221, 17));
        comboBox = new QComboBox(profinet_io);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(50, 360, 191, 25));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        label_3 = new QLabel(profinet_io);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 420, 301, 17));
        label = new QLabel(profinet_io);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 0, 341, 61));
        label_4 = new QLabel(profinet_io);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 460, 241, 17));
        label_6 = new QLabel(profinet_io);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 520, 291, 17));
        label_2 = new QLabel(profinet_io);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 300, 281, 31));
        label_7 = new QLabel(profinet_io);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 270, 101, 17));
        label_8 = new QLabel(profinet_io);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 330, 101, 21));
        label_9 = new QLabel(profinet_io);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(250, 330, 101, 21));
        label_10 = new QLabel(profinet_io);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(450, 330, 101, 21));
        comboBox_2 = new QComboBox(profinet_io);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(250, 360, 191, 25));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_2->setEditable(true);
        comboBox_3 = new QComboBox(profinet_io);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(450, 360, 191, 25));
        comboBox_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_3->setEditable(true);
        pushButton_4 = new QPushButton(profinet_io);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 200, 341, 41));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(profinet_io);

        QMetaObject::connectSlotsByName(profinet_io);
    } // setupUi

    void retranslateUi(QWidget *profinet_io)
    {
        profinet_io->setWindowTitle(QApplication::translate("profinet_io", "Form", nullptr));
        pushButton->setText(QString());
        pushButton_3->setText(QApplication::translate("profinet_io", "\347\246\201\347\224\250", nullptr));
        label_5->setText(QApplication::translate("profinet_io", "\351\273\204\350\211\262\350\241\250\347\244\272\346\234\272\345\231\250\344\272\272\346\262\241\346\234\211\350\277\236\346\216\245\346\216\247\345\210\266\345\231\250", nullptr));
        label_3->setText(QApplication::translate("profinet_io", "LED\350\241\250\347\244\272\350\277\236\346\216\245\345\210\260PROFINET IO\346\216\247\345\210\266\345\231\250\347\232\204\347\212\266\346\200\201\357\274\232", nullptr));
        label->setText(QApplication::translate("profinet_io", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">PROFINET IO \350\256\276\345\244\207\357\274\232\345\267\262\347\246\201\347\224\250</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("profinet_io", "\347\201\260\350\211\262\350\241\250\347\244\272PROFINET\345\212\237\350\203\275\345\267\262\347\246\201\347\224\250", nullptr));
        label_6->setText(QApplication::translate("profinet_io", "\347\273\277\350\211\262\350\241\250\347\244\272\346\234\272\345\231\250\344\272\272\345\267\262\350\277\236\346\216\245\346\216\247\345\210\266\345\231\250", nullptr));
        label_2->setText(QApplication::translate("profinet_io", "<html><head/><body><p>\344\270\242\345\244\261<span style=\" font-weight:600;\">PROFINET \350\276\223\345\205\245</span>\350\277\236\346\216\245\346\227\266\347\232\204\347\250\213\345\272\217\345\212\250\344\275\234</p></body></html>", nullptr));
        label_7->setText(QApplication::translate("profinet_io", "IO\350\256\276\345\244\207\345\220\215\347\247\260\357\274\232", nullptr));
        label_8->setText(QApplication::translate("profinet_io", "\346\234\272\345\231\250\344\272\272IO\346\250\241\345\235\227", nullptr));
        label_9->setText(QApplication::translate("profinet_io", "\345\257\204\345\255\230\345\231\250\346\250\241\345\235\2271", nullptr));
        label_10->setText(QApplication::translate("profinet_io", "\345\257\204\345\255\230\345\231\250\346\250\241\345\235\2272", nullptr));
        pushButton_4->setText(QApplication::translate("profinet_io", "\345\220\257\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profinet_io: public Ui_profinet_io {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFINET_IO_H
