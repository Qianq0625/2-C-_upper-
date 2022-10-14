/********************************************************************************
** Form generated from reading UI file 'programme_form.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMME_FORM_H
#define UI_PROGRAMME_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_programme_form
{
public:
    QTabWidget *tabWidget;
    QWidget *Command_t;
    QStackedWidget *stackedWidget;
    QWidget *action_tab;
    QGroupBox *groupBox_2;
    QWidget *tab;
    QLabel *label;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_5;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QWidget *tab_4;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QPushButton *pushButton_33;
    QWidget *tab_5;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QPushButton *pushButton_36;
    QPushButton *pushButton_37;
    QLabel *label_6;
    QPushButton *pushbtn_up;
    QPushButton *pushbtn_down;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QWidget *tab_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *textEdit;
    QPushButton *pushButton_38;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QLabel *label_3;
    QPushButton *pushbtn_left;
    QPushButton *pushbtn_right;
    QLabel *lab_nameshow;
    QPushButton *pushbtn_back;
    QPushButton *pushbtn_save;
    QPushButton *pushbtn_twoway;
    QTreeView *treeView;
    QPushButton *pushbtn_go;
    QPushButton *pushbtn_search;

    void setupUi(QWidget *programme_form)
    {
        if (programme_form->objectName().isEmpty())
            programme_form->setObjectName(QStringLiteral("programme_form"));
        programme_form->resize(1044, 677);
        tabWidget = new QTabWidget(programme_form);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(210, 0, 841, 611));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideNone);
        Command_t = new QWidget();
        Command_t->setObjectName(QStringLiteral("Command_t"));
        stackedWidget = new QStackedWidget(Command_t);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 821, 531));
        tabWidget->addTab(Command_t, QString());
        action_tab = new QWidget();
        action_tab->setObjectName(QStringLiteral("action_tab"));
        groupBox_2 = new QGroupBox(action_tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, -20, 831, 571));
        tabWidget->addTab(action_tab, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 191, 31));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 70, 91, 17));
        comboBox = new QComboBox(tab);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(130, 64, 86, 31));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 100, 67, 17));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(130, 110, 581, 251));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_18 = new QPushButton(tab_3);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(10, 10, 271, 41));
        pushButton_19 = new QPushButton(tab_3);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(290, 10, 271, 41));
        pushButton_20 = new QPushButton(tab_3);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(10, 60, 271, 41));
        pushButton_21 = new QPushButton(tab_3);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(290, 60, 271, 41));
        pushButton_22 = new QPushButton(tab_3);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(10, 110, 271, 41));
        pushButton_23 = new QPushButton(tab_3);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        pushButton_23->setGeometry(QRect(290, 110, 271, 41));
        pushButton_24 = new QPushButton(tab_3);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setGeometry(QRect(10, 160, 271, 41));
        pushButton_25 = new QPushButton(tab_3);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        pushButton_25->setGeometry(QRect(290, 160, 271, 41));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_26 = new QPushButton(tab_4);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        pushButton_26->setGeometry(QRect(10, 10, 271, 41));
        pushButton_27 = new QPushButton(tab_4);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setGeometry(QRect(290, 10, 271, 41));
        pushButton_28 = new QPushButton(tab_4);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        pushButton_28->setGeometry(QRect(10, 60, 271, 41));
        pushButton_29 = new QPushButton(tab_4);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        pushButton_29->setGeometry(QRect(290, 60, 271, 41));
        pushButton_30 = new QPushButton(tab_4);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setGeometry(QRect(290, 110, 271, 41));
        pushButton_31 = new QPushButton(tab_4);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        pushButton_31->setGeometry(QRect(10, 160, 271, 41));
        pushButton_32 = new QPushButton(tab_4);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));
        pushButton_32->setGeometry(QRect(10, 110, 271, 41));
        pushButton_33 = new QPushButton(tab_4);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));
        pushButton_33->setGeometry(QRect(290, 160, 271, 41));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        pushButton_34 = new QPushButton(tab_5);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));
        pushButton_34->setGeometry(QRect(10, 60, 271, 41));
        pushButton_35 = new QPushButton(tab_5);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));
        pushButton_35->setGeometry(QRect(290, 10, 271, 41));
        pushButton_36 = new QPushButton(tab_5);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        pushButton_36->setGeometry(QRect(290, 60, 271, 41));
        pushButton_37 = new QPushButton(tab_5);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));
        pushButton_37->setGeometry(QRect(10, 10, 271, 41));
        tabWidget_2->addTab(tab_5, QString());
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 370, 41, 17));
        pushbtn_up = new QPushButton(tab);
        pushbtn_up->setObjectName(QStringLiteral("pushbtn_up"));
        pushbtn_up->setGeometry(QRect(40, 400, 121, 31));
        QIcon icon;
        icon.addFile(QStringLiteral("../../DEBUG/imagic/upward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushbtn_up->setIcon(icon);
        pushbtn_down = new QPushButton(tab);
        pushbtn_down->setObjectName(QStringLiteral("pushbtn_down"));
        pushbtn_down->setGeometry(QRect(40, 444, 121, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../DEBUG/imagic/down_arrow_green.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushbtn_down->setIcon(icon1);
        pushButton_13 = new QPushButton(tab);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(180, 400, 121, 31));
        pushButton_14 = new QPushButton(tab);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(320, 400, 131, 31));
        pushButton_15 = new QPushButton(tab);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(470, 400, 121, 31));
        pushButton_16 = new QPushButton(tab);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(180, 444, 121, 31));
        pushButton_17 = new QPushButton(tab);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(320, 444, 131, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 831, 581));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 829, 579));
        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 40, 831, 531));
        pushButton_38 = new QPushButton(scrollAreaWidgetContents);
        pushButton_38->setObjectName(QStringLiteral("pushButton_38"));
        pushButton_38->setGeometry(QRect(760, 4, 61, 31));
        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab_2, QString());
        groupBox = new QGroupBox(programme_form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 590, 1051, 91));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 22, 112, 31));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 50, 112, 23));
        radioButton_2->setChecked(true);
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(200, 30, 51, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../DEBUG/imagic/left-speed.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(30, 30));
        pushButton_5->setCheckable(true);
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(260, 30, 31, 31));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../DEBUG/imagic/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon3);
        pushButton_6->setIconSize(QSize(25, 25));
        pushButton_6->setCheckable(true);
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(300, 30, 31, 31));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../DEBUG/imagic/speed.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon4);
        pushButton_7->setIconSize(QSize(30, 30));
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setEnabled(false);
        pushButton_8->setGeometry(QRect(340, 30, 31, 31));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../DEBUG/imagic/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon5);
        pushButton_8->setIconSize(QSize(18, 18));
        pushButton_8->setCheckable(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(390, 40, 41, 16));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(430, 40, 141, 16));
        horizontalSlider->setValue(19);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::NoTicks);
        horizontalSlider->setTickInterval(0);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(580, 40, 67, 17));
        pushbtn_left = new QPushButton(groupBox);
        pushbtn_left->setObjectName(QStringLiteral("pushbtn_left"));
        pushbtn_left->setGeometry(QRect(840, 34, 89, 31));
        pushbtn_left->setLayoutDirection(Qt::LeftToRight);
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../DEBUG/imagic/leftward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushbtn_left->setIcon(icon6);
        pushbtn_left->setIconSize(QSize(25, 25));
        pushbtn_right = new QPushButton(groupBox);
        pushbtn_right->setObjectName(QStringLiteral("pushbtn_right"));
        pushbtn_right->setGeometry(QRect(940, 34, 89, 31));
        pushbtn_right->setLayoutDirection(Qt::LeftToRight);
        QIcon icon7;
        icon7.addFile(QStringLiteral("../../DEBUG/imagic/rightward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushbtn_right->setIcon(icon7);
        pushbtn_right->setIconSize(QSize(15, 15));
        lab_nameshow = new QLabel(programme_form);
        lab_nameshow->setObjectName(QStringLiteral("lab_nameshow"));
        lab_nameshow->setGeometry(QRect(50, 10, 141, 17));
        pushbtn_back = new QPushButton(programme_form);
        pushbtn_back->setObjectName(QStringLiteral("pushbtn_back"));
        pushbtn_back->setGeometry(QRect(40, 570, 31, 31));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../../DEBUG/imagic/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushbtn_back->setIcon(icon8);
        pushbtn_back->setCheckable(true);
        pushbtn_save = new QPushButton(programme_form);
        pushbtn_save->setObjectName(QStringLiteral("pushbtn_save"));
        pushbtn_save->setGeometry(QRect(10, 6, 31, 20));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../../DEBUG/imagic/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushbtn_save->setIcon(icon9);
        pushbtn_save->setIconSize(QSize(19, 19));
        pushbtn_save->setCheckable(true);
        pushbtn_twoway = new QPushButton(programme_form);
        pushbtn_twoway->setObjectName(QStringLiteral("pushbtn_twoway"));
        pushbtn_twoway->setGeometry(QRect(110, 570, 81, 31));
        QIcon icon10;
        icon10.addFile(QStringLiteral("../../DEBUG/imagic/two-way.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushbtn_twoway->setIcon(icon10);
        pushbtn_twoway->setIconSize(QSize(70, 70));
        pushbtn_twoway->setCheckable(true);
        treeView = new QTreeView(programme_form);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(0, 30, 211, 531));
        QFont font;
        font.setPointSize(14);
        treeView->setFont(font);
        treeView->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        treeView->setFrameShape(QFrame::WinPanel);
        treeView->setFrameShadow(QFrame::Plain);
        pushbtn_go = new QPushButton(programme_form);
        pushbtn_go->setObjectName(QStringLiteral("pushbtn_go"));
        pushbtn_go->setGeometry(QRect(70, 570, 31, 31));
        QIcon icon11;
        icon11.addFile(QStringLiteral("../../DEBUG/imagic/go.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushbtn_go->setIcon(icon11);
        pushbtn_go->setCheckable(true);
        pushbtn_search = new QPushButton(programme_form);
        pushbtn_search->setObjectName(QStringLiteral("pushbtn_search"));
        pushbtn_search->setGeometry(QRect(10, 570, 31, 31));
        QIcon icon12;
        icon12.addFile(QStringLiteral("../../DEBUG/imagic/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushbtn_search->setIcon(icon12);
        pushbtn_search->setCheckable(true);

        retranslateUi(programme_form);

        tabWidget->setCurrentIndex(3);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(programme_form);
    } // setupUi

    void retranslateUi(QWidget *programme_form)
    {
        programme_form->setWindowTitle(QApplication::translate("programme_form", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("programme_form", "<html><head/><body><p><span style=\" font-style:italic;\">\345\221\275\344\273\244\345\212\250\344\275\234\346\240\217</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(Command_t), QApplication::translate("programme_form", "\345\221\275\344\273\244", nullptr));
        groupBox_2->setTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(action_tab), QApplication::translate("programme_form", "\345\233\276\345\275\242", nullptr));
        label->setText(QApplication::translate("programme_form", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\347\250\213\345\272\217\347\273\223\346\236\204\347\274\226\350\276\221\345\231\250</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("programme_form", "\350\256\276\347\275\256\350\212\202\347\202\271\344\275\215\347\275\256", nullptr));
        comboBox->setItemText(0, QApplication::translate("programme_form", "\351\200\211\346\213\251\345\220\216", nullptr));

        label_5->setText(QApplication::translate("programme_form", "\346\217\222\345\205\245", nullptr));
        pushButton_18->setText(QApplication::translate("programme_form", "\347\247\273\345\212\250", nullptr));
        pushButton_19->setText(QApplication::translate("programme_form", "\350\267\257\347\202\271", nullptr));
        pushButton_20->setText(QApplication::translate("programme_form", "\347\255\211\345\276\205", nullptr));
        pushButton_21->setText(QApplication::translate("programme_form", "\350\256\276\347\275\256", nullptr));
        pushButton_22->setText(QApplication::translate("programme_form", "\345\274\271\345\207\272\347\252\227\345\217\243", nullptr));
        pushButton_23->setText(QApplication::translate("programme_form", "\344\270\255\346\255\242", nullptr));
        pushButton_24->setText(QApplication::translate("programme_form", "\346\263\250\351\207\212", nullptr));
        pushButton_25->setText(QApplication::translate("programme_form", "\346\226\207\344\273\266\345\244\271", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("programme_form", "\345\237\272\346\234\254", nullptr));
        pushButton_26->setText(QApplication::translate("programme_form", "\345\276\252\347\216\257", nullptr));
        pushButton_27->setText(QApplication::translate("programme_form", "SubProg", nullptr));
        pushButton_28->setText(QApplication::translate("programme_form", "\350\265\213\345\200\274", nullptr));
        pushButton_29->setText(QApplication::translate("programme_form", "If...else", nullptr));
        pushButton_30->setText(QApplication::translate("programme_form", "\344\272\213\344\273\266", nullptr));
        pushButton_31->setText(QApplication::translate("programme_form", "\347\272\277\347\250\213", nullptr));
        pushButton_32->setText(QApplication::translate("programme_form", "\350\204\232\346\234\254\344\273\243\347\240\201", nullptr));
        pushButton_33->setText(QApplication::translate("programme_form", "\345\274\200\345\205\263", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("programme_form", "\351\253\230\347\272\247", nullptr));
        pushButton_34->setText(QApplication::translate("programme_form", "\345\212\233", nullptr));
        pushButton_35->setText(QApplication::translate("programme_form", "\346\216\242\345\257\273", nullptr));
        pushButton_36->setText(QApplication::translate("programme_form", "\346\255\243\345\234\250\350\267\237\350\270\252\350\276\223\351\200\201\346\234\272", nullptr));
        pushButton_37->setText(QApplication::translate("programme_form", "\346\211\230\347\233\230", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("programme_form", "\345\220\221\345\257\274", nullptr));
        label_6->setText(QApplication::translate("programme_form", "\347\274\226\350\276\221", nullptr));
        pushbtn_up->setText(QApplication::translate("programme_form", "\347\247\273\345\212\250", nullptr));
        pushbtn_down->setText(QApplication::translate("programme_form", "\347\247\273\345\212\250", nullptr));
        pushButton_13->setText(QApplication::translate("programme_form", "\345\244\215\345\210\266", nullptr));
        pushButton_14->setText(QApplication::translate("programme_form", "\347\262\230\350\264\264", nullptr));
        pushButton_15->setText(QApplication::translate("programme_form", "\346\212\221\345\210\266", nullptr));
        pushButton_16->setText(QApplication::translate("programme_form", "\345\210\207\345\211\262", nullptr));
        pushButton_17->setText(QApplication::translate("programme_form", "\345\210\240\351\231\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("programme_form", "\347\273\223\346\236\204", nullptr));
        pushButton_38->setText(QApplication::translate("programme_form", "\346\270\205\351\231\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("programme_form", "\345\217\230\351\207\217", nullptr));
        groupBox->setTitle(QString());
        radioButton->setText(QApplication::translate("programme_form", "\346\250\241\346\213\237", nullptr));
        radioButton_2->setText(QApplication::translate("programme_form", "\347\234\237\345\256\236\346\234\272\345\231\250\344\272\272", nullptr));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        label_2->setText(QApplication::translate("programme_form", "\351\200\237\345\272\246", nullptr));
        label_3->setText(QApplication::translate("programme_form", "100%", nullptr));
        pushbtn_left->setText(QApplication::translate("programme_form", "\344\270\212\344\270\200\344\270\252", nullptr));
        pushbtn_right->setText(QApplication::translate("programme_form", "\344\270\213\344\270\200\344\270\252", nullptr));
        lab_nameshow->setText(QApplication::translate("programme_form", "<unamed>", nullptr));
        pushbtn_back->setText(QString());
        pushbtn_save->setText(QString());
        pushbtn_twoway->setText(QString());
#ifndef QT_NO_TOOLTIP
        treeView->setToolTip(QApplication::translate("programme_form", "<html><head/><body><p><span style=\" font-style:italic;\">\346\225\260\346\215\256\347\273\223\346\236\204</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushbtn_go->setText(QString());
        pushbtn_search->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class programme_form: public Ui_programme_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMME_FORM_H
