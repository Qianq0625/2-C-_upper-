/********************************************************************************
** Form generated from reading UI file 'model_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODEL_COMMAND_H
#define UI_MODEL_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_model_command
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *model_command)
    {
        if (model_command->objectName().isEmpty())
            model_command->setObjectName(QStringLiteral("model_command"));
        model_command->resize(821, 531);
        label = new QLabel(model_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 71, 41));
        label_2 = new QLabel(model_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 181, 17));
        label_3 = new QLabel(model_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 80, 241, 17));
        label_4 = new QLabel(model_command);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 130, 101, 21));
        label_5 = new QLabel(model_command);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 190, 91, 21));
        label_6 = new QLabel(model_command);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 250, 91, 21));
        label_7 = new QLabel(model_command);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 310, 81, 21));
        pushButton = new QPushButton(model_command);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(440, 120, 151, 41));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_2 = new QPushButton(model_command);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 180, 151, 41));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_3 = new QPushButton(model_command);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(440, 240, 151, 41));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_4 = new QPushButton(model_command);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(440, 300, 151, 41));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(model_command);

        QMetaObject::connectSlotsByName(model_command);
    } // setupUi

    void retranslateUi(QWidget *model_command)
    {
        model_command->setWindowTitle(QApplication::translate("model_command", "Form", nullptr));
        label->setText(QApplication::translate("model_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\250\241\345\274\217</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("model_command", "\346\250\241\345\274\217\346\230\257\350\246\201\345\276\252\347\216\257\347\232\204\344\270\200\347\273\204\344\275\215\347\275\256\343\200\202", nullptr));
        label_3->setText(QApplication::translate("model_command", "\346\250\241\345\274\217\345\217\257\344\273\245\347\224\250\344\272\216\347\224\237\346\210\220\346\233\264\345\244\232\346\211\230\347\233\230\345\240\206\345\236\233\347\255\211\343\200\202", nullptr));
        label_4->setText(QApplication::translate("model_command", "\347\233\264\347\272\277\344\270\255\347\232\204\344\275\215\347\275\256", nullptr));
        label_5->setText(QApplication::translate("model_command", "\346\226\271\345\235\227\344\270\255\347\232\204\344\275\215\347\275\256", nullptr));
        label_6->setText(QApplication::translate("model_command", "\347\233\222\345\255\220\344\270\255\347\232\204\344\275\215\347\275\256", nullptr));
        label_7->setText(QApplication::translate("model_command", "\344\275\215\347\275\256\345\210\227\350\241\250", nullptr));
        pushButton->setText(QApplication::translate("model_command", "\347\233\264\347\272\277", nullptr));
        pushButton_2->setText(QApplication::translate("model_command", "\346\226\271\345\235\227", nullptr));
        pushButton_3->setText(QApplication::translate("model_command", "\347\233\222\345\255\220", nullptr));
        pushButton_4->setText(QApplication::translate("model_command", "\344\275\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class model_command: public Ui_model_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODEL_COMMAND_H
