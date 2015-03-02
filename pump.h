#ifndef PUMP_H
#define PUMP_H

using namespace std;

class Pump
{

private:
    bool Broken;
    bool working;
public:
    Pump();
    Pump(const Pump& p);
    //Pump operator= (const Pump p);
    bool isBroken();
    bool isWorking();
    ~Pump();

};

#endif // PUMP_H
