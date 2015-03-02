#ifndef ENGINE_H
#define ENGINE_H

using namespace std;

class Engine
{
private:
    bool alimented;
public:
    Engine();
    Engine(bool status);
    bool isAlimented();
    ~Engine();
};

#endif // ENGINE_H
