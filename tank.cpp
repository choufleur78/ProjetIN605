#include "tank.h"

//constructeurs
Tank::Tank()
{
    this->capaciteMax = MAXCAP;
    this->qteRest = 0;
    this->p11 = new Pump();
    this->p12 = new Pump();
}

Tank::Tank(int quantite)
{
    this->capaciteMax = MAXCAP;
    this->qteRest = quantite;
    this->p11 = new Pump();
    this->p12 = new Pump();
}

Tank::Tank(int quantite, const Pump& p11, const Pump& p12)
{
    this->capaciteMax = MAXCAP;
    this->qteRest = quantite;
    this->p11 = new Pump(p11);
    this->p12 = new Pump(p12);

}

//getter
bool Tank::isEmpty()
{
    if(this->qteRest == 0)
         return true;
    else return false;
}

Tank::~Tank()
{
    delete this->p11;
    delete this->p12;
}

