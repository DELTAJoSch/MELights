#include "firmataconnection.h"
#include "libs/QtFirmata-master/qtfirmata.h"
#include <QTimer>
#include <QCoreApplication>
#include <QDebug>
#include <QObject>


firmataConnection::firmataConnection(QObject *_parent)
{

}

void firmataConnection::setPinState(int pinIDS, bool state)
{

}

bool firmataConnection::connectArduino(QString port)
{
    arduino = new QtFirmata(port);
    arduino->connect();
    return arduino->available();
}

bool firmataConnection::getPinState(int pinIDG)
{
    bool pinstate;
    return pinstate;
}
