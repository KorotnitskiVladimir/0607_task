#pragma once

class Circle
{
protected:
    int radius;
public:
    Circle() = default;
    Circle(int r);
    double length() const;
    int getRadius() const;
    void setRadius(int r);
    double square() const;
};
