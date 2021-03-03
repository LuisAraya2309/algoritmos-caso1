#pragma once
#include <iostream>
#include "repartidor.h"

using namespace std;

class Carro: public Repartidor {
    public:
    void ejecutarEntrega(string pDireccion, int pVelocidad) const{
        cout << "Calcula el tiempo de entrega, con una velocidad de: " << pVelocidad << endl;
        cout << "Ejecuta la entrega por medio de carro" << endl;
        cout << "Entrega para la direccion: " << pDireccion << endl;
    }
};