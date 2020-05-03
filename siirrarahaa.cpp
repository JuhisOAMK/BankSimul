#include "siirrarahaa.h"
#include "ui_siirrarahaa.h"


siirrarahaa::siirrarahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::siirrarahaa)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()),this, SLOT(paivita()));
}

siirrarahaa::~siirrarahaa()
{
    delete ui;
    delete timer;
}

void siirrarahaa::start()
{
    timer->start();
}

void siirrarahaa::paivita()
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

void siirrarahaa::on_pushButton_clicked()
{
    timer->stop();
    this->hide();
    loginOk *ok = new(loginOk);
    ok->show();
    ok->start();
}

void siirrarahaa::on_lineEdit_textEdited(const QString &arg1)
{
    timer->stop();
    timerAika=500;
    timer->start();
}

void siirrarahaa::on_lineEdit_2_textEdited(const QString &arg1)
{
    timer->stop();
    timerAika=500;
    timer->start();
}

void siirrarahaa::on_checkBox_stateChanged(int arg1)
{
    timer->stop();
    timerAika=500;
    timer->start();
}

void siirrarahaa::on_pushButton_2_clicked()
{
    timer->stop();
    timerAika=500;
    timer->start();
    kortti = ui->lineEdit->text();
    rahat = ui->lineEdit_2->text();

    ui->label->setText(lib.transferDosh(kortti, rahat));
}
