#pragma once
#include "Square.h"
#include "Circle.h"

class CircleInSquare:public Square, public Circle
{
public:
    CircleInSquare() = default;
    CircleInSquare(int s, int r): Square(s), Circle(r) {}
    bool isFit();
};
