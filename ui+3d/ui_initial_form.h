/********************************************************************************
** Form generated from reading UI file 'initial_form.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIAL_FORM_H
#define UI_INITIAL_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Initial_Form
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QToolButton *toolButton_2;
    QWidget *page_2;
    QLabel *label;
    QPushButton *pushButton_10;

    void setupUi(QWidget *Initial_Form)
    {
        if (Initial_Form->objectName().isEmpty())
            Initial_Form->setObjectName(QStringLiteral("Initial_Form"));
        Initial_Form->resize(1050, 760);
        groupBox = new QGroupBox(Initial_Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 50, 1061, 721));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 40, 211, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 100, 211, 31));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 160, 211, 31));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 220, 211, 31));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 280, 211, 31));
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 340, 211, 31));
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 400, 211, 31));
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(30, 460, 211, 31));
        pushButton_8->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(30, 570, 211, 31));
        pushButton_9->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(260, 30, 781, 671));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        toolButton_2 = new QToolButton(page);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(250, 100, 311, 271));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        label = new QLabel(Initial_Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(460, 20, 141, 41));
        pushButton_10 = new QPushButton(Initial_Form);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(1000, 10, 41, 41));
        pushButton_10->setAutoFillBackground(true);
        QIcon icon;
        icon.addFile(QStringLiteral("../DEBUG/imagic/help-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon);
        pushButton_10->setIconSize(QSize(32, 32));
        pushButton_10->setFlat(true);

        retranslateUi(Initial_Form);

        QMetaObject::connectSlotsByName(Initial_Form);
    } // setupUi

    void retranslateUi(QWidget *Initial_Form)
    {
        Initial_Form->setWindowTitle(QApplication::translate("Initial_Form", "Form", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("Initial_Form", "\345\210\235\345\247\213\345\214\226\346\234\272\345\231\250\344\272\272", nullptr));
        pushButton_2->setText(QApplication::translate("Initial_Form", "\350\257\255\350\250\200", nullptr));
        pushButton_3->setText(QApplication::translate("Initial_Form", "\346\233\264\346\226\260", nullptr));
        pushButton_4->setText(QApplication::translate("Initial_Form", "\350\256\276\347\275\256\345\257\206\347\240\201", nullptr));
        pushButton_5->setText(QApplication::translate("Initial_Form", "\346\240\241\345\207\206\345\261\217\345\271\225", nullptr));
        pushButton_6->setText(QApplication::translate("Initial_Form", "\347\275\221\347\273\234", nullptr));
        pushButton_7->setText(QApplication::translate("Initial_Form", "\346\227\266\351\227\264", nullptr));
        pushButton_8->setText(QApplication::translate("Initial_Form", "URCap", nullptr));
        pushButton_9->setText(QApplication::translate("Initial_Form", "\350\277\224\345\233\236", nullptr));
        toolButton_2->setText(QApplication::translate("Initial_Form", "...", nullptr));
        label->setText(QApplication::translate("Initial_Form", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">\350\256\276\347\275\256\346\234\272\345\231\250\344\272\272</span></p></body></html>", nullptr));
        pushButton_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Initial_Form: public Ui_Initial_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIAL_FORM_H
