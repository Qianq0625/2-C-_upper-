/********************************************************************************
** Form generated from reading UI file 'legitimacy.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEGITIMACY_H
#define UI_LEGITIMACY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_legitimacy
{
public:
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *legitimacy)
    {
        if (legitimacy->objectName().isEmpty())
            legitimacy->setObjectName(QStringLiteral("legitimacy"));
        legitimacy->resize(731, 221);
        label_7 = new QLabel(legitimacy);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 20, 111, 31));
        label_8 = new QLabel(legitimacy);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 80, 271, 31));
        label_9 = new QLabel(legitimacy);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(80, 110, 301, 31));
        label = new QLabel(legitimacy);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 80, 31, 31));
        label->setLineWidth(0);
        label->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/black_point.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(legitimacy);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 110, 31, 31));
        label_2->setLineWidth(0);
        label_2->setPixmap(QPixmap(QString::fromUtf8("../DEBUG/imagic/black_point.png")));
        label_2->setScaledContents(true);

        retranslateUi(legitimacy);

        QMetaObject::connectSlotsByName(legitimacy);
    } // setupUi

    void retranslateUi(QWidget *legitimacy)
    {
        legitimacy->setWindowTitle(QApplication::translate("legitimacy", "Form", nullptr));
        label_7->setText(QApplication::translate("legitimacy", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\263\225\345\276\213\351\200\232\345\221\212</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("legitimacy", "<html><head/><body><p>\346\234\254\344\272\247\345\223\201\345\214\205\345\220\253Linux\345\206\205\346\240\270\343\200\202</p></body></html>", nullptr));
        label_9->setText(QApplication::translate("legitimacy", "\346\234\254\344\272\247\345\223\201\345\214\205\345\220\253Indiana University \345\274\200\345\217\221\347\232\204\350\275\257\344\273\266\343\200\202", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class legitimacy: public Ui_legitimacy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEGITIMACY_H
