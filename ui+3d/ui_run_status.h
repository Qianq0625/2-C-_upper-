/********************************************************************************
** Form generated from reading UI file 'run_status.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUN_STATUS_H
#define UI_RUN_STATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_run_status
{
public:
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *page_2;

    void setupUi(QWidget *run_status)
    {
        if (run_status->objectName().isEmpty())
            run_status->setObjectName(QStringLiteral("run_status"));
        run_status->resize(1051, 641);
        groupBox = new QGroupBox(run_status);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, -20, 1051, 571));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 80, 301, 201));
        label_3->setScaledContents(false);
        label_3->setWordWrap(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(360, 20, 371, 201));
        label_2->setScaledContents(false);
        label_2->setWordWrap(true);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(590, 250, 451, 311));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(590, 230, 67, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 300, 91, 41));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 370, 91, 41));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 440, 91, 41));
        stackedWidget = new QStackedWidget(run_status);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 550, 1031, 81));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 20, 41, 41));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 20, 41, 41));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 20, 41, 41));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(480, 20, 41, 41));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(run_status);

        QMetaObject::connectSlotsByName(run_status);
    } // setupUi

    void retranslateUi(QWidget *run_status)
    {
        run_status->setWindowTitle(QApplication::translate("run_status", "Form", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QApplication::translate("run_status", "<html><head/><body><p><span style=\" font-size:48pt; font-weight:600;\">ROBOTS</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("run_status", "<html><head/><body><p><span style=\" font-size:48pt; font-weight:600;\">UNIVERSAL</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("run_status", "\345\217\230\351\207\217", nullptr));
        label_4->setText(QApplication::translate("run_status", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\347\250\213\345\272\217\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("run_status", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\347\212\266\346\200\201\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("run_status", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\227\266\351\227\264\357\274\232</span></p></body></html>", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class run_status: public Ui_run_status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUN_STATUS_H
