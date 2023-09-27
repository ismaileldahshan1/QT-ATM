#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include <QDialog>

namespace Ui {
class transactions;
}
class MainWindow;
class transactions : public QDialog
{
    Q_OBJECT

public:
    explicit transactions(QWidget *parent = nullptr);
    ~transactions();
    void setName(QString accname);
    void setaccNum(QString accnumber);
    void setamount(QString amount1);


private slots:
    void on_pushButtonclear_clicked();

    void on_pushButton_deposit_clicked();

    void on_pushButton_withdraw_clicked();

    void on_pushButton_showhistory_clicked();

    void on_pushButton_hidehistory_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::transactions *ui;
 double balance=0;
    QString amount;
    MainWindow* loginwindow;
    QString history="Transaction History:\n";

};

#endif // TRANSACTIONS_H
