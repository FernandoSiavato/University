#include<iostream>

using namespace std;

int main(){

/* Ejercicio 11: Hacer un programa que simule un cajero automático con un saldo inicial
de 1000 Dólares. */

    int saldoIni=1000,saldoReti=0,nMenu=0;


    cout<<"1. Consultar saldo"<<endl;
    cout<<"2. Retirar saldo"<<endl;
    cout<<"3. Salir"<<endl;
    cin>>nMenu;

    switch (nMenu)
    {
    case 1: cout<<saldoIni;break;
    case 2: 
    cout<<"Cantidad de salgo que desea retirar? ";
    cin>>saldoReti;
    saldoIni = saldoIni - saldoReti;
    cout<<"Saldo restante "<<saldoIni
    ;break;
    case 3: cout<<"Gracias por visitarnos";break;
    default: cout<<"No coincide ninguna de las opciones"; break;
    }
   return 0;
}