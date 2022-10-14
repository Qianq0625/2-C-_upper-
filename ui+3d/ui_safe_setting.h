/********************************************************************************
** Form generated from reading UI file 'safe_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFE_SETTING_H
#define UI_SAFE_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_safe_setting
{
public:
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_20;
    QSlider *horizontalSlider;
    QLabel *label_4;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_30;
    QLabel *label_2;
    QLabel *label_26;
    QLabel *label_7;
    QLabel *label_28;
    QLabel *label_21;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_22;
    QLabel *label_19;
    QPushButton *pushButton;
    QLabel *label_15;
    QLabel *label_8;
    QFrame *line;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_25;
    QLabel *label_9;
    QLabel *label_29;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_27;
    QLabel *label_31;
    QWidget *page_2;

    void setupUi(QWidget *safe_setting)
    {
        if (safe_setting->objectName().isEmpty())
            safe_setting->setObjectName(QStringLiteral("safe_setting"));
        safe_setting->resize(773, 601);
        label = new QLabel(safe_setting);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 10, 91, 41));
        tabWidget = new QTabWidget(safe_setting);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 40, 811, 31));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        stackedWidget = new QStackedWidget(safe_setting);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 70, 751, 521));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_20 = new QLabel(page);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(310, 370, 34, 31));
        horizontalSlider = new QSlider(page);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(70, 150, 601, 21));
        horizontalSlider->setStyleSheet(QLatin1String("QSlider{\n"
"border-color:rgb(211, 215, 207)\n"
"}\n"
"QSlider::groove:horizontal {\n"
"border:1px solid;\n"
"border-color: rgb(114, 159, 207);\n"
"height:5px;\n"
"margin:0px 0;\n"
"left:5px;right:5px;\n"
"border_radius:3px\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background:rgb(114, 159, 207);\n"
"border: rgb(46, 52, 54);\n"
"width:12px;\n"
"height:6px;\n"
"margin-top:-20px;\n"
"margin-left:0px;\n"
"margin-bottom:-10px;\n"
"margin-right:0px;\n"
"border_radius:3px\n"
"}\n"
"\n"
""));
        horizontalSlider->setValue(56);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 180, 67, 16));
        label_23 = new QLabel(page);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(310, 410, 26, 21));
        label_24 = new QLabel(page);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(350, 410, 17, 21));
        label_30 = new QLabel(page);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(20, 40, 41, 41));
        label_30->setPixmap(QPixmap(QString::fromUtf8("../../DEBUG/imagic/warning.png")));
        label_30->setScaledContents(true);
        label_30->setWordWrap(false);
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 20, 611, 91));
        label_2->setTextFormat(Qt::PlainText);
        label_2->setWordWrap(true);
        label_26 = new QLabel(page);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(550, 290, 67, 21));
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(310, 250, 71, 31));
        label_28 = new QLabel(page);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(550, 370, 67, 31));
        label_21 = new QLabel(page);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(350, 370, 39, 31));
        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(110, 330, 67, 17));
        label_12 = new QLabel(page);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(110, 410, 67, 17));
        label_17 = new QLabel(page);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(310, 330, 34, 31));
        label_18 = new QLabel(page);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(350, 329, 21, 31));
        label_22 = new QLabel(page);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(250, 410, 60, 23));
        label_19 = new QLabel(page);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(250, 370, 60, 23));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(550, 490, 201, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_15 = new QLabel(page);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(350, 290, 16, 21));
        label_15->setLineWidth(0);
        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(550, 250, 71, 31));
        line = new QFrame(page);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(110, 270, 501, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(640, 180, 67, 17));
        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(110, 370, 67, 17));
        label_25 = new QLabel(page);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(370, 410, 26, 21));
        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(110, 290, 67, 17));
        label_29 = new QLabel(page);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(550, 410, 67, 17));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 220, 171, 21));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 250, 81, 31));
        label_16 = new QLabel(page);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(251, 331, 60, 23));
        label_16->setFrameShape(QFrame::NoFrame);
        label_14 = new QLabel(page);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(310, 290, 26, 21));
        label_13 = new QLabel(page);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 110, 101, 21));
        label_27 = new QLabel(page);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(250, 290, 60, 23));
        label_31 = new QLabel(page);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(550, 330, 67, 31));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(safe_setting);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(safe_setting);
    } // setupUi

    void retranslateUi(QWidget *safe_setting)
    {
        safe_setting->setWindowTitle(QApplication::translate("safe_setting", "Form", nullptr));
        label->setText(QApplication::translate("safe_setting", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">\345\256\211\345\205\250\351\205\215\347\275\256</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("safe_setting", "\344\270\200\350\210\254\351\231\220\345\210\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("safe_setting", "\345\205\263\350\212\202\351\231\220\345\210\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("safe_setting", "\350\276\271\347\225\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("safe_setting", "\345\256\211\345\205\250I/O", nullptr));
        label_20->setText(QApplication::translate("safe_setting", "5000", nullptr));
        label_4->setText(QApplication::translate("safe_setting", "<html><head/><body><p><span style=\" font-size:9pt; color:#888a85;\">\344\270\245\346\240\274\351\231\220\345\210\266</span></p></body></html>", nullptr));
        label_23->setText(QApplication::translate("safe_setting", "100", nullptr));
        label_24->setText(QApplication::translate("safe_setting", "kg", nullptr));
        label_30->setText(QString());
        label_2->setText(QApplication::translate("safe_setting", "\345\215\261\351\231\251\357\274\232\344\275\277\347\224\250\347\232\204\345\256\211\345\205\250\351\205\215\347\275\256\345\217\202\346\225\260\344\270\216\351\243\216\351\231\251\350\257\204\344\274\260\346\211\200\345\256\232\344\271\211\347\232\204\344\270\215\345\220\214\345\217\257\345\257\274\350\207\264\346\227\240\346\263\225\345\220\210\347\220\206\346\266\210\351\231\244\347\232\204\345\215\261\351\231\251\346\210\226\346\227\240\346\263\225\345\205\205\345\210\206\345\207\217\345\260\221\347\232\204\351\243\216\351\231\251\343\200\202", nullptr));
        label_26->setText(QApplication::translate("safe_setting", "150", nullptr));
        label_7->setText(QApplication::translate("safe_setting", "<html><head/><body><p><span style=\" font-weight:600;\">\346\234\200\345\244\247</span></p></body></html>", nullptr));
        label_28->setText(QApplication::translate("safe_setting", "1500", nullptr));
        label_21->setText(QApplication::translate("safe_setting", "mm/s", nullptr));
        label_10->setText(QApplication::translate("safe_setting", "\347\224\265\346\272\220", nullptr));
        label_12->setText(QApplication::translate("safe_setting", "\345\212\250\351\207\217", nullptr));
        label_17->setText(QApplication::translate("safe_setting", "1000", nullptr));
        label_18->setText(QApplication::translate("safe_setting", "W", nullptr));
        label_22->setText(QApplication::translate("safe_setting", "\346\234\200\345\244\247\345\200\274\357\274\232", nullptr));
        label_19->setText(QApplication::translate("safe_setting", "\346\234\200\345\244\247\345\200\274\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("safe_setting", "\351\253\230\347\272\247\350\256\276\347\275\256...", nullptr));
        label_15->setText(QApplication::translate("safe_setting", "N", nullptr));
        label_8->setText(QApplication::translate("safe_setting", "<html><head/><body><p><span style=\" font-weight:600;\">\346\255\243\345\270\270\346\250\241\345\274\217</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("safe_setting", "<html><head/><body><p><span style=\" font-size:9pt; color:#888a85;\">\351\231\220\345\210\266\346\234\200\345\260\221</span></p></body></html>", nullptr));
        label_11->setText(QApplication::translate("safe_setting", "\351\200\237\345\272\246", nullptr));
        label_25->setText(QApplication::translate("safe_setting", "m/s", nullptr));
        label_9->setText(QApplication::translate("safe_setting", "\345\212\233", nullptr));
        label_29->setText(QApplication::translate("safe_setting", "25", nullptr));
        label_3->setText(QApplication::translate("safe_setting", "\346\255\244\350\241\250\345\214\205\345\220\253\351\200\211\345\256\232\351\242\204\350\256\276\347\232\204\345\200\274\357\274\232", nullptr));
        label_6->setText(QApplication::translate("safe_setting", "<html><head/><body><p><span style=\" font-weight:600;\">\351\231\220\345\210\266</span></p></body></html>", nullptr));
        label_16->setText(QApplication::translate("safe_setting", "\346\234\200\345\244\247\345\200\274\357\274\232", nullptr));
        label_14->setText(QApplication::translate("safe_setting", "250", nullptr));
        label_13->setText(QApplication::translate("safe_setting", "\351\200\211\346\213\251\345\256\211\345\205\250\351\242\204\347\275\256\357\274\232", nullptr));
        label_27->setText(QApplication::translate("safe_setting", "\346\234\200\345\244\247\345\200\274\357\274\232", nullptr));
        label_31->setText(QApplication::translate("safe_setting", "300", nullptr));
    } // retranslateUi

};

namespace Ui {
    class safe_setting: public Ui_safe_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFE_SETTING_H
