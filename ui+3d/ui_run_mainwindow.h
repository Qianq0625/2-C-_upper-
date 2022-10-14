/********************************************************************************
** Form generated from reading UI file 'run_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUN_MAINWINDOW_H
#define UI_RUN_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_run_MainWindow
{
public:
    QAction *action_2;
    QAction *action_3;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu111;
    QMenu *menu11;
    QMenu *menu111_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *run_MainWindow)
    {
        if (run_MainWindow->objectName().isEmpty())
            run_MainWindow->setObjectName(QStringLiteral("run_MainWindow"));
        run_MainWindow->resize(963, 777);
        run_MainWindow->setContextMenuPolicy(Qt::ActionsContextMenu);
        run_MainWindow->setAcceptDrops(false);
        run_MainWindow->setWindowOpacity(1);
        run_MainWindow->setAutoFillBackground(false);
        run_MainWindow->setIconSize(QSize(24, 24));
        run_MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        run_MainWindow->setAnimated(true);
        run_MainWindow->setTabShape(QTabWidget::Rounded);
        action_2 = new QAction(run_MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        QIcon icon;
        icon.addFile(QStringLiteral("../DEBUG/imagic/load.png"), QSize(), QIcon::Normal, QIcon::On);
        action_2->setIcon(icon);
        action_2->setIconVisibleInMenu(true);
        action_3 = new QAction(run_MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../DEBUG/imagic/exit.png"), QSize(), QIcon::Normal, QIcon::On);
        action_3->setIcon(icon1);
        centralwidget = new QWidget(run_MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        run_MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(run_MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 963, 28));
        menubar->setAcceptDrops(true);
        menubar->setLayoutDirection(Qt::LeftToRight);
        menubar->setAutoFillBackground(false);
        menubar->setInputMethodHints(Qt::ImhNone);
        menubar->setDefaultUp(true);
        menubar->setNativeMenuBar(false);
        menu111 = new QMenu(menubar);
        menu111->setObjectName(QStringLiteral("menu111"));
        menu11 = new QMenu(menubar);
        menu11->setObjectName(QStringLiteral("menu11"));
        menu11->setEnabled(false);
        menu11->setLayoutDirection(Qt::LeftToRight);
        menu11->setTearOffEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../DEBUG/imagic/\347\212\266\346\200\201\347\201\257.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu11->setIcon(icon2);
        menu111_2 = new QMenu(menubar);
        menu111_2->setObjectName(QStringLiteral("menu111_2"));
        run_MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(run_MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statusbar->setSizeGripEnabled(true);
        run_MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu11->menuAction());
        menubar->addAction(menu111->menuAction());
        menubar->addAction(menu111_2->menuAction());
        menu111->addAction(action_2);
        menu111->addAction(action_3);

        retranslateUi(run_MainWindow);

        QMetaObject::connectSlotsByName(run_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *run_MainWindow)
    {
        run_MainWindow->setWindowTitle(QApplication::translate("run_MainWindow", "MainWindow", nullptr));
        action_2->setText(QApplication::translate("run_MainWindow", "\345\212\240\350\275\275", nullptr));
        action_3->setText(QApplication::translate("run_MainWindow", "\351\200\200\345\207\272", nullptr));
        menu111->setTitle(QApplication::translate("run_MainWindow", "\346\226\207\344\273\266", nullptr));
        menu11->setTitle(QApplication::translate("run_MainWindow", "11", nullptr));
        menu111_2->setTitle(QApplication::translate("run_MainWindow", "111", nullptr));
    } // retranslateUi

};

namespace Ui {
    class run_MainWindow: public Ui_run_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUN_MAINWINDOW_H
