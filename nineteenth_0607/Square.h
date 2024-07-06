#pragma once

class Square
{
protected:
    int side;
public:
    Square() = default;
    Square(int a);
    int getSide() const;
    int perimeter() const;
    int square() const;
    void setSide(int a);
};
