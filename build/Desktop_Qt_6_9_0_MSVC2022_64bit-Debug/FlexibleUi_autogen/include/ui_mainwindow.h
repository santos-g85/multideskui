/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QFrame *mainconnect;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *invitebtn;
    QPushButton *copyButton;
    QLabel *devicelabel;
    QPushButton *conectbtn;
    QLineEdit *codeInput;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(815, 499);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        logo = new QLabel(centralwidget);
        logo->setObjectName("logo");
        logo->setMinimumSize(QSize(250, 250));
        logo->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(logo, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        mainconnect = new QFrame(centralwidget);
        mainconnect->setObjectName("mainconnect");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainconnect->sizePolicy().hasHeightForWidth());
        mainconnect->setSizePolicy(sizePolicy);
        mainconnect->setMinimumSize(QSize(400, 250));
        mainconnect->setStyleSheet(QString::fromUtf8("border: none; border-radius: 0px;"));
        mainconnect->setFrameShape(QFrame::Shape::StyledPanel);
        mainconnect->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(mainconnect);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 26, 91, 20));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0); font: 10pt \"Segoe MDL2 Assets\";\n"
""));
        label_2 = new QLabel(mainconnect);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 50, 221, 16));
        label_2->setStyleSheet(QString::fromUtf8("color:black; font: 10pt \"Segoe MDL2 Assets\";\n"
""));
        label_3 = new QLabel(mainconnect);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 150, 129, 20));
        label_3->setStyleSheet(QString::fromUtf8("color:black; font: 10pt \"Segoe MDL2 Assets\";"));
        invitebtn = new QPushButton(mainconnect);
        invitebtn->setObjectName("invitebtn");
        invitebtn->setGeometry(QRect(260, 180, 101, 41));
        invitebtn->setStyleSheet(QString::fromUtf8("background-color: rgb(207, 0, 0); color: black; font: 10pt \"Segoe MDL2 Assets\"; border-radius:5px;"));
        copyButton = new QPushButton(mainconnect);
        copyButton->setObjectName("copyButton");
        copyButton->setGeometry(QRect(220, 170, 21, 31));
        devicelabel = new QLabel(mainconnect);
        devicelabel->setObjectName("devicelabel");
        devicelabel->setGeometry(QRect(10, 180, 191, 41));
        devicelabel->setStyleSheet(QString::fromUtf8("background-color: rgb(207, 0, 0); color: black; border-radius:5px; font: 9pt \"Segoe MDL2 Assets\";"));
        devicelabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        conectbtn = new QPushButton(mainconnect);
        conectbtn->setObjectName("conectbtn");
        conectbtn->setGeometry(QRect(300, 70, 81, 41));
        conectbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(207, 0, 0); font: 12pt \"Segoe MDL2 Assets\"; border-radius:5px;"));
        codeInput = new QLineEdit(mainconnect);
        codeInput->setObjectName("codeInput");
        codeInput->setGeometry(QRect(10, 70, 271, 41));
        codeInput->setStyleSheet(QString::fromUtf8("QLineEdit { background-color: lightgrey; border: 1px solid grey; font: 10pt \"Segoe UI\"; color: black; border-radius: 5px; } QLineEdit::placeholder { color: gray; }"));
        codeInput->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(mainconnect, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 815, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logo->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Quick Connect", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter a device code for remote access", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Your Device Code:", nullptr));
        invitebtn->setText(QCoreApplication::translate("MainWindow", "Invite", nullptr));
        copyButton->setText(QCoreApplication::translate("MainWindow", "\360\237\223\213", nullptr));
        devicelabel->setText(QCoreApplication::translate("MainWindow", "458-124-991", nullptr));
        conectbtn->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
