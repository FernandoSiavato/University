#include<iostream>

using namespace std;

int main(){

    int cifra1=0,cifra2=0,cifra3=0,x2=0,x3=0,y1=0,y2=0,y3=0,coordx=0,coordy=0;
    float x1=0;

     cin>>cifra1>>cifra2>>cifra3;

//1234

   // 1234/ 100
     x1 = (cifra1/100); //12,34
     cout<<"\nauxiliar  "<<x1<<endl;



     y1 = cifra1%100 ; // 34
     x2 = cifra2/100; // 12,34
     y2 = cifra2%100; // 34
     x3 = cifra3/100; // 12,34
     y3 = cifra3%100; // 34

     cout<<"\nEl punto de coordenada A del triangulo es "<<"x= "<<x1<<" y= "<<y1<<endl;
     cout<<"\nEl punto de coordenada B del triangulo es "<<"x= "<<x2<<" y= "<<y2<<endl;
     cout<<"\nEl punto de coordenada C del triangulo es "<<"x= "<<x3<<" y= "<<y3<<endl;

    coordx = (x1 + x2 + x3)/3;
    coordy = (y1 + y2 + y3)/3;

    cout<<"\nEl centroide del triangulo es "<<"x= "<<coordx<<" y= "<<coordy<<endl;

    return 0;
}