#pragma once
#include "Transport.h"

class Motorcycle:public Transport
{
    string purpose;
    string color;
public:
    Motorcycle();
    Motorcycle(const char* t, const char* m, const char* f, double v, int p, int s, const char* pur, const char* c);
    void print() const;
    void setPurpose(const char* p);
    void setColoer(const char* c);
    string getPurpose() const;
    string getColor() const;
};
