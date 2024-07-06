#pragma once
#include <iostream>
using namespace std;

class Doors
{
protected:
    string color;
    int number;
public:
    Doors();
    Doors(const char* c, int n);
    void print() const;
    void setColor(const char* c);
    void setNumber(int n);
    string getColor() const;
    int getNumber() const;
};
