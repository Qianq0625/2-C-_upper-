/********************************************************************************
** Form generated from reading UI file 'calibration.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATION_H
#define UI_CALIBRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calibration
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;

    void setupUi(QWidget *calibration)
    {
        if (calibration->objectName().isEmpty())
            calibration->setObjectName(QStringLiteral("calibration"));
        calibration->resize(1050, 760);
        label = new QLabel(calibration);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 290, 211, 17));
        pushButton = new QPushButton(calibration);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(340, 360, 161, 51));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_2 = new QPushButton(calibration);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 360, 161, 51));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_3 = new QPushButton(calibration);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 90, 81, 71));
        pushButton_4 = new QPushButton(calibration);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(880, 90, 81, 71));
        pushButton_5 = new QPushButton(calibration);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(90, 570, 81, 71));
        pushButton_6 = new QPushButton(calibration);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(880, 570, 81, 71));
        pushButton_10 = new QPushButton(calibration);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(990, 10, 41, 41));
        pushButton_10->setAutoFillBackground(true);
        QIcon icon;
        icon.addFile(QStringLiteral("../DEBUG/imagic/help-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon);
        pushButton_10->setIconSize(QSize(32, 32));
        pushButton_10->setFlat(true);

        retranslateUi(calibration);

        QMetaObject::connectSlotsByName(calibration);
    } // setupUi

    void retranslateUi(QWidget *calibration)
    {
        calibration->setWindowTitle(QApplication::translate("calibration", "Form", nullptr));
        label->setText(QApplication::translate("calibration", "\345\207\206\347\241\256\347\202\271\345\220\221\345\261\217\345\271\225\344\270\255\347\232\204\350\223\235\345\215\201\345\255\227\344\270\255\345\277\203\343\200\202", nullptr));
        pushButton->setText(QApplication::translate("calibration", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("calibration", "\345\217\226\346\266\210", nullptr));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class calibration: public Ui_calibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATION_H
