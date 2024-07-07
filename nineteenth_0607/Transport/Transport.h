#pragma once
#include <iostream>
using namespace std;

class Transport
{
protected:
    string type;
    string model;
    string fuel; // тип топлива
    double volume; // объем двигателя
    int power; // мощность двигателя
    int speed;
public:
    Transport();
    Transport(const char* t, const char* m, const char* f, double v, int p, int s);
    void print() const;
    void setType(const char* t);
    void setModel(const char* m);
    void setFuel(const char* f);
    void setVolume(double v);
    void setPower(int p);
    void setSpeed(int s);
    string getType() const;
    string getModel() const;
    string getFuel() const;
    double getVolume() const;
    int getPower() const;
    int getSpeed() const;
};
