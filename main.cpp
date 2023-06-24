///Gonzalez Valenzuela Diego Nicolas
///Laboratorio 1 Comision 104 Sabado
///Legajo 28820
#include <iostream>
#include <locale.h>
#include "funciones.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int idPedido, idTorta, diasAnticipacionPedido, idCliente, idMedioContacto, i, j;
    float peso;

    ///punto 1
    bool clientesPunto1[600]{false};
    int contadorClientes=0;

    ///punto 2
    int clientesPunto2[600][7]{};

    ///punto 3
    float tortasPunto3[7]{};
    bool banderasPunto3[7]{false};
    string nombreTortas[7]={"Rogel","Selva negra","Cheescake","Chocotorta","Lemon pie","Balcarce","Chaja"};

    ///punto 4
    bool clientesPunto4[600]{false};

    cout <<"Ingrese el id del pedido: "<<endl;
    cin >> idPedido;

    while(idPedido>0){
        cout <<"Ingrese el id de la torta(entre 1 y 7): "<<endl;
    cin >> idTorta;
    cout <<"Ingrese el peso de la torta: "<<endl;
    cin >> peso;
    cout <<"Ingrese la cantidad de días de anticipación del pedido: "<<endl;
    cin >> diasAnticipacionPedido;
    cout <<"Ingrese el id del cliente(entre 800 y 1399): "<<endl;
    cin >> idCliente;
    cout <<"Ingrese el id del medio de contacto: "<<endl;
    cin >> idMedioContacto;

    ///punto 1
    if(diasAnticipacionPedido>90){
        clientesPunto1[idCliente-800]=true;
    }
    ///punto 2
    clientesPunto2[idCliente-800][idTorta-1]+=1;
    ///punto 3
    if(tortasPunto3[idTorta-1]== 0 &&banderasPunto3[idTorta-1]==false){
        tortasPunto3[idTorta-1]=peso;
        banderasPunto3[idTorta-1]=true;
    }else if(tortasPunto3[idTorta-1]<peso){
        tortasPunto3[idTorta-1]= peso;
    }
    ///punto 4
    if(idMedioContacto==1000 || idMedioContacto==3000){
        clientesPunto4[idCliente-800]=true;
    }



        cout <<"Ingrese el id del pedido: "<<endl;
    cin >> idPedido;
    }

    ///punto 1

    for (i=0;i<600;i++){
        if(clientesPunto1[i]==true){
            contadorClientes++;
        }
    }
    cout <<"La cantidad de clientes que realizaron pedidos con más de 90 días de anticipación es "<<contadorClientes<<". "<<endl;
    ///punto 2
    punto2(clientesPunto2);

    ///punto 3
    punto3(tortasPunto3, nombreTortas);

    ///punto 4
    for (i=0;i<600;i++){
                if(clientesPunto4[i]==false){
                cout <<"El cliente "<< i+800<< " no realizo pedidos ni en persona ni por Whatsapp. "<<endl;
                }

    }
    return 0;
}
