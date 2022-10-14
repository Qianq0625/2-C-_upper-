/********************************************************************************
** Form generated from reading UI file 'force_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORCE_COMMAND_H
#define UI_FORCE_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_force_command
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *force_command)
    {
        if (force_command->objectName().isEmpty())
            force_command->setObjectName(QStringLiteral("force_command"));
        force_command->resize(821, 531);
        label = new QLabel(force_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 51, 41));
        label_2 = new QLabel(force_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 67, 17));
        comboBox = new QComboBox(force_command);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setGeometry(QRect(60, 44, 71, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        label_3 = new QLabel(force_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(680, 70, 67, 17));
        comboBox_2 = new QComboBox(force_command);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(720, 60, 81, 31));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox_2->setEditable(true);
        label_4 = new QLabel(force_command);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(370, 150, 381, 71));
        label_4->setWordWrap(true);
        label_5 = new QLabel(force_command);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(370, 220, 331, 41));
        pushButton = new QPushButton(force_command);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 330, 89, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        stackedWidget = new QStackedWidget(force_command);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(320, 100, 491, 221));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        stackedWidget->raise();
        label->raise();
        label_2->raise();
        comboBox->raise();
        label_3->raise();
        comboBox_2->raise();
        label_4->raise();
        label_5->raise();
        pushButton->raise();

        retranslateUi(force_command);

        QMetaObject::connectSlotsByName(force_command);
    } // setupUi

    void retranslateUi(QWidget *force_command)
    {
        force_command->setWindowTitle(QApplication::translate("force_command", "Form", nullptr));
        label->setText(QApplication::translate("force_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\345\212\233</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("force_command", "\347\211\271\345\276\201", nullptr));
        comboBox->setItemText(0, QApplication::translate("force_command", "\346\234\272\345\272\247", nullptr));

        label_3->setText(QApplication::translate("force_command", "\347\261\273\345\236\213", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("force_command", "\347\256\200\345\215\225", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("force_command", "\346\241\206\346\236\266", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("force_command", "\347\202\271", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("force_command", "\350\277\220\345\212\250", nullptr));

        label_4->setText(QApplication::translate("force_command", "\346\255\244\345\212\233\345\221\275\344\273\244\344\270\213\347\232\204\347\250\213\345\272\217\351\203\250\345\210\206\345\260\206\345\234\250\345\212\233\346\250\241\345\274\217\344\270\213\350\277\220\350\241\214\357\274\214\345\234\250\345\212\233\346\250\241\345\274\217\344\270\213\357\274\214\346\234\272\345\231\250\344\272\272\345\260\206\346\214\211\346\211\200\351\200\211\347\211\271\345\276\201\347\232\204\346\226\271\345\220\221\350\207\252\347\224\261\345\242\236\345\212\240\350\247\204\345\256\232\347\232\204\345\212\233\343\200\202", nullptr));
        label_5->setText(QApplication::translate("force_command", "\344\275\277\347\224\250\344\270\213\351\235\242\347\232\204\346\265\213\350\257\225\346\214\211\351\222\256\345\271\266\347\273\223\345\220\210\347\244\272\346\225\231\346\214\211\351\222\256\346\265\213\350\257\225\345\212\233\346\250\241\345\274\217\343\200\202", nullptr));
        pushButton->setText(QApplication::translate("force_command", "\346\265\213\350\257\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class force_command: public Ui_force_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORCE_COMMAND_H
