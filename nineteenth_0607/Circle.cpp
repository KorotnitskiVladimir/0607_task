#include "Circle.h"

Circle::Circle(int r)
{
    radius = r;
}

double Circle::length() const
{
    return 2*3.14*radius;
}

int Circle::getRadius() const
{
    return radius;
}

void Circle::setRadius(int r)
{
    if (r>0)
        radius = r;
}

double Circle::square() const
{
    return 3.14*radius*radius;
}
