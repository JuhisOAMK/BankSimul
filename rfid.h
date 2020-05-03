#ifndef RFID_H
#define RFID_H
#include <QSerialPort>
#include <QObject>
#include <QString>
#include "rfid_global.h"

class RFID_EXPORT Rfid : public QObject
{
    Q_OBJECT


public:
     //Rfid();
     ~Rfid();
     int RFID_EXPORT yhdista();

public slots:
    QString RFID_EXPORT readCard();
    void RFID_EXPORT rajapintasignaali();


signals:
   void sigLue();


private:
    QSerialPort * ser;
    QString kortti;
};

#endif // RFID_H
