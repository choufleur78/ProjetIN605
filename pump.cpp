#include "pump.h"

//constructeurs
Pump::Pump()
{
    this->Broken=false;
    this->working=false;
}

Pump::Pump(const Pump &p)
{
    this->Broken=p.Broken;
    this->working=p.working;
}
/*
Pump Pump::operator =(const Pump p)
{
    return Pump(p);
}
*/
//getter
bool Pump::isBroken()
{
    return this->Broken;
}

bool Pump::isWorking()
{
    return this->working;
}

Pump::~Pump()
{

}

