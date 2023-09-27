#include "transactions.h"
#include "ui_transactions.h"
#include"mainwindow.h"
transactions::transactions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transactions)
{
    ui->setupUi(this);
}

transactions::~transactions()
{
    delete ui;
}
void transactions::setamount(QString amount1){
    amount=amount1;
}

void transactions::on_pushButtonclear_clicked()
{
ui->lineEdit->setText("");
}


void transactions::on_pushButton_deposit_clicked()
{
    QString am = ui->lineEdit->text();
    balance=balance+am.toDouble();
    ui->lineEdit_accbalance->setText(QString::number( balance));
    history+="+"+am + "\n";
}


void transactions::on_pushButton_withdraw_clicked()
{
    QString am = ui->lineEdit->text();
    if(QString::number( balance)>=am){
    balance=balance-am.toDouble();
    ui->lineEdit_accbalance->setText(QString::number( balance));
 history+="-"+am + "\n";
    }
    else
    {
        ui->lineEdit_accbalance->setText("not enoungh funds for this transaction");
    }
}


void transactions::on_pushButton_showhistory_clicked()
{
    ui->label_histroy->setText(history);
}


void transactions::on_pushButton_hidehistory_clicked()
{
    ui->label_histroy->setText("");
}


void transactions::on_pushButton_back_clicked()
{
    loginwindow=new MainWindow();
    this->close();
     loginwindow->show();
}

void transactions::setName(QString accname){

    ui->lineEdit_name->setText(accname);
}
void transactions::setaccNum(QString accnumber){

    ui->lineEdit_accnumber->setText(accnumber);
}
