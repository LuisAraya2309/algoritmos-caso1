#pragma once
#include <iostream>

using namespace std;

class Repartidor {

    public:
    virtual void ejecutarEntrega(string pDireccion, int pVelocidad) const = 0 ;

};