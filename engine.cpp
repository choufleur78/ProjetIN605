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

// test Github
//test github 2
//test github3
