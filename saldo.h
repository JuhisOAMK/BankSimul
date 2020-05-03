#ifndef SALDO_H
#define SALDO_H

#include <QDialog>
#include "loginok.h"
#include "C:\temp\BankSimul\Database\database.h"
#include "kirjautuminen.h"

namespace Ui {
class saldo;
}

class saldo : public QDialog
{
    Q_OBJECT

public:
    explicit saldo(QWidget *parent = 0);
    ~saldo();
    void start();

private slots:
    void on_pushButton_clicked();
    void paivita();


    void on_pushButton_2_clicked();

private:
    int timerAika = 30;
    Ui::saldo *ui;
    QTimer *timer;
    Database lib;
    QSqlQueryModel * test;
};

#endif
