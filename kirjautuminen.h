#ifndef KIRJAUTUMINEN_H
#define KIRJAUTUMINEN_H

#include <QDialog>
#include "rfid.h"
#include <QDebug>
#include "loginok.h"
#include <QThread>
#include "C:\temp\BankSimul\Database\database.h"
namespace Ui {
class kirjautuminen;
}

class kirjautuminen : public QDialog
{
    Q_OBJECT

public:
    explicit kirjautuminen(QWidget *parent = nullptr);
    ~kirjautuminen();

    void checkNum();
    QString user = "0";
    QString returnID();
public slots:



private slots:
    void kortinluku();
    void receivedNMBR();
    void nmrfunc();
    void testi();


    void on_panelButton_1_clicked();

    void on_panelButton_2_clicked();

    void on_panelButton_3_clicked();

    void on_panelButton_4_clicked();

    void on_panelButton_5_clicked();

    void on_panelButton_6_clicked();

    void on_panelButton_7_clicked();

    void on_panelButton_8_clicked();

    void on_panelButton_9_clicked();

    void on_panelButton_0_clicked();


signals:
    void numerosaatu();

private:
    int pin;
    kirjautuminen *ok;
    Ui::kirjautuminen *ui;
    Rfid * luekortti;
    QString kortinNumero;
    short pinkoodi;
    short numerot = 0;
    Database lib;
    int sisalla = 0;

};

#endif // KIRJAUTUMINEN_H
