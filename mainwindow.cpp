#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"transactions.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
     tranwindow=new transactions();
    this->close();
     tranwindow->setName(ui->name->text());
     tranwindow->setaccNum(ui->AccountNumber->text());
     tranwindow->show();

}

