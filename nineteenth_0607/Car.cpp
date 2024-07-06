#include "Car.h"

Car::Car()
{
    Wheels::model = "";
    Wheels::radius = Wheels::height = 0;
    Engine::model = "";
    Engine::volume = Engine::power = 0;
    Doors::color = "";
    Doors::number = 0;
    model = "";
}

Car::Car(const char* w, int r, int h, const char* e, double v, int p, const char* d, int n, const char* m):
Wheels(w, r, h), Engine(e, v, p), Doors(d, n)
{
    model = m;
}

void Car::print()
{
    cout << "Car's model: " << model <<  endl;
    Wheels::print();
    Engine::print();
    Doors::print();
}

void Car::setModel(const char* m)
{
    if (strlen(m)>0)
        model = m;
}

string Car::getModel() const
{
    return model;
}
