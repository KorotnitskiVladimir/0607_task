#include "Tram.h"

Tram::Tram()
{
    type = model = fuel = "";
    volume = power = speed = capacity = 0;
}

Tram::Tram(const char* t, const char* m, const char* f, double v, int p, int s, int c):
Transport(t, m, f, v, p, s)
{
    capacity = c;
}

void Tram::print() const
{
    Transport::print();
    cout << "Capacity: " << capacity << " seats" << endl;
}

void Tram::setCapacity(int c)
{
    if (c>0 && c<70)
        capacity = c;
}

int Tram::getCapacity() const
{
    return capacity;
}
