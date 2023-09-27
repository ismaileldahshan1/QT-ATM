/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *login;
    QLineEdit *name;
    QLineEdit *AccountNumber;
    QLabel *labelName;
    QLabel *label_Accountnum;
    QLabel *label_enterinfo;
    QMenuBar *menubar;
    QMenu *menuPlease_Enter_Your_Information;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        login = new QPushButton(centralwidget);
        login->setObjectName("login");
        login->setGeometry(QRect(450, 210, 100, 32));
        name = new QLineEdit(centralwidget);
        name->setObjectName("name");
        name->setGeometry(QRect(180, 90, 113, 21));
        AccountNumber = new QLineEdit(centralwidget);
        AccountNumber->setObjectName("AccountNumber");
        AccountNumber->setGeometry(QRect(180, 130, 113, 21));
        labelName = new QLabel(centralwidget);
        labelName->setObjectName("labelName");
        labelName->setGeometry(QRect(110, 90, 58, 16));
        label_Accountnum = new QLabel(centralwidget);
        label_Accountnum->setObjectName("label_Accountnum");
        label_Accountnum->setGeometry(QRect(70, 130, 111, 16));
        label_enterinfo = new QLabel(centralwidget);
        label_enterinfo->setObjectName("label_enterinfo");
        label_enterinfo->setGeometry(QRect(40, 30, 201, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menuPlease_Enter_Your_Information = new QMenu(menubar);
        menuPlease_Enter_Your_Information->setObjectName("menuPlease_Enter_Your_Information");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPlease_Enter_Your_Information->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        name->setText(QString());
        AccountNumber->setText(QString());
        labelName->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_Accountnum->setText(QCoreApplication::translate("MainWindow", "Account Number:", nullptr));
        label_enterinfo->setText(QCoreApplication::translate("MainWindow", "Please Enter Your Information:", nullptr));
        menuPlease_Enter_Your_Information->setTitle(QCoreApplication::translate("MainWindow", "Please Enter Your Information:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
