/********************************************************************************
** Form generated from reading UI file 'transactions.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONS_H
#define UI_TRANSACTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_transactions
{
public:
    QPushButton *pushButtonclear;
    QPushButton *pushButton_deposit;
    QPushButton *pushButton_withdraw;
    QPushButton *pushButton_showhistory;
    QPushButton *pushButton_hidehistory;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_balance;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton_back;
    QLabel *label_histroy;
    QLineEdit *lineEdit_accbalance;
    QLineEdit *lineEdit_accnumber;
    QLineEdit *lineEdit_name;

    void setupUi(QDialog *transactions)
    {
        if (transactions->objectName().isEmpty())
            transactions->setObjectName("transactions");
        transactions->resize(663, 362);
        pushButtonclear = new QPushButton(transactions);
        pushButtonclear->setObjectName("pushButtonclear");
        pushButtonclear->setGeometry(QRect(220, 110, 100, 32));
        pushButton_deposit = new QPushButton(transactions);
        pushButton_deposit->setObjectName("pushButton_deposit");
        pushButton_deposit->setGeometry(QRect(100, 150, 100, 32));
        pushButton_withdraw = new QPushButton(transactions);
        pushButton_withdraw->setObjectName("pushButton_withdraw");
        pushButton_withdraw->setGeometry(QRect(210, 150, 100, 32));
        pushButton_showhistory = new QPushButton(transactions);
        pushButton_showhistory->setObjectName("pushButton_showhistory");
        pushButton_showhistory->setGeometry(QRect(180, 220, 100, 32));
        pushButton_hidehistory = new QPushButton(transactions);
        pushButton_hidehistory->setObjectName("pushButton_hidehistory");
        pushButton_hidehistory->setGeometry(QRect(300, 220, 100, 32));
        label = new QLabel(transactions);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 58, 16));
        label_2 = new QLabel(transactions);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 30, 121, 20));
        label_balance = new QLabel(transactions);
        label_balance->setObjectName("label_balance");
        label_balance->setGeometry(QRect(20, 70, 101, 16));
        label_4 = new QLabel(transactions);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 110, 58, 16));
        lineEdit = new QLineEdit(transactions);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(90, 110, 113, 21));
        pushButton_back = new QPushButton(transactions);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(230, 270, 100, 32));
        label_histroy = new QLabel(transactions);
        label_histroy->setObjectName("label_histroy");
        label_histroy->setGeometry(QRect(490, 70, 131, 241));
        lineEdit_accbalance = new QLineEdit(transactions);
        lineEdit_accbalance->setObjectName("lineEdit_accbalance");
        lineEdit_accbalance->setGeometry(QRect(130, 70, 113, 21));
        lineEdit_accnumber = new QLineEdit(transactions);
        lineEdit_accnumber->setObjectName("lineEdit_accnumber");
        lineEdit_accnumber->setGeometry(QRect(130, 30, 113, 21));
        lineEdit_name = new QLineEdit(transactions);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(100, 10, 113, 21));

        retranslateUi(transactions);

        QMetaObject::connectSlotsByName(transactions);
    } // setupUi

    void retranslateUi(QDialog *transactions)
    {
        transactions->setWindowTitle(QCoreApplication::translate("transactions", "Dialog", nullptr));
        pushButtonclear->setText(QCoreApplication::translate("transactions", "Clear", nullptr));
        pushButton_deposit->setText(QCoreApplication::translate("transactions", "Deposit", nullptr));
        pushButton_withdraw->setText(QCoreApplication::translate("transactions", "Withdraw", nullptr));
        pushButton_showhistory->setText(QCoreApplication::translate("transactions", "Show History", nullptr));
        pushButton_hidehistory->setText(QCoreApplication::translate("transactions", "Hide History", nullptr));
        label->setText(QCoreApplication::translate("transactions", "Welcome", nullptr));
        label_2->setText(QCoreApplication::translate("transactions", "Account Number:", nullptr));
        label_balance->setText(QCoreApplication::translate("transactions", "Current Balance:", nullptr));
        label_4->setText(QCoreApplication::translate("transactions", "Amount:", nullptr));
        pushButton_back->setText(QCoreApplication::translate("transactions", "Back", nullptr));
        label_histroy->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class transactions: public Ui_transactions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONS_H
