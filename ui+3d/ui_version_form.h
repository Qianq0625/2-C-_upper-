/********************************************************************************
** Form generated from reading UI file 'version_form.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSION_FORM_H
#define UI_VERSION_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_version
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QLabel *label_10;
    QWidget *page_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_11;
    QWidget *tab_2;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton;

    void setupUi(QWidget *version)
    {
        if (version->objectName().isEmpty())
            version->setObjectName(QStringLiteral("version"));
        version->resize(760, 641);
        groupBox = new QGroupBox(version);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, -20, 761, 61));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(52, 101, 164);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 20, 71, 41));
        tabWidget = new QTabWidget(version);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 731, 531));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        stackedWidget = new QStackedWidget(tab);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 711, 221));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 180, 67, 17));
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 90, 101, 17));
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 150, 67, 17));
        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 60, 101, 17));
        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(80, 120, 67, 17));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 20, 41, 41));
        QIcon icon;
        icon.addFile(QStringLiteral("../DEBUG/imagic/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(32, 32));
        pushButton_2->setFlat(true);
        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(80, 30, 121, 17));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 340, 411, 41));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 380, 121, 21));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 280, 81, 51));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(230, 420, 151, 17));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(60, 90, 31, 31));
        label_12->setLineWidth(0);
        label_12->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/black_point.png")));
        label_12->setScaledContents(true);
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(90, 120, 301, 31));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(60, 120, 31, 31));
        label_14->setLineWidth(0);
        label_14->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/black_point.png")));
        label_14->setScaledContents(true);
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 30, 111, 31));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(90, 90, 271, 31));
        tabWidget->addTab(tab_2, QString());
        pushButton = new QPushButton(version);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 590, 89, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(version);

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(version);
    } // setupUi

    void retranslateUi(QWidget *version)
    {
        version->setWindowTitle(QApplication::translate("version", "Form", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("version", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#eeeeec;\">\345\205\263\344\272\216</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("version", "\345\272\217\345\210\227\345\217\267\357\274\232", nullptr));
        label_5->setText(QApplication::translate("version", "\345\256\211\345\205\250\345\244\204\347\220\206\345\231\250B\357\274\232", nullptr));
        label_7->setText(QApplication::translate("version", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        label_8->setText(QApplication::translate("version", "\345\256\211\345\205\250\345\244\204\347\220\206\345\231\250A\357\274\232", nullptr));
        label_9->setText(QApplication::translate("version", "\344\270\273\346\234\272\345\220\215\357\274\232", nullptr));
        pushButton_2->setText(QString());
        label_10->setText(QApplication::translate("version", "\351\200\232\347\224\250\346\234\272\345\231\250\344\272\272\350\275\257\344\273\266\357\274\232", nullptr));
        label_3->setText(QApplication::translate("version", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600;\">COLLABORATIVE ROBOTS</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("version", "<html><head/><body><p><span style=\" font-size:12pt; text-decoration: underline; color:#42b2f1;\">www.baidu.com</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("version", "<html><head/><body><p><span style=\" font-size:26pt; font-weight:600;\">IIMT</span></p></body></html>", nullptr));
        label_11->setText(QApplication::translate("version", "\302\251 Copyright Reserved", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("version", "\347\211\210\346\234\254", nullptr));
        label_12->setText(QString());
        label_13->setText(QApplication::translate("version", "\346\234\254\344\272\247\345\223\201\345\214\205\345\220\253Indiana University \345\274\200\345\217\221\347\232\204\350\275\257\344\273\266\343\200\202", nullptr));
        label_14->setText(QString());
        label_15->setText(QApplication::translate("version", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\263\225\345\276\213\351\200\232\345\221\212</span></p></body></html>", nullptr));
        label_16->setText(QApplication::translate("version", "<html><head/><body><p>\346\234\254\344\272\247\345\223\201\345\214\205\345\220\253Linux\345\206\205\346\240\270\343\200\202</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("version", "\345\220\210\346\263\225", nullptr));
        pushButton->setText(QApplication::translate("version", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class version: public Ui_version {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSION_FORM_H
