#include "tilitapahtumat.h"
#include "ui_tilitapahtumat.h"

tilitapahtumat::tilitapahtumat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tilitapahtumat)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()),this, SLOT(paivita()));

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
        test->setQuery("SELECT Pvm, Tapahtuma, Määrä FROM Tilitapahtumat WHERE id = '" + id + "'");
        ui->tableView->setModel(test);

    }




}

tilitapahtumat::~tilitapahtumat()
{
    delete ui;
    delete timer;
}

void tilitapahtumat::paivita()
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

void tilitapahtumat::on_pushButton_9_clicked()
{
    timer->stop();
    this->hide();
    loginOk *ok = new(loginOk);
    ok->show();
    ok->start();
}

void tilitapahtumat::start()
{
    timer->start();
}

void tilitapahtumat::on_pushButton_clicked()
{
    timer->stop();
    timerAika=30;
    timer->start();

    test->setQuery("SELECT Pvm, Tapahtuma, Määrä FROM Tilitapahtumat WHERE id = '" + id + "' AND (Tapahtuma = 'Nosto' OR Tapahtuma = 'Siirto-')");
    ui->tableView->setModel(test);
}


void tilitapahtumat::on_pushButton_2_clicked()
{
    timer->stop();
    timerAika=30;
    timer->start();

    test->setQuery("SELECT Pvm, Tapahtuma, Määrä FROM Tilitapahtumat WHERE id = '" + id + "' AND Tapahtuma = 'Siirto+'");
    ui->tableView->setModel(test);
}

void tilitapahtumat::on_pushButton_3_clicked()
{
    timer->stop();
    timerAika=30;
    timer->start();

    test->setQuery("SELECT Pvm, Tapahtuma, Määrä FROM Tilitapahtumat WHERE id = '" + id + "'");
    ui->tableView->setModel(test);

}
