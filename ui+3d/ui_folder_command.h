/********************************************************************************
** Form generated from reading UI file 'folder_command.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLDER_COMMAND_H
#define UI_FOLDER_COMMAND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_folder_command
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;

    void setupUi(QWidget *folder_command)
    {
        if (folder_command->objectName().isEmpty())
            folder_command->setObjectName(QStringLiteral("folder_command"));
        folder_command->resize(821, 531);
        label = new QLabel(folder_command);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 81, 31));
        label_2 = new QLabel(folder_command);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 191, 17));
        label_3 = new QLabel(folder_command);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 221, 17));
        lineEdit = new QLineEdit(folder_command);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 140, 781, 31));
        lineEdit->setAlignment(Qt::AlignCenter);
        checkBox = new QCheckBox(folder_command);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 480, 151, 23));

        retranslateUi(folder_command);

        QMetaObject::connectSlotsByName(folder_command);
    } // setupUi

    void retranslateUi(QWidget *folder_command)
    {
        folder_command->setWindowTitle(QApplication::translate("folder_command", "Form", nullptr));
        label->setText(QApplication::translate("folder_command", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\226\207\344\273\266\345\244\271</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("folder_command", "\346\226\207\344\273\266\345\244\271\345\260\261\346\230\257\347\250\213\345\272\217\346\226\207\344\273\266\347\232\204\351\233\206\345\220\210\343\200\202", nullptr));
        label_3->setText(QApplication::translate("folder_command", "\350\257\267\350\276\223\345\205\245\350\246\201\345\234\250\347\250\213\345\272\217\346\240\221\344\270\255\346\230\276\347\244\272\347\232\204\346\226\207\346\234\254\357\274\232", nullptr));
        lineEdit->setText(QApplication::translate("folder_command", "\346\226\207\344\273\266\345\244\271", nullptr));
        checkBox->setText(QApplication::translate("folder_command", "\351\232\220\350\227\217\346\226\207\344\273\266\345\244\271\347\250\213\345\272\217\346\240\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class folder_command: public Ui_folder_command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLDER_COMMAND_H
