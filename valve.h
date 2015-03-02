#ifndef VALVE_H
#define VALVE_H

#include "tank.h"
#include "engine.h"
#include <QApplication>

//test git

class Valve : public QObject
{
    Q_OBJECT

private:
    bool open;
    Tank *t1;
    Tank *t2;
    Engine *m;

public:
    Valve();
    Valve(bool status);
    Valve(Tank* t1,Tank* t2, bool status=false);
    Valve(Tank* t1, Engine* m, bool status=false);

    bool isOpen();
    ~Valve();

public slots :
    void setstatus(bool status);
};

#endif // VALVE_H
