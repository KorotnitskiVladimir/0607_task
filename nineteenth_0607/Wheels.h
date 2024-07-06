#pragma once
#include <iostream>
using namespace std;

class Wheels
{
protected:
    string model;
    int radius;
    int height;
public:
    Wheels();
    Wheels(const char* m, int r, int h);
    void print() const;
    void setRadius(int r);
    void setHeight(int h);
    void setModel(const char* m);
    int getRadius() const;
    int getHeight() const;
    string getModel() const;
};
