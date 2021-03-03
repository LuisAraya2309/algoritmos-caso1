#pragma once
#include <iostream>
#include "repartidor.h"

using namespace std;

class Bici: public Repartidor {
    public:
    void ejecutarEntrega(string pDireccion, int pVelocidad) const{
        cout << "Calcula el tiempo de entrega, con una velocidad de: " << pVelocidad << endl;
        cout << "Ejecuta la entrega por medio de bici" << endl;
        cout << "Entrega para la direccion: " << pDireccion << endl;
    }
};