#include "nostarahaa.h"
#include "ui_nostarahaa.h"

nostarahaa::nostarahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()),this, SLOT(paivita()));


    QString id = lib.getUserinfo();
    ui->label->setText(id);
    monee = lib.getDosh();
    QString rahet = QString::number(monee);
    ui->label_2->setText(rahet + " €");

}

nostarahaa::~nostarahaa()
{
    delete ui;
    delete timer;
}

void nostarahaa::paivita()
{
    --timerAika;
    qDebug()<<timerAika;
    if(timerAika==0)
    {
        timer->stop();
        this->hide();
        loginOk *takaisin = new(loginOk);
        takaisin->show();
        takaisin->start();
    }
}

void nostarahaa::start()
{
    timer->start();
}

void nostarahaa::on_pushButton_9_clicked()
{
    timer->stop();
    this->hide();
    loginOk *ok = new(loginOk);
    ok->show();
    ok->start();
}

void nostarahaa::on_pushButton_clicked()
{
    timer->stop();
    timerAika=10;
    timer->start();

    if(monee > 20)
    {
    monee = monee - 20;
    QString rahat = QString::number(monee);
    lib.downloadCash(rahat);
    ui->label_2->setNum(monee);

    timer->stop();
    this->hide();
    MainWindow *takaisin = new(MainWindow);
    takaisin->show();
    }

    else if(monee < 20)
    {
    ui->label_3->setText("Ei ole tarpeeksi rahaa");
    }



}

void nostarahaa::on_pushButton_4_clicked()
{
    timer->stop();
    timerAika=10;
    timer->start();


    if(monee > 40)
    {
    monee = monee - 40;
    QString rahat = QString::number(monee);
    lib.downloadCash(rahat);
    ui->label_2->setNum(monee);
    timer->stop();
    this->hide();
    MainWindow *takaisin = new(MainWindow);
    takaisin->show();
    }

    else if(monee < 40)
    {
    ui->label_3->setText("Ei ole tarpeeksi rahaa");
    }

}

void nostarahaa::on_pushButton_2_clicked()
{
    timer->stop();
    timerAika=10;
    timer->start();


    if(monee > 60)
    {
    monee = monee - 60;
    QString rahat = QString::number(monee);
    lib.downloadCash(rahat);
    ui->label_2->setNum(monee);

    timer->stop();
    this->hide();
    MainWindow *takaisin = new(MainWindow);
    takaisin->show();
    }

    else if(monee < 60)
    {
    ui->label_3->setText("Ei ole tarpeeksi rahaa");
    }
}

void nostarahaa::on_pushButton_5_clicked()
{
    timer->stop();
    timerAika=10;
    timer->start();

    if(monee > 100)
    {
    monee = monee - 100;
    QString rahat = QString::number(monee);
    lib.downloadCash(rahat);
    ui->label_2->setNum(monee);

    timer->stop();
    this->hide();
    MainWindow *takaisin = new(MainWindow);
    takaisin->show();
    }

    else if(monee < 100)
    {
    ui->label_3->setText("Ei ole tarpeeksi rahaa");
    }
}

void nostarahaa::on_pushButton_3_clicked()
{
    timer->stop();
    timerAika=10;
    timer->start();


    if(monee > 40)
    {
    monee = monee - 200;
    QString rahat = QString::number(monee);
    lib.downloadCash(rahat);
    ui->label_2->setNum(monee);

    timer->stop();
    this->hide();
    MainWindow *takaisin = new(MainWindow);
    takaisin->show();
    }

    else if(monee < 200)
    {
    ui->label_3->setText("Ei ole tarpeeksi rahaa");
    }
}

void nostarahaa::on_pushButton_6_clicked()
{
    timer->stop();
    timerAika=10;
    timer->start();


    if(monee > 500)
    {
    monee = monee - 500;
    QString rahat = QString::number(monee);
    lib.downloadCash(rahat);
    ui->label_2->setNum(monee);

    timer->stop();
    this->hide();
    MainWindow *takaisin = new(MainWindow);
    takaisin->show();
    }

    else if(monee < 500)
    {
    ui->label_3->setText("Ei ole tarpeeksi rahaa");
    }
}
