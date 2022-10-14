/********************************************************************************
** Form generated from reading UI file 'robot_main_move.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOT_MAIN_MOVE_H
#define UI_ROBOT_MAIN_MOVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_robot_main_move
{
public:
    QGroupBox *groupBox_3;
    QGroupBox *groupBox;
    QPushButton *Z_DEC;
    QPushButton *Z_ADD;
    QPushButton *Y_DEC;
    QPushButton *Y_ADD;
    QPushButton *X_ADD;
    QPushButton *X_DEC;
    QLabel *label_2;
    QPushButton *RX_ADD;
    QPushButton *RZ_Add;
    QPushButton *RZ_DEC;
    QPushButton *RY_ADD;
    QPushButton *RY_DEC;
    QPushButton *RX_DEC;
    QGroupBox *groupBox_2;
    QComboBox *comboBox;
    QLabel *label_31;
    QLineEdit *user_CurPoseXLEdit;
    QLabel *label_19;
    QLabel *label_18;
    QLineEdit *user_CurPoseYLEdit;
    QLabel *label_32;
    QLabel *label_30;
    QLineEdit *user_curPoseZLEdit;
    QLabel *label_17;
    QLabel *label_20;
    QLineEdit *user_curPoseRyLEdit;
    QLineEdit *user_curPoseRxLEdit;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *user_curPoseRzLEdit;
    QGroupBox *groupBox_4;
    QLineEdit *user_Joint1LEdit;
    QPushButton *user_Joint1IncBtn;
    QPushButton *user_Joint2IncBtn;
    QLineEdit *user_Joint2LEdit;
    QPushButton *user_Joint2DecBtn;
    QPushButton *user_Joint3IncBtn;
    QPushButton *user_Joint3DecBtn;
    QLineEdit *user_Joint3LEdit;
    QPushButton *user_Joint4IncBtn;
    QLineEdit *user_Joint4LEdit;
    QPushButton *user_Joint4DecBtn;
    QPushButton *user_Joint5IncBtn;
    QPushButton *user_Joint5DecBtn;
    QLineEdit *user_Joint5LEdit;
    QPushButton *user_Joint6IncBtn;
    QLineEdit *user_Joint6LEdit;
    QPushButton *user_Joint6DecBtn;
    QLabel *label;
    QPushButton *freeDragBtn;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_23;
    QPushButton *user_Joint1DecBtn;
    QPushButton *logButton_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QSlider *speed_horizontal;
    QPushButton *confirmBtn;
    QLabel *speed_label;
    QLabel *label_3;
    QPushButton *cancelBtn;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *page_2;

    void setupUi(QWidget *robot_main_move)
    {
        if (robot_main_move->objectName().isEmpty())
            robot_main_move->setObjectName(QStringLiteral("robot_main_move"));
        robot_main_move->resize(1050, 673);
        groupBox_3 = new QGroupBox(robot_main_move);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(310, 0, 501, 291));
        groupBox = new QGroupBox(robot_main_move);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 291, 591));
        groupBox->setAutoFillBackground(false);
        Z_DEC = new QPushButton(groupBox);
        Z_DEC->setObjectName(QStringLiteral("Z_DEC"));
        Z_DEC->setGeometry(QRect(10, 40, 71, 71));
        Z_DEC->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        Z_DEC->setIconSize(QSize(32, 32));
        Z_ADD = new QPushButton(groupBox);
        Z_ADD->setObjectName(QStringLiteral("Z_ADD"));
        Z_ADD->setGeometry(QRect(210, 40, 71, 71));
        Z_ADD->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        Z_ADD->setIconSize(QSize(32, 32));
        Y_DEC = new QPushButton(groupBox);
        Y_DEC->setObjectName(QStringLiteral("Y_DEC"));
        Y_DEC->setGeometry(QRect(30, 150, 71, 71));
        Y_DEC->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        Y_DEC->setIconSize(QSize(32, 32));
        Y_ADD = new QPushButton(groupBox);
        Y_ADD->setObjectName(QStringLiteral("Y_ADD"));
        Y_ADD->setGeometry(QRect(170, 150, 71, 71));
        Y_ADD->setStyleSheet(QStringLiteral("color: rgb(204, 0, 0);"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../iimt_cr_pro-master/image/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        Y_ADD->setIcon(icon);
        Y_ADD->setIconSize(QSize(32, 32));
        X_ADD = new QPushButton(groupBox);
        X_ADD->setObjectName(QStringLiteral("X_ADD"));
        X_ADD->setGeometry(QRect(100, 80, 71, 71));
        X_ADD->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        X_ADD->setIconSize(QSize(32, 32));
        X_DEC = new QPushButton(groupBox);
        X_DEC->setObjectName(QStringLiteral("X_DEC"));
        X_DEC->setGeometry(QRect(100, 230, 71, 71));
        X_DEC->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        X_DEC->setIconSize(QSize(32, 32));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 71, 20));
        RX_ADD = new QPushButton(groupBox);
        RX_ADD->setObjectName(QStringLiteral("RX_ADD"));
        RX_ADD->setGeometry(QRect(100, 340, 71, 71));
        RX_ADD->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        RX_ADD->setIconSize(QSize(32, 32));
        RZ_Add = new QPushButton(groupBox);
        RZ_Add->setObjectName(QStringLiteral("RZ_Add"));
        RZ_Add->setGeometry(QRect(210, 280, 71, 71));
        RZ_Add->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        RZ_Add->setIconSize(QSize(32, 32));
        RZ_DEC = new QPushButton(groupBox);
        RZ_DEC->setObjectName(QStringLiteral("RZ_DEC"));
        RZ_DEC->setGeometry(QRect(10, 280, 71, 71));
        RZ_DEC->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        RZ_DEC->setIconSize(QSize(32, 32));
        RY_ADD = new QPushButton(groupBox);
        RY_ADD->setObjectName(QStringLiteral("RY_ADD"));
        RY_ADD->setGeometry(QRect(160, 420, 71, 71));
        RY_ADD->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        RY_ADD->setIconSize(QSize(32, 32));
        RY_DEC = new QPushButton(groupBox);
        RY_DEC->setObjectName(QStringLiteral("RY_DEC"));
        RY_DEC->setGeometry(QRect(30, 420, 71, 71));
        RY_DEC->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        RY_DEC->setIconSize(QSize(32, 32));
        RX_DEC = new QPushButton(groupBox);
        RX_DEC->setObjectName(QStringLiteral("RX_DEC"));
        RX_DEC->setGeometry(QRect(100, 500, 71, 71));
        RX_DEC->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        RX_DEC->setIconSize(QSize(50, 50));
        groupBox_2 = new QGroupBox(robot_main_move);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(820, 0, 221, 291));
        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(40, 50, 141, 25));
        comboBox->setMinimumContentsLength(0);
        comboBox->setIconSize(QSize(16, 16));
        label_31 = new QLabel(groupBox_2);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(160, 100, 31, 23));
        QFont font;
        font.setPointSize(11);
        label_31->setFont(font);
        label_31->setAlignment(Qt::AlignCenter);
        user_CurPoseXLEdit = new QLineEdit(groupBox_2);
        user_CurPoseXLEdit->setObjectName(QStringLiteral("user_CurPoseXLEdit"));
        user_CurPoseXLEdit->setGeometry(QRect(60, 100, 100, 23));
        user_CurPoseXLEdit->setMinimumSize(QSize(100, 20));
        user_CurPoseXLEdit->setAlignment(Qt::AlignCenter);
        user_CurPoseXLEdit->setReadOnly(true);
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(40, 160, 16, 24));
        label_19->setFont(font);
        label_19->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(40, 130, 20, 23));
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignCenter);
        user_CurPoseYLEdit = new QLineEdit(groupBox_2);
        user_CurPoseYLEdit->setObjectName(QStringLiteral("user_CurPoseYLEdit"));
        user_CurPoseYLEdit->setGeometry(QRect(60, 130, 100, 23));
        user_CurPoseYLEdit->setMinimumSize(QSize(100, 20));
        user_CurPoseYLEdit->setAlignment(Qt::AlignCenter);
        user_CurPoseYLEdit->setReadOnly(true);
        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(160, 160, 31, 24));
        label_32->setFont(font);
        label_32->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(groupBox_2);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(160, 130, 31, 23));
        label_30->setFont(font);
        label_30->setAlignment(Qt::AlignCenter);
        user_curPoseZLEdit = new QLineEdit(groupBox_2);
        user_curPoseZLEdit->setObjectName(QStringLiteral("user_curPoseZLEdit"));
        user_curPoseZLEdit->setGeometry(QRect(60, 160, 100, 24));
        user_curPoseZLEdit->setMinimumSize(QSize(100, 20));
        user_curPoseZLEdit->setAlignment(Qt::AlignCenter);
        user_curPoseZLEdit->setReadOnly(true);
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(40, 100, 21, 23));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(40, 190, 21, 23));
        label_20->setFont(font);
        label_20->setAlignment(Qt::AlignCenter);
        user_curPoseRyLEdit = new QLineEdit(groupBox_2);
        user_curPoseRyLEdit->setObjectName(QStringLiteral("user_curPoseRyLEdit"));
        user_curPoseRyLEdit->setGeometry(QRect(60, 220, 100, 23));
        user_curPoseRyLEdit->setMinimumSize(QSize(100, 20));
        user_curPoseRyLEdit->setAlignment(Qt::AlignCenter);
        user_curPoseRyLEdit->setReadOnly(true);
        user_curPoseRxLEdit = new QLineEdit(groupBox_2);
        user_curPoseRxLEdit->setObjectName(QStringLiteral("user_curPoseRxLEdit"));
        user_curPoseRxLEdit->setGeometry(QRect(60, 190, 100, 23));
        user_curPoseRxLEdit->setMinimumSize(QSize(100, 20));
        user_curPoseRxLEdit->setAlignment(Qt::AlignCenter);
        user_curPoseRxLEdit->setReadOnly(true);
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(40, 220, 20, 23));
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(40, 250, 20, 23));
        label_22->setFont(font);
        label_22->setAlignment(Qt::AlignCenter);
        user_curPoseRzLEdit = new QLineEdit(groupBox_2);
        user_curPoseRzLEdit->setObjectName(QStringLiteral("user_curPoseRzLEdit"));
        user_curPoseRzLEdit->setGeometry(QRect(60, 250, 100, 23));
        user_curPoseRzLEdit->setMinimumSize(QSize(100, 20));
        user_curPoseRzLEdit->setAlignment(Qt::AlignCenter);
        user_curPoseRzLEdit->setReadOnly(true);
        groupBox_4 = new QGroupBox(robot_main_move);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(300, 280, 741, 311));
        user_Joint1LEdit = new QLineEdit(groupBox_4);
        user_Joint1LEdit->setObjectName(QStringLiteral("user_Joint1LEdit"));
        user_Joint1LEdit->setGeometry(QRect(530, 70, 71, 31));
        user_Joint1LEdit->setAlignment(Qt::AlignCenter);
        user_Joint1IncBtn = new QPushButton(groupBox_4);
        user_Joint1IncBtn->setObjectName(QStringLiteral("user_Joint1IncBtn"));
        user_Joint1IncBtn->setGeometry(QRect(450, 70, 61, 31));
        user_Joint1IncBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        user_Joint2IncBtn = new QPushButton(groupBox_4);
        user_Joint2IncBtn->setObjectName(QStringLiteral("user_Joint2IncBtn"));
        user_Joint2IncBtn->setGeometry(QRect(450, 110, 61, 31));
        user_Joint2IncBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        user_Joint2LEdit = new QLineEdit(groupBox_4);
        user_Joint2LEdit->setObjectName(QStringLiteral("user_Joint2LEdit"));
        user_Joint2LEdit->setGeometry(QRect(530, 110, 71, 31));
        user_Joint2LEdit->setAlignment(Qt::AlignCenter);
        user_Joint2DecBtn = new QPushButton(groupBox_4);
        user_Joint2DecBtn->setObjectName(QStringLiteral("user_Joint2DecBtn"));
        user_Joint2DecBtn->setGeometry(QRect(200, 110, 61, 31));
        user_Joint2DecBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        user_Joint3IncBtn = new QPushButton(groupBox_4);
        user_Joint3IncBtn->setObjectName(QStringLiteral("user_Joint3IncBtn"));
        user_Joint3IncBtn->setGeometry(QRect(450, 150, 61, 31));
        user_Joint3IncBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        user_Joint3DecBtn = new QPushButton(groupBox_4);
        user_Joint3DecBtn->setObjectName(QStringLiteral("user_Joint3DecBtn"));
        user_Joint3DecBtn->setGeometry(QRect(200, 150, 61, 31));
        user_Joint3DecBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        user_Joint3LEdit = new QLineEdit(groupBox_4);
        user_Joint3LEdit->setObjectName(QStringLiteral("user_Joint3LEdit"));
        user_Joint3LEdit->setGeometry(QRect(530, 150, 71, 31));
        user_Joint3LEdit->setAlignment(Qt::AlignCenter);
        user_Joint4IncBtn = new QPushButton(groupBox_4);
        user_Joint4IncBtn->setObjectName(QStringLiteral("user_Joint4IncBtn"));
        user_Joint4IncBtn->setGeometry(QRect(450, 190, 61, 31));
        user_Joint4IncBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        user_Joint4LEdit = new QLineEdit(groupBox_4);
        user_Joint4LEdit->setObjectName(QStringLiteral("user_Joint4LEdit"));
        user_Joint4LEdit->setGeometry(QRect(530, 190, 71, 31));
        user_Joint4LEdit->setAlignment(Qt::AlignCenter);
        user_Joint4DecBtn = new QPushButton(groupBox_4);
        user_Joint4DecBtn->setObjectName(QStringLiteral("user_Joint4DecBtn"));
        user_Joint4DecBtn->setGeometry(QRect(200, 190, 61, 31));
        user_Joint4DecBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        user_Joint5IncBtn = new QPushButton(groupBox_4);
        user_Joint5IncBtn->setObjectName(QStringLiteral("user_Joint5IncBtn"));
        user_Joint5IncBtn->setGeometry(QRect(450, 230, 61, 31));
        user_Joint5IncBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        user_Joint5DecBtn = new QPushButton(groupBox_4);
        user_Joint5DecBtn->setObjectName(QStringLiteral("user_Joint5DecBtn"));
        user_Joint5DecBtn->setGeometry(QRect(200, 230, 61, 31));
        user_Joint5DecBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        user_Joint5LEdit = new QLineEdit(groupBox_4);
        user_Joint5LEdit->setObjectName(QStringLiteral("user_Joint5LEdit"));
        user_Joint5LEdit->setGeometry(QRect(530, 230, 71, 31));
        user_Joint5LEdit->setAlignment(Qt::AlignCenter);
        user_Joint6IncBtn = new QPushButton(groupBox_4);
        user_Joint6IncBtn->setObjectName(QStringLiteral("user_Joint6IncBtn"));
        user_Joint6IncBtn->setGeometry(QRect(450, 270, 61, 31));
        user_Joint6IncBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        user_Joint6LEdit = new QLineEdit(groupBox_4);
        user_Joint6LEdit->setObjectName(QStringLiteral("user_Joint6LEdit"));
        user_Joint6LEdit->setGeometry(QRect(530, 270, 71, 31));
        user_Joint6LEdit->setAlignment(Qt::AlignCenter);
        user_Joint6DecBtn = new QPushButton(groupBox_4);
        user_Joint6DecBtn->setObjectName(QStringLiteral("user_Joint6DecBtn"));
        user_Joint6DecBtn->setGeometry(QRect(200, 270, 61, 31));
        user_Joint6DecBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 71, 20));
        freeDragBtn = new QPushButton(groupBox_4);
        freeDragBtn->setObjectName(QStringLiteral("freeDragBtn"));
        freeDragBtn->setGeometry(QRect(20, 40, 71, 261));
        freeDragBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        freeDragBtn->setIconSize(QSize(25, 25));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 110, 41, 31));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(140, 150, 41, 31));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(140, 69, 41, 31));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(140, 190, 41, 31));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(140, 230, 41, 21));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(140, 270, 41, 21));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(610, 100, 16, 19));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(610, 180, 16, 20));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(610, 220, 16, 20));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(610, 260, 16, 20));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(610, 60, 20, 21));
        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(610, 140, 16, 20));
        user_Joint1DecBtn = new QPushButton(groupBox_4);
        user_Joint1DecBtn->setObjectName(QStringLiteral("user_Joint1DecBtn"));
        user_Joint1DecBtn->setGeometry(QRect(200, 70, 61, 31));
        user_Joint1DecBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        logButton_2 = new QPushButton(groupBox_4);
        logButton_2->setObjectName(QStringLiteral("logButton_2"));
        logButton_2->setGeometry(QRect(520, 30, 221, 31));
        logButton_2->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        stackedWidget = new QStackedWidget(robot_main_move);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 590, 1031, 81));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        speed_horizontal = new QSlider(page);
        speed_horizontal->setObjectName(QStringLiteral("speed_horizontal"));
        speed_horizontal->setGeometry(QRect(390, 42, 181, 21));
        speed_horizontal->setValue(50);
        speed_horizontal->setOrientation(Qt::Horizontal);
        confirmBtn = new QPushButton(page);
        confirmBtn->setObjectName(QStringLiteral("confirmBtn"));
        confirmBtn->setGeometry(QRect(920, 32, 101, 41));
        confirmBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../iimt_cr_pro-master/image/yes.png"), QSize(), QIcon::Normal, QIcon::Off);
        confirmBtn->setIcon(icon1);
        confirmBtn->setIconSize(QSize(20, 20));
        speed_label = new QLabel(page);
        speed_label->setObjectName(QStringLiteral("speed_label"));
        speed_label->setGeometry(QRect(570, 43, 21, 20));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(590, 42, 21, 20));
        cancelBtn = new QPushButton(page);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(800, 32, 101, 41));
        cancelBtn->setStyleSheet(QStringLiteral("background-color: rgb(173, 197, 232);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../iimt_cr_pro-master/image/cac.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelBtn->setIcon(icon2);
        cancelBtn->setIconSize(QSize(20, 20));
        radioButton = new QRadioButton(page);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 22, 112, 31));
        radioButton_2 = new QRadioButton(page);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 50, 112, 23));
        radioButton_2->setChecked(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(robot_main_move);

        QMetaObject::connectSlotsByName(robot_main_move);
    } // setupUi

    void retranslateUi(QWidget *robot_main_move)
    {
        robot_main_move->setWindowTitle(QApplication::translate("robot_main_move", "Form", nullptr));
        groupBox_3->setTitle(QApplication::translate("robot_main_move", "\346\234\272\345\231\250\344\272\272", nullptr));
        groupBox->setTitle(QString());
        Z_DEC->setText(QString());
        Z_ADD->setText(QString());
        Y_DEC->setText(QString());
        Y_ADD->setText(QString());
        X_ADD->setText(QString());
        X_DEC->setText(QString());
        label_2->setText(QApplication::translate("robot_main_move", "\347\247\273\345\212\250\345\267\245\345\205\267", nullptr));
        RX_ADD->setText(QString());
        RZ_Add->setText(QString());
        RZ_DEC->setText(QString());
        RY_ADD->setText(QString());
        RY_DEC->setText(QString());
        RX_DEC->setText(QString());
        groupBox_2->setTitle(QApplication::translate("robot_main_move", "\347\211\271\345\276\201", nullptr));
        comboBox->setItemText(0, QApplication::translate("robot_main_move", "      \345\237\272\345\272\247\346\240\207\347\263\273", nullptr));
        comboBox->setItemText(1, QApplication::translate("robot_main_move", "      \345\267\245\345\205\267\346\234\253\347\253\257", nullptr));
        comboBox->setItemText(2, QApplication::translate("robot_main_move", "      \345\267\245\345\205\267\345\235\220\346\240\207", nullptr));

        label_31->setText(QApplication::translate("robot_main_move", "mm", nullptr));
        label_19->setText(QApplication::translate("robot_main_move", "Z", nullptr));
        label_18->setText(QApplication::translate("robot_main_move", "Y", nullptr));
        label_32->setText(QApplication::translate("robot_main_move", "mm", nullptr));
        label_30->setText(QApplication::translate("robot_main_move", "mm", nullptr));
        label_17->setText(QApplication::translate("robot_main_move", "X", nullptr));
        label_20->setText(QApplication::translate("robot_main_move", "Rx", nullptr));
        label_21->setText(QApplication::translate("robot_main_move", "Ry", nullptr));
        label_22->setText(QApplication::translate("robot_main_move", "Rz", nullptr));
        groupBox_4->setTitle(QString());
        user_Joint1LEdit->setText(QString());
        user_Joint1IncBtn->setText(QString());
        user_Joint2IncBtn->setText(QString());
        user_Joint2DecBtn->setText(QString());
        user_Joint3IncBtn->setText(QString());
        user_Joint3DecBtn->setText(QString());
        user_Joint4IncBtn->setText(QString());
        user_Joint4DecBtn->setText(QString());
        user_Joint5IncBtn->setText(QString());
        user_Joint5DecBtn->setText(QString());
        user_Joint6IncBtn->setText(QString());
        user_Joint6DecBtn->setText(QString());
        label->setText(QApplication::translate("robot_main_move", "\347\247\273\345\212\250\345\205\263\350\212\202", nullptr));
        freeDragBtn->setText(QApplication::translate("robot_main_move", "\346\213\226\n"
"\345\212\250\n"
"\347\244\272\n"
"\346\225\231", nullptr));
        label_6->setText(QApplication::translate("robot_main_move", "\350\202\251\351\203\250", nullptr));
        label_7->setText(QApplication::translate("robot_main_move", "\350\202\230\351\203\250", nullptr));
        label_8->setText(QApplication::translate("robot_main_move", "\346\234\272\345\272\247", nullptr));
        label_9->setText(QApplication::translate("robot_main_move", "\346\211\213\350\205\2251", nullptr));
        label_10->setText(QApplication::translate("robot_main_move", "\346\211\213\350\205\2252", nullptr));
        label_11->setText(QApplication::translate("robot_main_move", "\346\211\213\350\205\2253", nullptr));
        label_12->setText(QApplication::translate("robot_main_move", "\302\260", nullptr));
        label_13->setText(QApplication::translate("robot_main_move", "\302\260", nullptr));
        label_14->setText(QApplication::translate("robot_main_move", "\302\260", nullptr));
        label_15->setText(QApplication::translate("robot_main_move", "\302\260", nullptr));
        label_16->setText(QApplication::translate("robot_main_move", "\302\260", nullptr));
        label_23->setText(QApplication::translate("robot_main_move", "\302\260", nullptr));
        user_Joint1DecBtn->setText(QString());
        logButton_2->setText(QApplication::translate("robot_main_move", "\345\247\277\346\200\201\345\244\215\344\275\215", nullptr));
        confirmBtn->setText(QApplication::translate("robot_main_move", "\347\241\256\345\256\232", nullptr));
        speed_label->setText(QApplication::translate("robot_main_move", "50", nullptr));
        label_3->setText(QApplication::translate("robot_main_move", "%", nullptr));
        cancelBtn->setText(QApplication::translate("robot_main_move", "\345\217\226\346\266\210", nullptr));
        radioButton->setText(QApplication::translate("robot_main_move", "\346\250\241\346\213\237", nullptr));
        radioButton_2->setText(QApplication::translate("robot_main_move", "\347\234\237\345\256\236\346\234\272\345\231\250\344\272\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class robot_main_move: public Ui_robot_main_move {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOT_MAIN_MOVE_H
