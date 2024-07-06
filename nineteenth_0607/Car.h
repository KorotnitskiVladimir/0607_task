#pragma once
#include "Doors.h"
#include "Engine.h"
#include "Wheels.h"

class Car: public Wheels, public Engine, public Doors
{
private:
    string model;
public:
    Car();
    Car(const char* w, int r, int h, const char* e, double v, int p, const char* d, int n, const char* m);
    void print();
    void setModel(const char* m);
    string getModel() const;
};
