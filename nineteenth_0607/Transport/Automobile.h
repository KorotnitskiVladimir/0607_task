#pragma once
#include "Transport.h"

class Automobile:public Transport
{
private:
    string purpose;
    string color;
    int doors;
public:
    Automobile();
    Automobile(const char* t, const char* m, const char* f, double v, int p, int s, const char* pur, const char* c, int d);
    void print() const;
    void setPurpose(const char* t);
    void setColor(const char* c);
    void setDoors(int d);
    string getPurpose() const;
    string getColor() const;
    int getDoors() const;
};
