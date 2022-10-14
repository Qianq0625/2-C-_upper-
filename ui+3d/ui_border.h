/********************************************************************************
** Form generated from reading UI file 'border.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORDER_H
#define UI_BORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_border
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label;
    QFrame *line;
    QLabel *label_10;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QPushButton *pushButton_9;
    QWidget *page_2;

    void setupUi(QWidget *border)
    {
        if (border->objectName().isEmpty())
            border->setObjectName(QStringLiteral("border"));
        border->resize(750, 502);
        groupBox = new QGroupBox(border);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, -10, 751, 351));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(290, 0, 461, 351));
        groupBox_2->setStyleSheet(QStringLiteral("border-color: rgb(114, 159, 207);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 71, 21));
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 300, 261, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 316, 71, 31));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(250, 76, 20, 20));
        QIcon icon;
        icon.addFile(QStringLiteral("../../DEBUG/imagic/e yes.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton->setIcon(icon);
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(250, 105, 20, 21));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(250, 135, 20, 21));
        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(250, 162, 20, 20));
        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(250, 189, 20, 31));
        radioButton_6 = new QRadioButton(groupBox);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(250, 225, 20, 21));
        radioButton_7 = new QRadioButton(groupBox);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(250, 250, 20, 31));
        radioButton_8 = new QRadioButton(groupBox);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setGeometry(QRect(250, 280, 16, 31));
        radioButton_9 = new QRadioButton(groupBox);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setGeometry(QRect(250, 320, 16, 23));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(-80, 70, 311, 31));
        pushButton->setCheckable(false);
        pushButton->setChecked(false);
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(-80, 100, 311, 25));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(-80, 130, 311, 21));
        pushButton_3->setFlat(true);
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(-80, 190, 311, 21));
        pushButton_4->setFlat(true);
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(-80, 154, 311, 31));
        pushButton_5->setFlat(true);
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(-80, 210, 311, 41));
        pushButton_6->setFlat(true);
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(-80, 240, 311, 41));
        pushButton_7->setFlat(true);
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(-80, 260, 311, 61));
        pushButton_8->setFlat(true);
        stackedWidget = new QStackedWidget(border);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 350, 751, 151));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 0, 121, 31));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 30, 67, 17));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 50, 161, 31));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 86, 67, 21));
        comboBox = new QComboBox(page);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(30, 110, 281, 31));
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(470, 20, 111, 31));
        comboBox_2 = new QComboBox(page);
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../DEBUG/imagic/sta_reduce.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_2->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../DEBUG/imagic/green_btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_2->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../DEBUG/imagic/reduce.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_2->addItem(icon3, QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(470, 50, 261, 31));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(470, 86, 67, 21));
        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(470, 110, 141, 21));
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(620, 110, 67, 17));
        pushButton_9 = new QPushButton(page);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(320, 110, 41, 31));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(border);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(border);
    } // setupUi

    void retranslateUi(QWidget *border)
    {
        border->setWindowTitle(QApplication::translate("border", "Form", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        label->setText(QApplication::translate("border", "<html><head/><body><p><span style=\" font-weight:600;\">\345\256\211\345\205\250\350\276\271\347\225\214</span></p></body></html>", nullptr));
        label_10->setText(QApplication::translate("border", "<html><head/><body><p><span style=\" font-weight:600;\">\345\267\245\345\205\267\350\276\271\347\225\214</span></p></body></html>", nullptr));
        radioButton->setText(QString());
        radioButton_2->setText(QString());
        radioButton_3->setText(QString());
        radioButton_4->setText(QString());
        radioButton_5->setText(QString());
        radioButton_6->setText(QString());
        radioButton_7->setText(QString());
        radioButton_8->setText(QString());
        radioButton_9->setText(QString());
        pushButton->setText(QApplication::translate("border", "Safety plane 0", nullptr));
        pushButton_2->setText(QApplication::translate("border", "Safety plane 1", nullptr));
        pushButton_3->setText(QApplication::translate("border", "Safety plane 2", nullptr));
        pushButton_4->setText(QApplication::translate("border", "Safety plane 4", nullptr));
        pushButton_5->setText(QApplication::translate("border", "Safety plane 3", nullptr));
        pushButton_6->setText(QApplication::translate("border", "Safety plane 5", nullptr));
        pushButton_7->setText(QApplication::translate("border", "Safety plane 6", nullptr));
        pushButton_8->setText(QApplication::translate("border", "Safety plane 7", nullptr));
        label_2->setText(QApplication::translate("border", "<html><head/><body><p><span style=\" font-weight:600;\">\345\256\211\345\205\250\346\235\277\345\261\236\346\200\247</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("border", "\345\220\215\347\247\260", nullptr));
        label_4->setText(QApplication::translate("border", "\345\244\215\345\210\266\347\211\271\346\200\247", nullptr));
        comboBox->setItemText(0, QApplication::translate("border", "wall", nullptr));

        label_5->setText(QApplication::translate("border", "\351\200\211\346\213\251\345\256\211\345\205\250\346\250\241\345\274\217", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("border", "\346\240\207\345\207\206\345\222\214\347\274\251\345\207\217", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("border", "\346\240\207\345\207\206", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("border", "\347\274\251\345\207\217", nullptr));

        label_6->setText(QApplication::translate("border", "\344\275\215\347\247\273", nullptr));
        lineEdit_2->setText(QApplication::translate("border", "0", nullptr));
        label_7->setText(QApplication::translate("border", "-1 mm", nullptr));
        pushButton_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class border: public Ui_border {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORDER_H
