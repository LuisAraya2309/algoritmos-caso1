#pragma once
#include <iostream>
#include "repartidor.h"

using namespace std;

class Entregas {
    string direccion;
    Repartidor *repartidor;
    int velocidad;


    public:

    void setRepartidor(Repartidor *pRepartidor){
        this->repartidor = pRepartidor;
    };

    void ejecutaEstrategia(){
        repartidor->ejecutarEntrega(direccion, velocidad);
    }

    void setDireccion(string pDireccion){
        this->direccion = pDireccion;
    };

    void setVelocidad(int pVelocidad){
        this->velocidad = pVelocidad;
    };


};