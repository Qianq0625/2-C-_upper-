/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome
{
public:
    QFrame *line;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_2;

    void setupUi(QWidget *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName(QStringLiteral("welcome"));
        welcome->resize(1050, 760);
        line = new QFrame(welcome);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 50, 1051, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(welcome);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(670, 0, 301, 71));
        pushButton = new QPushButton(welcome);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 460, 81, 31));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label_4 = new QLabel(welcome);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(830, 100, 81, 41));
        pushButton_2 = new QPushButton(welcome);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(770, 170, 201, 41));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_3 = new QPushButton(welcome);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(770, 280, 201, 41));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_4 = new QPushButton(welcome);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(770, 390, 201, 41));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_5 = new QPushButton(welcome);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(770, 500, 201, 41));
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_6 = new QPushButton(welcome);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(1000, 0, 51, 41));
        QIcon icon;
        icon.addFile(QStringLiteral("DEBUG/imagic/help-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon);
        pushButton_6->setIconSize(QSize(32, 32));
        pushButton_6->setFlat(true);
        label_2 = new QLabel(welcome);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 120, 341, 271));

        retranslateUi(welcome);

        QMetaObject::connectSlotsByName(welcome);
    } // setupUi

    void retranslateUi(QWidget *welcome)
    {
        welcome->setWindowTitle(QApplication::translate("welcome", "IIMT-CR", nullptr));
        label->setText(QApplication::translate("welcome", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">PolyScope\346\234\272\345\231\250\344\272\272\347\224\250\346\210\267\347\225\214\351\235\242</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("welcome", "\345\205\263\344\272\216", nullptr));
        label_4->setText(QApplication::translate("welcome", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\350\257\267\351\200\211\346\213\251</span></p></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("welcome", "\350\277\220\350\241\214\347\250\213\345\272\217", nullptr));
        pushButton_3->setText(QApplication::translate("welcome", "\344\270\272\346\234\272\345\231\250\344\272\272\347\274\226\347\250\213", nullptr));
        pushButton_4->setText(QApplication::translate("welcome", "\350\256\276\347\275\256\346\234\272\345\231\250\344\272\272", nullptr));
        pushButton_5->setText(QApplication::translate("welcome", "\345\205\263\351\227\255\346\234\272\345\231\250\344\272\272", nullptr));
        pushButton_6->setText(QString());
        label_2->setText(QApplication::translate("welcome", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
