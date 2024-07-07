#include "Motorcycle.h"

Motorcycle::Motorcycle()
{
    type = model = fuel = purpose = color = "";
    volume = power = speed = 0;
}

Motorcycle::Motorcycle(const char* t, const char* m, const char* f, double v, int p, int s, const char* pur,
    const char* c): Transport(t, m, f, v, p, s)
{
    purpose = pur;
    color = c;
}

void Motorcycle::print() const
{
    Transport::print();
    cout << "Motorcycle's class: " << purpose << endl;
    cout << "Color: " << color << endl;
}

void Motorcycle::setPurpose(const char* p)
{
    if (strlen(p)>0)
        purpose = p;
}

void Motorcycle::setColoer(const char* c)
{
    if (strlen(c)>0)
        color = c;
}

string Motorcycle::getPurpose() const
{
    return purpose;
}

string Motorcycle::getColor() const
{
    return color;
}
