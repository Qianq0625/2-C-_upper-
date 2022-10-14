/********************************************************************************
** Form generated from reading UI file 'form_border_blank.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_BORDER_BLANK_H
#define UI_FORM_BORDER_BLANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form_border_blank
{
public:
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;

    void setupUi(QWidget *form_border_blank)
    {
        if (form_border_blank->objectName().isEmpty())
            form_border_blank->setObjectName(QStringLiteral("form_border_blank"));
        form_border_blank->resize(1050, 91);
        pushButton_8 = new QPushButton(form_border_blank);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(520, 20, 41, 41));
        QIcon icon;
        icon.addFile(QStringLiteral("../DEBUG/imagic/speed.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon);
        pushButton_8->setIconSize(QSize(32, 32));
        pushButton_6 = new QPushButton(form_border_blank);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(440, 20, 41, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../DEBUG/imagic/left-speed.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(32, 32));
        pushButton_5 = new QPushButton(form_border_blank);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(480, 20, 41, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../DEBUG/imagic/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(32, 32));
        pushButton_7 = new QPushButton(form_border_blank);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(570, 20, 41, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../DEBUG/imagic/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon3);
        pushButton_7->setIconSize(QSize(24, 24));

        retranslateUi(form_border_blank);

        QMetaObject::connectSlotsByName(form_border_blank);
    } // setupUi

    void retranslateUi(QWidget *form_border_blank)
    {
        form_border_blank->setWindowTitle(QApplication::translate("form_border_blank", "Form", nullptr));
        pushButton_8->setText(QString());
        pushButton_6->setText(QString());
        pushButton_5->setText(QString());
        pushButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class form_border_blank: public Ui_form_border_blank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_BORDER_BLANK_H
