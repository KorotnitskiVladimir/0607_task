#include "Plane.h"

Plane::Plane()
{
    type = model = fuel = purpose = "";
    volume = power = speed = capacity = 0;
}

Plane::Plane(const char* t, const char* m, const char* f, double v, int p, int s, const char* pur, int c):
Transport(t, m, f, v, p, s)
{
    purpose = pur;
    capacity = c;
}

void Plane::print() const
{
    Transport::print();
    cout << "Plane class: " << purpose << endl;
    cout << "Max capacity: " << capacity << " seats" << endl;
}

void Plane::setPurpose(const char* p)
{
    if (strlen(p)>0)
        purpose = p;
}

void Plane::setCapacity(int c)
{
    if (c>0 && c<600)
        capacity = c;
}

string Plane::getPurpose() const
{
    return purpose;
}

int Plane::getCapacity() const
{
    return capacity;
}
