#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QDialog>
#include "loginok.h"
#include "C:\temp\BankSimul\Database\database.h"

namespace Ui {
class nostarahaa;
}

class nostarahaa : public QDialog
{
    Q_OBJECT

public:
    explicit nostarahaa(QWidget *parent = 0);
    ~nostarahaa();
    void start();

private slots:
    void paivita();
    void on_pushButton_9_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

private:
    int timerAika=10;
    Ui::nostarahaa *ui;
    QTimer *timer;
    Database lib;
    int monee;
};

#endif // NOSTARAHAA_H
