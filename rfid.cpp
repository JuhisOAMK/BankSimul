#include "rfid.h"
#include <QDebug>

/*Rfid::Rfid()
{

}
*/

int Rfid::yhdista()
{
    int kaytossa = 0;


    ser = new QSerialPort(this);
    ser->setPortName("com8");
    ser->setBaudRate(QSerialPort::Baud9600);
    ser->setDataBits(QSerialPort::Data8);
    ser->setParity(QSerialPort::NoParity);
    ser->setStopBits(QSerialPort::OneStop);
    ser->setFlowControl(QSerialPort::HardwareControl);

    if (ser->open(QIODevice::ReadWrite))
    {
        qDebug() << ser->portName();
        qDebug() << "Onnistuit!";
        kaytossa = 1;
    }
    else {
        qDebug() << "Portin avaaminen epäonnistui";
    }

    QObject::connect(ser,SIGNAL(readyRead()), this,SLOT(readCard()));
    return kaytossa;
}



QString Rfid::readCard()
{

    char data[20];
    int bytesread, quit = 0;
    bytesread = ser->read(data,20);
    data[bytesread] = '\0';
    if (bytesread>10)
    {
        for (int i=0; i<=9; i++)
        {
            kortti = data;
        }
        kortti.remove(0, 3);
        kortti.remove(10, 15);
        qDebug() << "Kortin numero: " << kortti;
        quit = 1;
    }

    else
    {
        qDebug() << "Virhe korttia lukiessa";
    }
    if (quit == 1)
    {
    rajapintasignaali();
    }
    return kortti;

    

}



void Rfid::rajapintasignaali()
{
    emit sigLue();
}


Rfid::~Rfid()
{
    delete ser;
    ser = nullptr;
}
