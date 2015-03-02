#include "engine.h"

Engine::Engine()
{
    this->alimented=false;
}

Engine::Engine(bool status)
{
    this->alimented=status;
}

bool Engine::isAlimented()
{
    return this->alimented;
}

Engine::~Engine()
{

}
