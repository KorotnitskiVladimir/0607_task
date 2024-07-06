#include "Engine.h"

Engine::Engine()
{
    model = "";
}

Engine::Engine(const char* m, double v, int p)
{
    model = m;
    volume = v;
    power = p;
}

void Engine::print() const
{
    cout << "Engine's model: " << model << endl;
    cout << "Enigne's volume: " << volume << " l" << endl;
    cout << "Engine's power: " << power << " watt" << endl;
}

void Engine::setModel(const char* m)
{
    if (strlen(m)>0)
        model = m;
}

void Engine::setVolume(double v)
{
    if (v>=0.8 && v<=6)
        volume = v;
}

void Engine::setPower(int p)
{
    if (p>0)
        power = p;
}

string Engine::getModel() const
{
    return model;
}

double Engine::getVolume() const
{
    return volume;
}

int Engine::getPower() const
{
    return power;
}
