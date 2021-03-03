#pragma once
#include <iostream>
#include "repartidor.h"

using namespace std;

class Moto: public Repartidor {
    public:
    void ejecutarEntrega(string pDireccion, int pVelocidad) const{
        cout << "Calcula el tiempo de entrega, con una velocidad de: " << pVelocidad << endl;
        cout << "Ejecuta la entrega por medio de moto" << endl;
        cout << "Entrega para la direccion: " << pDireccion << endl;
    }
};