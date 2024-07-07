#pragma once
#include "Transport.h"

class Plane:public Transport
{
private:
    string purpose;
    int capacity;
public:
    Plane();
    Plane(const char* t, const char* m, const char* f, double v, int p, int s, const char* pur, int c);
    void print() const;
    void setPurpose(const char* p);
    void setCapacity(int c);
    string getPurpose() const;
    int getCapacity() const;
};
