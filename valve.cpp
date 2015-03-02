#include "valve.h"

//constructeurs
Valve::Valve()
{
    this->open=false;
}

Valve::Valve(bool status)
{
    this->open=status;
}

Valve::Valve(Tank* t1, Engine* m, bool status)
{
    this->t1=t1;
    this->m=m;
    this->open=status;
}

Valve::Valve(Tank* t1,Tank* t2, bool status)
{
    this->t1=t1;
    this->t2=t2;
    this->open=status;
}

//getter
bool Valve::isOpen()
{
    return this->open;
}

//slot
void Valve::setstatus(bool status){
    this->open=status;
}

Valve::~Valve()
{

}

