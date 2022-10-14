/********************************************************************************
** Form generated from reading UI file 'default_program.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFAULT_PROGRAM_H
#define UI_DEFAULT_PROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_default_program
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QCheckBox *checkBox_2;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_8;
    QComboBox *comboBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QCheckBox *checkBox_3;
    QLabel *label_12;
    QComboBox *comboBox_3;
    QLabel *label_13;
    QComboBox *comboBox_4;
    QLabel *label_5;
    QLabel *label_14;

    void setupUi(QWidget *default_program)
    {
        if (default_program->objectName().isEmpty())
            default_program->setObjectName(QStringLiteral("default_program"));
        default_program->resize(781, 641);
        label = new QLabel(default_program);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 20, 151, 41));
        label_2 = new QLabel(default_program);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 101, 31));
        label_3 = new QLabel(default_program);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 280, 491, 21));
        label_4 = new QLabel(default_program);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 130, 211, 17));
        checkBox = new QCheckBox(default_program);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(80, 150, 131, 31));
        lineEdit = new QLineEdit(default_program);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 180, 351, 31));
        lineEdit->setClearButtonEnabled(false);
        pushButton = new QPushButton(default_program);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 230, 151, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        checkBox_2 = new QCheckBox(default_program);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(90, 300, 92, 41));
        label_6 = new QLabel(default_program);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 310, 171, 21));
        label_7 = new QLabel(default_program);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(140, 350, 21, 17));
        comboBox = new QComboBox(default_program);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setGeometry(QRect(210, 340, 211, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        label_8 = new QLabel(default_program);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(460, 340, 67, 31));
        comboBox_2 = new QComboBox(default_program);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setEnabled(false);
        comboBox_2->setGeometry(QRect(550, 340, 41, 31));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_2->setEditable(true);
        comboBox_2->setDuplicatesEnabled(false);
        label_9 = new QLabel(default_program);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 370, 101, 31));
        label_10 = new QLabel(default_program);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(90, 400, 251, 31));
        label_11 = new QLabel(default_program);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(120, 440, 241, 21));
        checkBox_3 = new QCheckBox(default_program);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(90, 470, 181, 31));
        label_12 = new QLabel(default_program);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(150, 520, 21, 17));
        comboBox_3 = new QComboBox(default_program);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(200, 510, 221, 31));
        comboBox_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_3->setEditable(true);
        label_13 = new QLabel(default_program);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(460, 516, 61, 21));
        comboBox_4 = new QComboBox(default_program);
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(550, 510, 41, 31));
        comboBox_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_4->setEditable(true);
        label_5 = new QLabel(default_program);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 280, 21, 21));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../DEBUG/imagic/warning.png")));
        label_5->setScaledContents(true);
        label_14 = new QLabel(default_program);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(90, 440, 21, 21));
        label_14->setPixmap(QPixmap(QString::fromUtf8("../../DEBUG/imagic/warning.png")));
        label_14->setScaledContents(true);

        retranslateUi(default_program);

        QMetaObject::connectSlotsByName(default_program);
    } // setupUi

    void retranslateUi(QWidget *default_program)
    {
        default_program->setWindowTitle(QApplication::translate("default_program", "Form", nullptr));
        label->setText(QApplication::translate("default_program", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\350\256\276\347\275\256\351\273\230\350\256\244\347\250\213\345\272\217</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("default_program", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\351\273\230\350\256\244\347\250\213\345\272\217\346\226\207\344\273\266</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("default_program", "\345\246\202\346\236\234\344\270\213\350\277\260\350\207\252\345\212\250\345\210\235\345\247\213\345\214\226\351\200\211\351\241\271\344\271\237\345\220\257\347\224\250\344\272\206\357\274\214\345\210\231\346\234\272\345\231\250\344\272\272\345\217\257\344\273\245\345\234\250\345\220\257\345\212\250\346\227\266\345\260\261\345\274\200\345\247\213\350\277\220\345\212\250\357\274\201", nullptr));
        label_4->setText(QApplication::translate("default_program", "\346\234\272\345\231\250\344\272\272\345\220\257\345\212\250\345\220\216\350\207\252\345\212\250\345\212\240\350\275\275\351\273\230\350\256\244\347\250\213\345\272\217", nullptr));
        checkBox->setText(QApplication::translate("default_program", "\345\212\240\350\275\275\351\273\230\350\256\244\347\250\213\345\272\217\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("default_program", "\351\200\211\346\213\251\351\273\230\350\256\244\347\250\213\345\272\217", nullptr));
        checkBox_2->setText(QApplication::translate("default_program", "\350\207\252\345\212\250\345\220\257\345\212\250", nullptr));
        label_6->setText(QApplication::translate("default_program", "\350\277\220\350\241\214\351\200\211\351\241\271\345\215\241\344\270\255\347\232\204\351\273\230\350\256\244\347\250\213\345\272\217", nullptr));
        label_7->setText(QApplication::translate("default_program", "\345\274\200", nullptr));
        label_8->setText(QApplication::translate("default_program", "\347\274\223\347\274\223\347\247\273\345\220\221", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("default_program", "\344\275\216", nullptr));

        label_9->setText(QApplication::translate("default_program", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\350\207\252\345\212\250\345\210\235\345\247\213\345\214\226</span></p></body></html>", nullptr));
        label_10->setText(QApplication::translate("default_program", "\345\275\223\344\270\273\347\224\265\346\272\220\346\216\245\351\200\232\346\227\266\357\274\214\350\207\252\345\212\250\345\210\235\345\247\213\345\214\226\346\234\272\345\231\250\344\272\272", nullptr));
        label_11->setText(QApplication::translate("default_program", "\345\210\266\345\212\250\345\231\250\351\207\212\346\224\276\347\250\213\345\272\217\345\217\257\344\277\203\344\275\277\346\234\272\345\231\250\344\272\272\350\277\220\345\212\250\357\274\201", nullptr));
        checkBox_3->setText(QApplication::translate("default_program", "\350\207\252\345\212\250\345\210\266\345\212\250\345\231\250\351\207\212\346\224\276\346\234\272\345\231\250\344\272\272", nullptr));
        label_12->setText(QApplication::translate("default_program", "\345\274\200", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("default_program", "<Di.input>", nullptr));

        label_13->setText(QApplication::translate("default_program", "\347\274\223\347\274\223\347\247\273\345\220\221", nullptr));
        comboBox_4->setItemText(0, QApplication::translate("default_program", "\344\275\216", nullptr));

        label_5->setText(QString());
        label_14->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class default_program: public Ui_default_program {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFAULT_PROGRAM_H
