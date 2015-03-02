#ifndef TANK_H
#define TANK_H

using namespace std;
#include "pump.h"

#define MAXCAP 100

class Tank
{

private:
    int capaciteMax;
    int qteRest;
    Pump* p11;
    Pump* p12;

public:
    Tank();
    Tank(int quantite);
    Tank(int quantite, const Pump& p11, const Pump& p12);
    bool isEmpty();
    ~Tank();

};

#endif // TANK_H
