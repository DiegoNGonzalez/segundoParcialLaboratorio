///Gonzalez Valenzuela Diego Nicolas
///Laboratorio 1 Comision 104 Sabado
///Legajo 28820

#include <iostream>
#include <locale.h>
#include "funciones.h"
using namespace std;

void punto2(int clientesPunto2[600][7]){
	setlocale(LC_ALL, "spanish");

    for(int i=0;i<600;i++){
        for(int j=0;j<7;j++){
            if (clientesPunto2[i][j]>1){
                cout <<"El cliente "<<i+800<<" pidio más de una vez la torta nro "<<j+1<< endl;
            }
        }
    }
}

void punto3(float tortasPunto3[7], string nombreTortas[7]){


    for(int i=0; i<7;i++){
        if (tortasPunto3[i]>0){
            cout <<"El peso maximo de la torta "<<nombreTortas[i]<<" fue de "<<tortasPunto3[i]<<" kilos. "<<endl;
        }
    }

}
