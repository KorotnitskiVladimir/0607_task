#include "Square.h"

Square::Square(int a)
{
    side = a;
}

int Square::getSide() const
{
    return side;
}

int Square::perimeter() const
{
    return side*4;
}

int Square::square() const
{
    return side*side;
}

void Square::setSide(int a)
{
    if (a>0)
        side = a;
}
