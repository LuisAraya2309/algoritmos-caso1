/*
Instituto Tecnol�gico de Costa Rica
Escuela de Computaci�n
An�lisis de Algortimos
Profesor: Rodrigo N��ez N��ez
Estudiantes: 
Luis Carlos Araya Mata Carn�: 2020205005
Kendall Cascante Mesén Carnet: 2019039628
Guillermo Coto �lvarez Carnet: 2016134133
------
------
Grupo: 1
I Semestre
2021
Martes 2 de marzo de 2021
2/03/2021
*/

//Libraries
#include <iostream>
#include "entregas.h"
#include "moto.h"
#include "bici.h"
#include "carro.h"

using namespace std;

void Pedido(){
    Moto moto;
    Bici bici;
    Carro carro;
    Entregas entrega;

    entrega.setRepartidor(&moto);
    entrega.setDireccion("Calle 20B, Condominio Buena Vista, 4C");
    entrega.setVelocidad(60);
    entrega.ejecutaEstrategia();

}
//Main Function
int main (){ 
    Pedido();
    return 0;
}
