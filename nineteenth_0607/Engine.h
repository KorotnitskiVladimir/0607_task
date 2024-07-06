#pragma once
#include <iostream>
using namespace std;

class Engine
{
protected:
    string model;
    double volume;
    int power;
public:
    Engine();
    Engine(const char* m, double v, int p);
    void print() const;
    void setModel(const char* m);
    void setVolume(double v);
    void setPower(int p);
    string getModel() const;
    double getVolume() const;
    int getPower() const;
};
