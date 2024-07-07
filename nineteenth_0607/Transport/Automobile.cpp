#include "Automobile.h"

#include "../Doors.h"

Automobile::Automobile()
{
    model = fuel = type = color = "";
    volume = power = doors = 0;
}

Automobile::Automobile(const char* t, const char* m, const char* f, double v, int p, int s, const char* pur, const char* c, int d):
Transport(t, m, f, v, p, s)
{
    purpose = pur;
    color = c;
    doors = d;
}

void Automobile::print() const
{
    cout << "Type of transport: automobile" << endl;
    cout << "Type of automobile: " << type << endl;
    Transport::print();
    cout << "Color: " << color << endl;
    cout << "Number of doors: " << doors << endl;
}

void Automobile::setPurpose(const char* t)
{
    if (strlen(t)>0)
        purpose = t;
}

void Automobile::setColor(const char* c)
{
    if (strlen(c)>0)
        color = c;
}

void Automobile::setDoors(int d)
{
    if (d>3)
        doors = d;
}

string Automobile::getPurpose() const
{
    return purpose;
}

string Automobile::getColor() const
{
    return color;
}

int Automobile::getDoors() const
{
    return doors;
}
