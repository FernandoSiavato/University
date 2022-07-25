#include<iostream>

using namespace std;

main(){
    int iniciaMOX=0,iniciaMOY=0,sentidoMOX=0,sentidoMOY=0; //Las coordenadas de inicio
    int cInteraccion=0,interaccionX=0,interacionY=0;
    // int coordY=0, coordX=0;

    cout<<"Digite la posicion inicial de Mario Original ";
    cin>>iniciaMOX>>iniciaMOY;

    cout<<"Digite el sentido de Mario Original ";
    cin>>sentidoMOX>>sentidoMOY;

    //Sentido del Mario Original en la posicion inicial
    iniciaMOX = iniciaMOX*(sentidoMOX);
    iniciaMOX = iniciaMOY*(sentidoMOY);
    
    cout<<"Digite cantidad de interacciones ";
    cin>>cInteraccion;

    for(int i = 0;i < cInteraccion;i++){
            cout<<"Diga las lineas de Movimiento del Maria Original "<<"["<<i<<"] ";
            cin>>interaccionX>>interacionY;
            iniciaMOX=iniciaMOX+(interaccionX*(sentidoMOX));
            iniciaMOY=iniciaMOY+(interacionY*(sentidoMOY));
        }

        cout<<"posicion "<<iniciaMOX<<" "<<iniciaMOY<<" "<<endl; 

    return 0;
}