#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QDialog>
#include "loginok.h"
#include "C:\temp\BankSimul\Database\database.h"
#include <QSql>
#include <QSqlQueryModel>

namespace Ui {
class tilitapahtumat;
}

class tilitapahtumat : public QDialog
{
    Q_OBJECT

public:
    explicit tilitapahtumat(QWidget *parent = 0);
    ~tilitapahtumat();
    void start();

private slots:
    void paivita();
    void on_pushButton_9_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    int timerAika = 30;
    Ui::tilitapahtumat *ui;
    QTimer *timer;
    Database lib;
    QSqlQuery query;
    QSqlQueryModel * test;
    QString id;

};

#endif // TILITAPAHTUMAT_H
