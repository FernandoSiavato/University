#include<iostream>

using namespace std;

/* Ejercicio 8: Escribe un programa que lea de la entrada estándar tres números. Después
debe leer un cuarto número e indicar si el número coincide con alguno de los
introducidos con anterioridad. */

int main(){

    int n1=0,n2=0,n3=0,n4E=0;

    cin>>n1>>n2>>n3>>n4E;

    if (n1 == n4E){
        cout<<"coincide con el primer numero"<<endl;
    }else if(n2 == n4E){
        cout<<"coincide con el  segundo numero"<<endl;
    }else{
        cout<<"coincide con el tercer numero"<<endl;
    }

    return 0;
}