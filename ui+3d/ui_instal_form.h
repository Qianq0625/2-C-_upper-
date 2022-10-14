/********************************************************************************
** Form generated from reading UI file 'instal_form.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTAL_FORM_H
#define UI_INSTAL_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButton_13;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QFrame *line;
    QLabel *label_12;
    QLineEdit *lineEdit_7;
    QLabel *label_13;
    QCheckBox *checkBox;
    QLineEdit *lineEdit_9;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *lineEdit_10;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QWidget *page_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QWidget *page_4;
    QLineEdit *lineEdit_8;
    QLabel *label_14;
    QLabel *label_15;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_9;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(1051, 671);
        stackedWidget = new QStackedWidget(Form);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(240, 0, 811, 561));
        stackedWidget->setFrameShape(QFrame::NoFrame);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 10, 171, 31));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 50, 71, 31));
        comboBox = new QComboBox(page);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(100, 90, 111, 31));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        comboBox->setEditable(true);
        pushButton_13 = new QPushButton(page);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(280, 90, 171, 31));
        pushButton_13->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 150, 16, 17));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 190, 16, 17));
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 230, 16, 17));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 270, 31, 17));
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 310, 31, 17));
        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 350, 21, 20));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 150, 91, 25));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 190, 91, 25));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_3 = new QLineEdit(page);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 230, 91, 25));
        lineEdit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_4 = new QLineEdit(page);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(140, 270, 91, 25));
        lineEdit_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_5 = new QLineEdit(page);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(140, 310, 91, 25));
        lineEdit_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_6 = new QLineEdit(page);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(140, 350, 91, 25));
        lineEdit_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_14 = new QPushButton(page);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(280, 180, 171, 31));
        pushButton_14->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_15 = new QPushButton(page);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(280, 220, 171, 31));
        pushButton_15->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_16 = new QPushButton(page);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(280, 300, 171, 31));
        pushButton_16->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_17 = new QPushButton(page);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setEnabled(false);
        pushButton_17->setGeometry(QRect(280, 340, 171, 31));
        pushButton_17->setStyleSheet(QStringLiteral(""));
        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(240, 146, 31, 31));
        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(240, 190, 31, 17));
        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(240, 230, 31, 17));
        line = new QFrame(page);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(60, 375, 391, 21));
        line->setAutoFillBackground(false);
        line->setStyleSheet(QLatin1String("gridline-color: rgb(114, 159, 207);\n"
"border-color: rgb(114, 159, 207);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_12 = new QLabel(page);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(90, 400, 67, 17));
        lineEdit_7 = new QLineEdit(page);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(160, 390, 81, 31));
        lineEdit_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_13 = new QLabel(page);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(250, 390, 21, 31));
        checkBox = new QCheckBox(page);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(90, 440, 92, 23));
        checkBox->setAcceptDrops(false);
        checkBox->setAutoFillBackground(false);
        checkBox->setStyleSheet(QStringLiteral(""));
        checkBox->setChecked(false);
        checkBox->setTristate(false);
        lineEdit_9 = new QLineEdit(page);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(130, 500, 91, 25));
        lineEdit_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_16 = new QLabel(page);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(230, 496, 31, 31));
        label_17 = new QLabel(page);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(95, 500, 21, 20));
        lineEdit_10 = new QLineEdit(page);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(130, 530, 91, 25));
        lineEdit_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_18 = new QLabel(page);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(230, 526, 31, 31));
        label_19 = new QLabel(page);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(95, 530, 21, 20));
        label_20 = new QLabel(page);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(530, 350, 211, 161));
        label_20->setPixmap(QPixmap(QString::fromUtf8("../../DEBUG/imagic/xz.png")));
        label_20->setScaledContents(true);
        label_21 = new QLabel(page);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(510, 80, 251, 241));
        label_21->setPixmap(QPixmap(QString::fromUtf8("../../DEBUG/imagic/xy.png")));
        label_21->setScaledContents(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        stackedWidget_2 = new QStackedWidget(Form);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(0, 559, 1051, 81));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        stackedWidget_2->addWidget(page_4);
        lineEdit_8 = new QLineEdit(Form);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(370, 470, 91, 25));
        lineEdit_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_14 = new QLabel(Form);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(470, 466, 31, 31));
        label_15 = new QLabel(Form);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(336, 470, 20, 20));
        scrollArea = new QScrollArea(Form);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 241, 551));
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 260, 540));
        scrollAreaWidgetContents->setMinimumSize(QSize(260, 540));
        scrollAreaWidgetContents->setMaximumSize(QSize(325, 611));
        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 120, 251, 41));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{\n"
"text-align:left;}"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../DEBUG/imagic/safe.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setIconSize(QSize(25, 25));
        pushButton_5->setFlat(true);
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(0, 0, 251, 41));
        pushButton->setFocusPolicy(Qt::StrongFocus);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"text-align:left;}"));
        pushButton->setCheckable(false);
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 40, 251, 41));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"text-align:left;}"));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 80, 251, 41));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"text-align:left;}"));
        pushButton_3->setFlat(true);
        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 160, 251, 41));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{\n"
"text-align:left;}"));
        pushButton_4->setFlat(true);
        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 200, 251, 41));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton{\n"
"text-align:left;}"));
        pushButton_6->setFlat(true);
        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 240, 251, 41));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton{\n"
"text-align:left;}"));
        pushButton_7->setFlat(true);
        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 330, 251, 41));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton{\n"
"text-align:left;}"));
        pushButton_8->setFlat(true);
        pushButton_10 = new QPushButton(scrollAreaWidgetContents);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(0, 410, 251, 41));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton{\n"
"text-align:left;}"));
        pushButton_10->setFlat(true);
        pushButton_11 = new QPushButton(scrollAreaWidgetContents);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(0, 450, 251, 41));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton{\n"
"text-align:left;}"));
        pushButton_11->setFlat(true);
        pushButton_12 = new QPushButton(scrollAreaWidgetContents);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(0, 490, 251, 41));
        pushButton_12->setStyleSheet(QLatin1String("QPushButton{\n"
"text-align:left;}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../DEBUG/imagic/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon1);
        pushButton_12->setIconSize(QSize(25, 25));
        pushButton_12->setFlat(true);
        pushButton_9 = new QPushButton(scrollAreaWidgetContents);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(0, 370, 251, 41));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton{\n"
"text-align:left;}"));
        pushButton_9->setFlat(true);
        treeWidget = new QTreeWidget(scrollAreaWidgetContents);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(0, 270, 271, 61));
        treeWidget->header()->setVisible(false);
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Form);

        stackedWidget->setCurrentIndex(0);
        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label->setText(QApplication::translate("Form", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\350\256\276\347\275\256\345\267\245\345\205\267\344\270\255\345\277\203\347\202\271</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Form", "\345\217\257\347\224\250TCP\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("Form", "TCP", nullptr));

        pushButton_13->setText(QApplication::translate("Form", "\351\207\215\350\256\276\344\270\272\351\273\230\350\256\244\350\256\276\347\275\256", nullptr));
        label_3->setText(QApplication::translate("Form", "X", nullptr));
        label_4->setText(QApplication::translate("Form", "Y", nullptr));
        label_5->setText(QApplication::translate("Form", "Z", nullptr));
        label_6->setText(QApplication::translate("Form", "RX", nullptr));
        label_7->setText(QApplication::translate("Form", "RY", nullptr));
        label_8->setText(QApplication::translate("Form", "RZ", nullptr));
        lineEdit->setText(QApplication::translate("Form", "0.0", nullptr));
        lineEdit_2->setText(QApplication::translate("Form", "0.0", nullptr));
        lineEdit_3->setText(QApplication::translate("Form", "0.0", nullptr));
        lineEdit_4->setText(QApplication::translate("Form", "0.0000", nullptr));
        lineEdit_5->setText(QApplication::translate("Form", "0.0000", nullptr));
        lineEdit_6->setText(QApplication::translate("Form", "0.0000", nullptr));
        pushButton_14->setText(QApplication::translate("Form", "\344\275\215\347\275\256", nullptr));
        pushButton_15->setText(QApplication::translate("Form", "\346\226\271\345\220\221", nullptr));
        pushButton_16->setText(QApplication::translate("Form", "\346\226\260\345\273\272", nullptr));
        pushButton_17->setText(QApplication::translate("Form", "\347\247\273\351\231\244", nullptr));
        label_9->setText(QApplication::translate("Form", "mm", nullptr));
        label_10->setText(QApplication::translate("Form", "mm", nullptr));
        label_11->setText(QApplication::translate("Form", "mm", nullptr));
        label_12->setText(QApplication::translate("Form", "\346\234\211\346\225\210\350\264\237\350\275\275:", nullptr));
        lineEdit_7->setText(QApplication::translate("Form", "0.0", nullptr));
        label_13->setText(QApplication::translate("Form", "kg", nullptr));
        checkBox->setText(QApplication::translate("Form", "\351\207\215\345\277\203:", nullptr));
        lineEdit_9->setText(QApplication::translate("Form", "0.0", nullptr));
        label_16->setText(QApplication::translate("Form", "mm", nullptr));
        label_17->setText(QApplication::translate("Form", "CY", nullptr));
        lineEdit_10->setText(QApplication::translate("Form", "0.0", nullptr));
        label_18->setText(QApplication::translate("Form", "mm", nullptr));
        label_19->setText(QApplication::translate("Form", "CZ", nullptr));
        label_20->setText(QString());
        label_21->setText(QString());
        lineEdit_8->setText(QApplication::translate("Form", "0.0", nullptr));
        label_14->setText(QApplication::translate("Form", "mm", nullptr));
        label_15->setText(QApplication::translate("Form", "CX", nullptr));
        pushButton_5->setText(QApplication::translate("Form", "\345\256\211\345\205\250", nullptr));
        pushButton->setText(QApplication::translate("Form", "TCP\351\205\215\347\275\256", nullptr));
        pushButton_2->setText(QApplication::translate("Form", "\345\256\211\350\243\205", nullptr));
        pushButton_3->setText(QApplication::translate("Form", "I/O\350\256\276\347\275\256", nullptr));
        pushButton_4->setText(QApplication::translate("Form", "\345\217\230\351\207\217", nullptr));
        pushButton_6->setText(QApplication::translate("Form", "MODBUS", nullptr));
        pushButton_7->setText(QApplication::translate("Form", "\347\211\271\345\276\201", nullptr));
        pushButton_8->setText(QApplication::translate("Form", "\346\255\243\345\234\250\350\267\237\350\270\252\350\276\223\351\200\201\346\234\272", nullptr));
        pushButton_10->setText(QApplication::translate("Form", "PROFINET", nullptr));
        pushButton_11->setText(QApplication::translate("Form", "\351\273\230\350\256\244\347\250\213\345\272\217", nullptr));
        pushButton_12->setText(QApplication::translate("Form", "\345\212\240\350\275\275/\344\277\235\345\255\230", nullptr));
        pushButton_9->setText(QApplication::translate("Form", "EtherNet/IP", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("Form", "\347\211\271\345\276\201", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("Form", "\346\234\272\345\272\247", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("Form", "\345\267\245\345\205\267", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTAL_FORM_H
