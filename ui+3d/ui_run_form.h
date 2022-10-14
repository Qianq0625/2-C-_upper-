/********************************************************************************
** Form generated from reading UI file 'run_form.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUN_FORM_H
#define UI_RUN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_run
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_4;
    QWidget *tab_3;
    QWidget *tab_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QTextEdit *textEdit_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_15;
    QWidget *page_2;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *c1;
    QLabel *c3;
    QLabel *c4;
    QLabel *c2;
    QDateTimeEdit *dateTimeEdit;
    QFrame *frameMenu;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QWidget *page_4;

    void setupUi(QWidget *run)
    {
        if (run->objectName().isEmpty())
            run->setObjectName(QStringLiteral("run"));
        run->resize(1050, 760);
        tabWidget = new QTabWidget(run);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 50, 1050, 31));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        stackedWidget = new QStackedWidget(run);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 80, 1051, 591));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, -20, 1051, 611));
        textEdit_2 = new QTextEdit(groupBox);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(600, 280, 441, 311));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(600, 260, 67, 17));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 310, 91, 41));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 400, 91, 41));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 490, 91, 41));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(250, 30, 141, 91));
        label_9->setScaledContents(false);
        label_9->setWordWrap(true);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(310, 100, 421, 71));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(500, 160, 201, 61));
        label_15->setScaledContents(false);
        label_15->setWordWrap(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        label_2 = new QLabel(run);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 10, 20, 20));
        label_2->setAutoFillBackground(true);
        label_2->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/status_light.png")));
        label_2->setScaledContents(true);
        groupBox_2 = new QGroupBox(run);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, -30, 1051, 80));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1010, 40, 31, 31));
        label->setAutoFillBackground(true);
        label->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/help-2.png")));
        label->setScaledContents(true);
        c1 = new QLabel(groupBox_2);
        c1->setObjectName(QStringLiteral("c1"));
        c1->setGeometry(QRect(900, 40, 21, 21));
        c1->setAutoFillBackground(true);
        c1->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/C.png")));
        c1->setScaledContents(true);
        c3 = new QLabel(groupBox_2);
        c3->setObjectName(QStringLiteral("c3"));
        c3->setGeometry(QRect(940, 40, 21, 21));
        c3->setAutoFillBackground(true);
        c3->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/C.png")));
        c3->setScaledContents(true);
        c4 = new QLabel(groupBox_2);
        c4->setObjectName(QStringLiteral("c4"));
        c4->setGeometry(QRect(960, 40, 21, 21));
        c4->setAutoFillBackground(true);
        c4->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/C.png")));
        c4->setScaledContents(true);
        c2 = new QLabel(groupBox_2);
        c2->setObjectName(QStringLiteral("c2"));
        c2->setGeometry(QRect(920, 40, 21, 21));
        c2->setAutoFillBackground(true);
        c2->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/C.png")));
        c2->setScaledContents(true);
        dateTimeEdit = new QDateTimeEdit(groupBox_2);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(680, 40, 111, 26));
        dateTimeEdit->setAutoFillBackground(true);
        dateTimeEdit->setWrapping(false);
        dateTimeEdit->setReadOnly(false);
        dateTimeEdit->setAccelerated(false);
        dateTimeEdit->setProperty("showGroupSeparator", QVariant(false));
        dateTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);
        dateTimeEdit->setCalendarPopup(true);
        frameMenu = new QFrame(groupBox_2);
        frameMenu->setObjectName(QStringLiteral("frameMenu"));
        frameMenu->setGeometry(QRect(100, 30, 241, 41));
        frameMenu->setAutoFillBackground(true);
        frameMenu->setFrameShape(QFrame::StyledPanel);
        frameMenu->setFrameShadow(QFrame::Raised);
        stackedWidget_2 = new QStackedWidget(run);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(0, 670, 1051, 91));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        stackedWidget_2->addWidget(page_4);
        groupBox_2->raise();
        tabWidget->raise();
        stackedWidget->raise();
        label_2->raise();
        stackedWidget_2->raise();

        retranslateUi(run);

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(run);
    } // setupUi

    void retranslateUi(QWidget *run)
    {
        run->setWindowTitle(QApplication::translate("run", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("run", "\350\277\220\350\241\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("run", "\347\247\273\345\212\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("run", "I/O", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("run", "\346\227\245\345\277\227", nullptr));
        groupBox->setTitle(QString());
        label_11->setText(QApplication::translate("run", "\345\217\230\351\207\217", nullptr));
        label_12->setText(QApplication::translate("run", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\347\250\213\345\272\217\357\274\232</span></p></body></html>", nullptr));
        label_13->setText(QApplication::translate("run", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\347\212\266\346\200\201\357\274\232</span></p></body></html>", nullptr));
        label_14->setText(QApplication::translate("run", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\227\266\351\227\264\357\274\232</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("run", "<html><head/><body><p><span style=\" font-size:48pt; font-weight:600;\">IIMT</span></p></body></html>", nullptr));
        label_10->setText(QApplication::translate("run", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:600;\">COLLABORATIVE</span></p></body></html>", nullptr));
        label_15->setText(QApplication::translate("run", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:600;\">ROBOTS</span></p></body></html>", nullptr));
        label_2->setText(QString());
        groupBox_2->setTitle(QString());
        label->setText(QString());
        c1->setText(QString());
        c3->setText(QString());
        c4->setText(QString());
        c2->setText(QString());
        dateTimeEdit->setDisplayFormat(QApplication::translate("run", "hh:mm:ss", nullptr));
    } // retranslateUi

};

namespace Ui {
    class run: public Ui_run {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUN_FORM_H
