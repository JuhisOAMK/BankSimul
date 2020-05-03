#include "saldo.h"
#include "ui_saldo.h"
#include "kirjautuminen.h"
#include "C:\temp\BankSimul\Database\database.h"

saldo::saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saldo)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()),this, SLOT(paivita()));
    QString id = lib.getUserinfo();
    qDebug() << id;
    ui->label_2->setText(id);
    QString rahet = QString::number(lib.getDosh());
    ui->label_3->setText(rahet + " €");


    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t8sisa00");
    db.setUserName("t8sisa00");
    db.setPassword("6TJhnUQ7rTDdm8Qw");

    if(db.open())
    {
        QSqlQuery query;
        query.prepare("SELECT ID FROM currentUser");
        query.exec();
        query.first();
        id = query.value(0).toString();
        qDebug() << query.executedQuery();


        test = new QSqlQueryModel;
        test->setQuery("SELECT Pvm, Tapahtuma, Määrä FROM Tilitapahtumat WHERE id = '" + id + "' AND Tapahtuma = 'Siirto+'");
        ui->tableView->setModel(test);

    }


}

saldo::~saldo()
{
    delete ui;
    delete timer;
}

void saldo::start()
{
    timer->start();
}


void saldo::on_pushButton_clicked()
{
    timer->stop();
    this->hide();
    loginOk *ok = new(loginOk);
    ok->show();
    ok->start();
}

void saldo::paivita()
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





void saldo::on_pushButton_2_clicked()
{

}
