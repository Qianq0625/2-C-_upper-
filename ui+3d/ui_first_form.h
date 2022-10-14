/********************************************************************************
** Form generated from reading UI file 'first_form.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRST_FORM_H
#define UI_FIRST_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_first_form
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_2;
    QWidget *tab_5;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QWidget *page_2;
    QGroupBox *groupBox_3;
    QFrame *frameMenu;
    QLabel *label_18;
    QLabel *label_17;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_16;
    QLabel *label_19;

    void setupUi(QWidget *first_form)
    {
        if (first_form->objectName().isEmpty())
            first_form->setObjectName(QStringLiteral("first_form"));
        first_form->resize(1050, 760);
        tabWidget = new QTabWidget(first_form);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 50, 1051, 31));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        stackedWidget = new QStackedWidget(first_form);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 80, 1041, 671));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(121, 250, 791, 391));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 60, 491, 41));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 130, 491, 41));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(460, 30, 121, 61));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(120, 80, 791, 161));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(148, 44, 491, 41));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        groupBox_3 = new QGroupBox(first_form);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, -20, 1051, 71));
        frameMenu = new QFrame(groupBox_3);
        frameMenu->setObjectName(QStringLiteral("frameMenu"));
        frameMenu->setGeometry(QRect(100, 20, 271, 41));
        frameMenu->setFrameShape(QFrame::StyledPanel);
        frameMenu->setFrameShadow(QFrame::Raised);
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(930, 30, 21, 21));
        label_18->setAutoFillBackground(true);
        label_18->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/C.png")));
        label_18->setScaledContents(true);
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(910, 30, 21, 21));
        label_17->setAutoFillBackground(true);
        label_17->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/C.png")));
        label_17->setScaledContents(true);
        dateTimeEdit = new QDateTimeEdit(groupBox_3);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(670, 30, 111, 26));
        dateTimeEdit->setAutoFillBackground(true);
        dateTimeEdit->setWrapping(false);
        dateTimeEdit->setReadOnly(false);
        dateTimeEdit->setAccelerated(false);
        dateTimeEdit->setProperty("showGroupSeparator", QVariant(false));
        dateTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);
        dateTimeEdit->setCalendarPopup(true);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 30, 20, 20));
        label_2->setAutoFillBackground(true);
        label_2->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/status_light.png")));
        label_2->setScaledContents(true);
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1000, 30, 31, 31));
        label->setAutoFillBackground(true);
        label->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/help-2.png")));
        label->setScaledContents(true);
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(890, 30, 21, 21));
        label_16->setAutoFillBackground(true);
        label_16->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/C.png")));
        label_16->setScaledContents(true);
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(950, 30, 21, 21));
        label_19->setAutoFillBackground(true);
        label_19->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/C.png")));
        label_19->setScaledContents(true);

        retranslateUi(first_form);

        tabWidget->setCurrentIndex(3);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(first_form);
    } // setupUi

    void retranslateUi(QWidget *first_form)
    {
        first_form->setWindowTitle(QApplication::translate("first_form", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("first_form", "\347\250\213\345\272\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("first_form", "\345\256\211\350\243\205\350\256\276\347\275\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("first_form", "\347\247\273\345\212\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("first_form", "I/O", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("first_form", "\346\227\245\345\277\227", nullptr));
        groupBox_2->setTitle(QApplication::translate("first_form", "\344\275\277\347\224\250\346\250\241\346\235\277", nullptr));
        pushButton_2->setText(QApplication::translate("first_form", "\346\213\276\345\217\226\345\222\214\346\224\276\347\275\256", nullptr));
        pushButton_3->setText(QApplication::translate("first_form", "\347\251\272\347\250\213\345\272\217", nullptr));
        label_3->setText(QApplication::translate("first_form", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\226\260\345\273\272\347\250\213\345\272\217</span></p></body></html>", nullptr));
        groupBox->setTitle(QApplication::translate("first_form", "\344\273\216\346\226\207\344\273\266\345\212\240\350\275\275", nullptr));
        pushButton->setText(QApplication::translate("first_form", "\345\212\240\350\275\275\347\250\213\345\272\217", nullptr));
        groupBox_3->setTitle(QString());
        label_18->setText(QString());
        label_17->setText(QString());
        dateTimeEdit->setDisplayFormat(QApplication::translate("first_form", "hh:mm:ss", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        label_16->setText(QString());
        label_19->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class first_form: public Ui_first_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRST_FORM_H
