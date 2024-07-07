#include "Transport.h"

Transport::Transport()
{
    model = fuel = "";
    volume = power = 0;
}

Transport::Transport(const char* t, const char* m, const char* f, double v, int p, int s)
{
    type = t;
    model = m;
    fuel = f;
    volume = v;
    power = p;
    speed = s;
}

void Transport::print() const
{
    cout << "Transport type: " << type << endl;
    cout << "Transport model: " << model << endl;
    cout << "Type of fuel: " << fuel << endl;
    cout << "Engine's volume: " << volume << " liters" << endl;
    cout << "Engine's power: " << power << " watt" << endl;
    cout << "Maximum speed: " << speed << " km/h" << endl;
}

void Transport::setType(const char* t)
{
    if (strlen(t)>0)
        type = t;
}

void Transport::setModel(const char* m)
{
    if (strlen(m)>0)
        model = m;
}

void Transport::setFuel(const char* f)
{
    if (strlen(f)>0)
        fuel = f;
}

void Transport::setVolume(double v)
{
    if (v>0)
        volume = v;
}

void Transport::setPower(int p)
{
    if (p>0)
        power = p;
}

void Transport::setSpeed(int s)
{
    if (s>0 && s<1000)
        speed = s;
}

string Transport::getType() const
{
    return type;
}

string Transport::getModel() const
{
    return model;
}

string Transport::getFuel() const
{
    return fuel;
}

double Transport::getVolume() const
{
    return volume;
}

int Transport::getPower() const
{
    return power;
}

int Transport::getSpeed() const
{
    return speed;
}
