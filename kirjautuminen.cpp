#include "kirjautuminen.h"
#include "ui_kirjautuminen.h"


kirjautuminen::kirjautuminen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kirjautuminen)
{
    int sqlcon = 0;
    ui->setupUi(this);
    if (sisalla == 0)
    {
    luekortti = new Rfid;
    luekortti->yhdista();
    sisalla = 1;
    }

    else if(sisalla == 1)
    {
        qDebug() << "Porttiin on jo yhdistetty";
    }

    qDebug()<<pin;
    ui->oikea_pin->hide();
    ui->vaara_pin->hide();
    connect(luekortti, SIGNAL(sigLue()), this, SLOT(kortinluku()));
    sqlcon = lib.createConnection();
    if (sqlcon == 1)
    {
        qDebug() << "SQL connected!";
    }

}



kirjautuminen::~kirjautuminen()
{
    delete ui;
}


void kirjautuminen::kortinluku()
{
    kortinNumero = luekortti->readCard();
    qDebug() << kortinNumero;
    ui->label->setText(kortinNumero);
    pin = lib.getPin(kortinNumero);
    qDebug() << pin;

}

void kirjautuminen::receivedNMBR()
{
    emit numerosaatu();
}

void kirjautuminen::nmrfunc()
{


}



void kirjautuminen::testi()
{


}




void kirjautuminen::on_panelButton_1_clicked()
{
    if (numerot == 0)
    {
        ui->spinBox->setRange(0, 9999);
        pinkoodi = 1 * 1000;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 1)
    {
        pinkoodi = pinkoodi + 100;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 2)
    {
        pinkoodi = pinkoodi + 10;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 3)
    {
        pinkoodi = pinkoodi + 1;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        checkNum();
        numerot=0;
        return;
    }
}

void kirjautuminen::on_panelButton_2_clicked()
{
    if (numerot == 0)
    {
        ui->spinBox->setRange(0, 9999);
        pinkoodi = 2 * 1000;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 1)
    {
        pinkoodi = pinkoodi + 200;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 2)
    {
        pinkoodi = pinkoodi + 20;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 3)
    {
        pinkoodi = pinkoodi + 2;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        checkNum();
        numerot=0;
        return;
    }


}

void kirjautuminen::on_panelButton_3_clicked()
{
    if (numerot == 0)
    {
        ui->spinBox->setRange(0, 9999);
        pinkoodi = 3 * 1000;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 1)
    {
        pinkoodi = pinkoodi + 300;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 2)
    {
        pinkoodi = pinkoodi + 30;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 3)
    {
        pinkoodi = pinkoodi + 3;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        checkNum();
        numerot=0;
        return;
    }



}

void kirjautuminen::on_panelButton_4_clicked()
{
    if (numerot == 0)
    {
        ui->spinBox->setRange(0, 9999);
        pinkoodi = 4 * 1000;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 1)
    {
        pinkoodi = pinkoodi + 400;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 2)
    {
        pinkoodi = pinkoodi + 40;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 3)
    {
        pinkoodi = pinkoodi + 4;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        checkNum();
        numerot=0;
        return;
    }

}

void kirjautuminen::on_panelButton_5_clicked()
{
    if (numerot == 0)
    {
        ui->spinBox->setRange(0, 9999);
        pinkoodi = 5 * 1000;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 1)
    {
        pinkoodi = pinkoodi + 500;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }
    else if (numerot == 2)
    {
        pinkoodi = pinkoodi + 50;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 3)
    {
        pinkoodi = pinkoodi + 5;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        checkNum();
        numerot=0;
        return;
    }
}

void kirjautuminen::on_panelButton_6_clicked()
{
    if (numerot == 0)
    {
        ui->spinBox->setRange(0, 9999);
        pinkoodi = 6 * 1000;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 1)
    {
        pinkoodi = pinkoodi + 600;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }
    else if (numerot == 2)
    {
        pinkoodi = pinkoodi + 60;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 3)
    {
        pinkoodi = pinkoodi + 6;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        checkNum();
        numerot=0;
        return;
    }
}

void kirjautuminen::on_panelButton_7_clicked()
{
    if (numerot == 0)
    {
        ui->spinBox->setRange(0, 9999);
        pinkoodi = 7 * 1000;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }
    else if (numerot == 1)
    {
        pinkoodi = pinkoodi + 700;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }
    else if (numerot == 2)
    {
        pinkoodi = pinkoodi + 70;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 3)
    {
        pinkoodi = pinkoodi + 7;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        checkNum();
        numerot=0;
        return;
    }
}

void kirjautuminen::on_panelButton_8_clicked()
{
    if (numerot == 0)
    {
        ui->spinBox->setRange(0, 9999);
        pinkoodi = 8 * 1000;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 1)
    {
        pinkoodi = pinkoodi + 800;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }
    else if (numerot == 2)
    {
        pinkoodi = pinkoodi + 80;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 3)
    {
        pinkoodi = pinkoodi + 8;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        checkNum();
        numerot=0;
        return;
    }

}

void kirjautuminen::on_panelButton_9_clicked()
{
    if (numerot == 0)
    {
        ui->spinBox->setRange(0, 9999);
        pinkoodi = 9 * 1000;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }
    else if (numerot == 1)
    {
        pinkoodi = pinkoodi + 900;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }
    else if (numerot == 2)
    {
        pinkoodi = pinkoodi + 90;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        return;
    }

    else if (numerot == 3)
    {
        pinkoodi = pinkoodi + 9;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        checkNum();
        numerot=0;
        return;
    }

}

void kirjautuminen::on_panelButton_0_clicked()
{
    if (numerot == 0)
    {
        ui->spinBox->setRange(0, 9999);
        pinkoodi = 0000;
        numerot++;
        return;

    }

    else if (numerot == 1)
    {
        pinkoodi = pinkoodi + 000;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        ui->spinBox->setPrefix("0");
        return;
    }
    else if (numerot == 2)
    {
        pinkoodi = pinkoodi + 00;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        ui->spinBox->setPrefix("00");
        return;
    }

    else if (numerot == 3)
    {
        pinkoodi = pinkoodi + 0;
        ui->spinBox->setValue(pinkoodi);
        numerot++;
        ui->spinBox->setPrefix("000");
        checkNum();
        numerot=0;
        return;
    }
}

void kirjautuminen::checkNum()
{
    if(pinkoodi == pin)
    {
        this->close();
        loginOk *ok = new(loginOk);
        ok->show();
        ok->start();
        if(pin == 0)
        {
            user = "1";
            lib.switchUser(user);
            delete luekortti;
            luekortti = nullptr;
        }
        else if(pin == 1234)
        {
            user = "2";
            lib.switchUser(user);
            delete luekortti;
            luekortti = nullptr;
        }
    }
    else
    {
        ui->vaara_pin->show();
        QTimer::singleShot(3000, ui->vaara_pin, &QWidget::hide);
        ui->spinBox->setPrefix("");
        ui->spinBox->setValue(0);
    }

}

QString kirjautuminen::returnID()
{
    return user;
}
