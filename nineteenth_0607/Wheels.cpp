#include "Wheels.h"

Wheels::Wheels()
{
    radius = height = 0;
    model = "";
}

Wheels::Wheels(const char* m, int r, int h)
{
    model = m;
    radius = r;
    height = h;
}

void Wheels::print() const
{
    cout << "Wheels' model: " << model << endl;
    cout << "Wheels' radius: " << radius << " cm" << endl;
    cout << "Protector's height: " << height << " cm" << endl;
}

void Wheels::setRadius(int r)
{
    if (r>=14 && r<=22)
        radius = r;
}

void Wheels::setHeight(int h)
{
    if (h>=2 && h<=8)
        height = h;
}

void Wheels::setModel(const char* m)
{
    if (strlen(m)>0)
        model = m;
}

int Wheels::getRadius() const
{
    return radius;
}

int Wheels::getHeight() const
{
    return height;
}

string Wheels::getModel() const
{
    return model;
}
