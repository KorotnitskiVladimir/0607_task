#include "Vessel.h"

Vessel::Vessel()
{
    model = fuel = type = cargo = "";
    volume = power = deadweight = 0;
}

Vessel::Vessel(const char* t, const char* m, const char* f, double v, int p, int s, const char* r, const char* c, int d):
Transport(t, m, f, v, p, s)
{
    range = r;
    cargo = c;
    deadweight = d;
}

void Vessel::print() const
{
    cout << "Transport type: vessel" << endl;
    Transport::print();
    cout << "Vessel's mode: " << type << endl;
    cout << "Cargo type: " << cargo << endl;
    cout << "Vessel's deadweight: " << deadweight << " tonns" << endl;
}

void Vessel::setRange(const char* t)
{
    if (strlen(t)>0)
        range = t;
}

void Vessel::setCargo(const char* c)
{
    if (strlen(c)>0)
        cargo = c;
}

void Vessel::setWeight(int w)
{
    if (w>1000)
        deadweight = w;
}

string Vessel::getRange() const
{
    return range;
}

string Vessel::getCargo() const
{
    return cargo;
}

int Vessel::getWeight() const
{
    return deadweight;
}
