#include<iostream>

using namespace std;

main(){
    int iniciaMOX=0,iniciaMOY=0,sentidoMOX=0,sentidoMOY=0; // Mario Origital, Las coordenadas de inicio y su sentidos.
    int cInteraccion=0,interaccionX=0,interacionY=0; // Cantidad de interacciones y la interacci[on en x y y.
    int sentidoMC1X=0, sentidoMC1Y=0 ,sentidoMC2X=0, sentidoMC2Y=0; // Sentido de copia 1 y 2
    int marioC1X=0,marioC1Y=0,marioC2X=0,marioC2Y=0; // Coord de las copias
    bool C1=false,C2=false,C3=false,C4=false,C0=false,deadmonster1=false,deadmonster2=false,deadmonster3=false;
    int cMonster=0, monsterX1=0,monsterY1=0,monsterVida1=0; // Monster
    int monsterX2=0,monsterY2=0,monsterVida2=0; // Monster
    int monsterX3=0,monsterY3=0,monsterVida3=0; // Monster
    int ataqueMO=2, ataqueMC=1; // los ataques de Marios O y C para el Monster
    int cereza=0; //estrella     
    
/* 
    cout<<"Digite la posicion inicial de Mario Original y sus copias ";
        cin>>iniciaMOX>>iniciaMOY;
    marioC1X = iniciaMOX;
    marioC1Y = iniciaMOY;
    marioC2X = iniciaMOX;
    marioC2Y = iniciaMOY; */

 /*    cout<<"Digite el sentido de Mario Original ";
        cin>>sentidoMOX>>sentidoMOY;

    cout<<"Digite el sentido de la 1ra copia de Mario ";
        cin>>sentidoMC1X>>sentidoMC1Y;

    cout<<"Digite el sentido de la 2da copia de Mario ";
        cin>>sentidoMC2X>>sentidoMC2Y;
 */

 /*    //Sentido del Mario Original en la posicion inicial
    iniciaMOX *= (sentidoMOX);
    iniciaMOY *= (sentidoMOY);  */


       // Cantidad de SCRUTTLEBUGS

            cout<<"Digite cantidad de SCRUTTLEBUGS ";
                cin>>cMonster;



       // PARTE DE COORDENADAS Y VIDAS DEL SCRUTTLEBUGS

        if ((cMonster >= 1) && (cMonster <= 3)){
            cout<<"Locura";
            if ((cMonster >= 1) ){
                cout<<"Diga las ubicacion y sus vidas del SCRUTTLEBUGS ";
                    cin>>monsterX1>>monsterY1,monsterVida1;
                if (cMonster >= 2){
                    cout<<"Diga las ubicacion y sus vidas del SCRUTTLEBUGS ";
                        cin>>monsterX2>>monsterY2,monsterVida2;
                    if (cMonster >= 1){
                        cout<<"Diga las ubicacion y sus vidas del SCRUTTLEBUGS ";
                            cin>>monsterX3>>monsterY3,monsterVida3;
                    }
                }
            }
        }else{
                cout<<"Debe coolocar entre 1 o 3 monster";
            }

/* 
        // PARTE DE LA ENTRELLA EN EL MAPA

            cout<<"Digite Posicion de la estrella en el mapa ";
                cin>>cereza;
        

       // PARTE DE CANTIDAD DE INTERACCIONES
            cout<<"Digite cantidad de interacciones ";
                cin>>cInteraccion;

    for(int i = 0;i < cInteraccion;i++){

        //PARTE DE LAS COORDENAS DE LAS COPIAS

            cout<<"Diga las lineas de Movimiento del Maria Original "<<"["<<i<<"] ";
                cin>>interaccionX>>interacionY;
            cout<<"Interacion "<<interaccionX<<" "<<interacionY<<" "<<endl; 
            iniciaMOX+=(interaccionX*(sentidoMOX));
            iniciaMOY+=(interacionY*(sentidoMOY)); 

        // PARTE DE LAS CONDICIONES PARA MARIO COPIAS

            if((iniciaMOX == 0) && (iniciaMOY == 0) ){ // Si introduce esto debe salir algun error o hasta parar el programa.
                cout<<"cuadrante errado";
                C0=true;
            }
            else if((iniciaMOX >= 0) && (iniciaMOY >= 0)){ //"Cuadrante 1", el sentido del movimiento de las copias no cambiará.
                 C1=true;
            }
            else if((iniciaMOX < 0) && (iniciaMOY >= 0)){ //"Cuadrante 2", el sentido del movimiento de las copias cambiará en el eje X.
                sentidoMC1X *= (-1);
                sentidoMC2X *= (-1);
                C2=true;
            }
            else if((iniciaMOX < 0) && (iniciaMOY < 0)){//"Cuadrante 3", el sentido del movimiento de las copias cambiará en el eje Y.
                sentidoMC1Y *= (-1);
                sentidoMC2Y *= (-1);
                C3=true;
            }
            else if((iniciaMOX >= 0) && (iniciaMOY < 0)){ //"Cuadrante 4", el sentido del movimiento de las copias cambiará en el eje X y Y.
                sentidoMC1X *= (-1);
                sentidoMC2Y *= (-1);
                sentidoMC1Y *= (-1);
                sentidoMC2X *= (-1);
                C4=true;
            }else{
                cout<<"No hay sentido";
            }

                marioC1X+=(interaccionX*(sentidoMC1X));
                marioC1Y+=(interacionY*(sentidoMC1Y));
                marioC2X+=(interaccionX*(sentidoMC2X));
                marioC2Y+=(interacionY*(sentidoMC2Y));


            if (cMonster <= 1){
                
                    if ((iniciaMOX == monsterX1) && (iniciaMOY == monsterY1)) // Mario original
                    {
                            monsterVida1 -= ataqueMO; // Ataque de 2 puntos
                            if (monsterVida1 == 0){ // Valida si murio o no
                                    deadmonster1 = true;// Murio el monster

                        }else if ((marioC1X == monsterX1) && (marioC1Y == monsterY1)){ // Mario copia 1

                            monsterVida1 -= ataqueMC;// Ataque de 1 punto
                            if (monsterVida1 == 0){// Valida si murio o no
                                deadmonster1 = true;// Murio el monster
                            }else if ((marioC2X == monsterX1) && (marioC2Y == monsterY1)){ // Mario copia 2
                                monsterVida1 -= ataqueMC;// Ataque de 1 punto
                                if (monsterVida1 == 0){// Valida si murio o no
                                deadmonster1 = true;// Murio el monster
                                }
                            }
                            
                        }else if ((marioC2X == monsterX1) && (marioC2Y == monsterY1)){// Mario copia 2

                            monsterVida1 -= ataqueMC;// Ataque de 1 punto
                            if (monsterVida1 == 0){// Valida si murio o no
                            deadmonster1 = true;// Murio el monster
                            }

                        }else{
                            cout<<"\nERROR!!";
                        }
                    }
                        if (cMonster <= 2){

                            if ((iniciaMOX == monsterX2) && (iniciaMOY == monsterY2)) // Mario original
                            {
                                    monsterVida2 -= ataqueMO; // Ataque de 2 puntos
                                    if (monsterVida2 == 0){ // Valida si murio o no
                                            deadmonster2 = true;// Murio el monster

                                }else if ((marioC1X == monsterX2) && (marioC1Y == monsterY2)){ // Mario copia 1

                                    monsterVida2 -= ataqueMC;// Ataque de 1 punto
                                    if (monsterVida2 == 0){// Valida si murio o no
                                        deadmonster2 = true;// Murio el monster
                                    }else if ((marioC2X == monsterX2) && (marioC2Y == monsterY2)){ // Mario copia 2
                                        monsterVida2 -= ataqueMC;// Ataque de 1 punto
                                        if (monsterVida2 == 0){// Valida si murio o no
                                        deadmonster2 = true;// Murio el monster
                                        }
                                    }
                                    
                                }else if ((marioC2X == monsterX2) && (marioC2Y == monsterY2)){// Mario copia 2

                                    monsterVida2 -= ataqueMC;// Ataque de 1 punto
                                    if (monsterVida2 == 0){// Valida si murio o no
                                    deadmonster2 = true;// Murio el monster
                                    }

                                }else{
                                    cout<<"\nERROR!!";
                                }
                            }

                             if (cMonster <= 3){
                        
                                    if ((iniciaMOX == monsterX3) && (iniciaMOY == monsterY3)) // Mario original
                                        {
                                            monsterVida3 -= ataqueMO; // Ataque de 2 puntos
                                            if (monsterVida3 == 0){ // Valida si murio o no
                                                    deadmonster3 = true;// Murio el monster

                                        }else if ((marioC1X == monsterX3) && (marioC1Y == monsterY3)){ // Mario copia 1

                                            monsterVida3 -= ataqueMC;// Ataque de 1 punto
                                            if (monsterVida3 == 0){// Valida si murio o no
                                                deadmonster3 = true;// Murio el monster
                                            }else if ((marioC2X == monsterX3) && (marioC2Y == monsterY3)){ // Mario copia 2
                                                monsterVida3 -= ataqueMC;// Ataque de 1 punto
                                                if (monsterVida3 == 0){// Valida si murio o no
                                                deadmonster3 = true;// Murio el monster
                                                }
                                            }
                                            
                                        }else if ((marioC2X == monsterX3) && (marioC2Y == monsterY3)){// Mario copia 2

                                            monsterVida3 -= ataqueMC;// Ataque de 1 punto
                                            if (monsterVida3 == 0){// Valida si murio o no
                                            deadmonster3 = true;// Murio el monster
                                            }

                                        }else{
                                            cout<<"\nERROR!!";
                                        }
                                        }

                    }
                }
            }

                        if (deadmonster1 == true)
                        {
                            iniciaMOX = monsterX1;
                            iniciaMOY = monsterY1;
                            marioC1X = monsterX1;
                            marioC1Y = monsterY1;
                            marioC2X = monsterX1;
                            marioC2Y = monsterY1;
                        }else if(deadmonster2 == true){
                            iniciaMOX = monsterX2;
                            iniciaMOY = monsterY2;
                            marioC1X = monsterX2;
                            marioC1Y = monsterY2;
                            marioC2X = monsterX2;
                            marioC2Y = monsterY2;
                        }else if (deadmonster3 == true){
                            iniciaMOX = monsterX3;
                            iniciaMOY = monsterY3;
                            marioC1X = monsterX3;
                            marioC1Y = monsterY3;
                            marioC2X = monsterX3;
                            marioC2Y = monsterY3;
                        }else{
                            cout<<"Algo socio mal en la muerte del moster";
                        }
                        


                cout<<"\nMarioC1 "<<marioC1X<<" "<<marioC1Y<<" "<<endl;
                cout<<"\nMarioC2 "<<marioC2X<<" "<<marioC2Y<<" "<<endl;


            if (C0 == true){
                cout<<"\nCuadrante 0 \n";
            }else if(C1 == true){
                cout<<"\nCuadrante 1 \n"<<endl;
            }else if(C2 == true){
                cout<<"\nCuadrante 2 \n"<<endl;
            }else if(C3 == true){
                cout<<"\nCuadrante 3 \n"<<endl;
            }else if(C4 == true){
                cout<<"\nCuadrante 4 \n"<<endl;
            }else{
                cout<<"\nNo entro \n"<<endl;
            }

    } */
    return 0;
}