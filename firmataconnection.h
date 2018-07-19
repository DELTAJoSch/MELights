#ifndef FIRMATACONNECTION_H
#define FIRMATACONNECTION_H
#include <QObject>
#include "libs/QtFirmata-master/qtfirmata.h"

class firmataConnection: public QObject
{
    Q_OBJECT
public:
    firmataConnection(QObject *_parent);
    bool getPinState(int pinIDG);
    void setPinState(int pinIDS, bool state);

public slots:
    bool connectArduino(QString port);

private:
    int pinIDS;
    int pinIDG;
    bool state;
    QString port;
    QtFirmata *arduino;
    int d, i, a, s, a_ud, s_ud;
};

#endif // FIRMATACONNECTION_H
