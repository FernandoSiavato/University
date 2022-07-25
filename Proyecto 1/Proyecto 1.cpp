#include<iostream>

using namespace std;

main(){
    int iniciaMOX=0,iniciaMOY=0,sentidoMOX=0,sentidoMOY=0; // Mario Origital, Las coordenadas de inicio y su sentidos.
    int cInteraccion=0,interaccionX=0,interacionY=0; // Cantidad de interacciones y la interacci[on en x y y.
    int sentidoMC1X=0, sentidoMC1Y=0 ,sentidoMC2X=0, sentidoMC2Y=0; // Sentido de copia 1 y 2
    // int cMoster=0, moster;
    

    cout<<"Digite la posicion inicial de Mario Original ";
    cin>>iniciaMOX>>iniciaMOY;

    cout<<"Digite el sentido de Mario Original ";
    cin>>sentidoMOX>>sentidoMOY;

    cout<<"Digite el sentido de la 1ra copia de Mario ";
    cin>>sentidoMC1X>>sentidoMC1Y;

    cout<<"Digite el sentido de la 2da copia de Mario ";
    cin>>sentidoMC2X>>sentidoMC2Y;


    //Sentido del Mario Original en la posicion inicial
    iniciaMOX *= (sentidoMOX);
    iniciaMOY *= (sentidoMOY);

    
    if((iniciaMOX == 0) && (iniciaMOY == 0) ){ // Si introduce esto debe salir algun error o hasta parar el programa.
		"cuadrante errado";
	}
    else if((iniciaMOX >= 0) && (iniciaMOY >= 0)){ //"Cuadrante 1", el sentido del movimiento de las copias no cambiará.
	}
    else if((iniciaMOX < 0) && (iniciaMOY >= 0)){ // "Cuadrante 2", el sentido del movimiento de las copias cambiará en el eje X.
        sentidoMC2X *= (-1);
        sentidoMC1X *= (-1);
	}
    else if((iniciaMOX < 0) && (iniciaMOY < 0)){// "Cuadrante 3", el sentido del movimiento de las copias cambiará en el eje Y.
		sentidoMC2Y *= (-1);
        sentidoMC1Y *= (-1);
	}
    else if((iniciaMOX >= 0) && (iniciaMOY < 0)){ // "Cuadrante 4", el sentido del movimiento de las copias cambiará en el eje X y Y.
		sentidoMC1X *= (-1);
        sentidoMC2Y *= (-1);
        sentidoMC1Y *= (-1);
        sentidoMC2X *= (-1);
	}else{
        cout<<"No hay sentido";
    }
    
    cout<<"Digite cantidad de interacciones ";
    cin>>cInteraccion;

    for(int i = 0;i < cInteraccion;i++){
            cout<<"Diga las lineas de Movimiento del Maria Original "<<"["<<i<<"] ";
            cin>>interaccionX>>interacionY;
            iniciaMOX+=(interaccionX*(sentidoMOX));
            iniciaMOY+=(interacionY*(sentidoMOY));
        }

        cout<<"posicion "<<iniciaMOX<<" "<<iniciaMOY<<" "<<endl; 

    return 0;
}