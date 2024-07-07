#pragma once
#include "Transport.h"

class Vessel:public Transport
{
private:
    string range;
    string cargo;
    int deadweight;
public:
    Vessel();
    Vessel(const char* t, const char* m, const char* f, double v, int p, int s, const char* r, const char* c, int d);
    void print() const;
    void setRange(const char* t);
    void setCargo(const char* c);
    void setWeight(int w);
    string getRange() const;
    string getCargo() const;
    int getWeight() const;
};
