#include "loginok.h"
#include "ui_loginok.h"

loginOk::loginOk(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginOk)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()),this, SLOT(paivita()));
}

loginOk::~loginOk()
{
    delete ui;
    delete timer;
}

void loginOk::paivita()
{
    --timerAika;
    qDebug()<<timerAika;
    if(timerAika==0)
    {
        timer->stop();
        this->hide();
        MainWindow *takaisin = new(MainWindow);
        takaisin->show();
    }
}

void loginOk::on_pushButton_5_clicked()
{
    timer->stop();
    this->hide();
    MainWindow *ulos = new(MainWindow);
    ulos->show();
}

void loginOk::on_pushButton_clicked()
{
    timer->stop();
    this->hide();
    nostarahaa *nosto = new(nostarahaa);
    nosto->show();
    nosto->start();
}

void loginOk::start()
{
    timer->start();
}

void loginOk::on_pushButton_3_clicked()
{
    timer->stop();
    this->hide();
    saldo *sal = new(saldo);
    sal->show();
    sal->start();

}

void loginOk::on_pushButton_4_clicked()
{
    timer->stop();
    this->hide();
    siirrarahaa *raha = new(siirrarahaa);
    raha->show();
    raha->start();
}

void loginOk::on_pushButton_2_clicked()
{
    timer->stop();
    this->hide();
    tilitapahtumat *tapahtumat = new(tilitapahtumat);
    tapahtumat->show();
    tapahtumat->start();
}
