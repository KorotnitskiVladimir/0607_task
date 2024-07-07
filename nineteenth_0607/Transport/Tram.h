#pragma once
#include "Transport.h"

class Tram:public Transport
{
private:
    int capacity;
public:
    Tram();
    Tram(const char* t, const char* m, const char* f, double v, int p, int s, int c);
    void print() const;
    void setCapacity(int c);
    int getCapacity() const;
};
