#include "Doors.h"

Doors::Doors()
{
    color = "";
    number = 0;
}

Doors::Doors(const char* c, int n)
{
    color = c;
    number = n;
}

void Doors::print() const
{
    cout << "Doors' color: " << color << endl;
    cout << "Number of doors: " << number << endl;
}

void Doors::setColor(const char* c)
{
    if (strlen(c)>0)
        color = c;
}

void Doors::setNumber(int n)
{
    if (n==3 || n==5)
        number = n;
}

string Doors::getColor() const
{
    return color;
}

int Doors::getNumber() const
{
    return number;
}
