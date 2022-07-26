#include<iostream>

using namespace std;

int main(){

   /*  Ejercicio 5: Escriba un programa que lea de la entrada estándar un carácter e indique
        en la salida estándar si el carácter es una vocal minúscula o no. */

    char v1;
    cin>>v1;

    switch (v1){
    case 'a': cout<<"Esta vocal es minuscula";break;
    case 'e': cout<<"Esta vocal es minuscula";break;
    case 'i': cout<<"Esta vocal es minuscula";break;
    case 'o': cout<<"Esta vocal es minuscula";break;
    case 'u': cout<<"Esta vocal es minuscula";break;
    case 'A': cout<<"Esta vocal es minuscula";break;
    case 'E': cout<<"Esta vocal es minuscula";break;
    case 'I': cout<<"Esta vocal es minuscula";break;
    case 'O': cout<<"Esta vocal es minuscula";break;
    case 'U': cout<<"Esta vocal es minuscula";break;
    default: cout<<"No es una mierda"; break;
    }

    return 0;
}