/********************************************************************************
** Form generated from reading UI file 'feature.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATURE_H
#define UI_FEATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_feature
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *feature)
    {
        if (feature->objectName().isEmpty())
            feature->setObjectName(QStringLiteral("feature"));
        feature->resize(777, 561);
        label = new QLabel(feature);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 61, 31));
        groupBox = new QGroupBox(feature);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 761, 431));
        label_2 = new QLabel(feature);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 490, 31, 17));
        pushButton = new QPushButton(feature);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 480, 201, 41));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_2 = new QPushButton(feature);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 480, 201, 41));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        pushButton_3 = new QPushButton(feature);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(570, 480, 201, 41));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));

        retranslateUi(feature);

        QMetaObject::connectSlotsByName(feature);
    } // setupUi

    void retranslateUi(QWidget *feature)
    {
        feature->setWindowTitle(QApplication::translate("feature", "Form", nullptr));
        label->setText(QApplication::translate("feature", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\347\211\271\345\276\201</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("feature", "\346\226\260\345\273\272", nullptr));
        pushButton->setText(QApplication::translate("feature", "\347\202\271", nullptr));
        pushButton_2->setText(QApplication::translate("feature", "\347\233\264\347\272\277", nullptr));
        pushButton_3->setText(QApplication::translate("feature", "\345\271\263\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class feature: public Ui_feature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEATURE_H
