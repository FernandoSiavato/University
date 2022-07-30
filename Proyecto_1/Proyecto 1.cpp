#include<iostream>

using namespace std;

main(){
    int iniciaMOX=0,iniciaMOY=0,sentidoMOX=0,sentidoMOY=0; // Mario Origital, Las coordenadas de inicio y su sentidos.
    int cInteraccion=0,interaccionX=0,interacionY=0; // Cantidad de interacciones y la interacci[on en x y y.
    int sentidoMC1X=0, sentidoMC1Y=0 ,sentidoMC2X=0, sentidoMC2Y=0; // Sentido de copia 1 y 2
    int marioC1X=0,marioC1Y=0,marioC2X=0,marioC2Y=0; // Coord de las copias
    bool C1=false,C2=false,C3=false,C4=false,C0=false,deadmonster1=false,deadmonster2=false,deadmonster3=false;
    int cMonster=0, monsterX1=0,monsterY1=0,monsterVida1=0; // Monster1
    int monsterX2=0,monsterY2=0,monsterVida2=0; // Monster2
    int monsterX3=0,monsterY3=0,monsterVida3=0; // Monster2
    int ataqueMO=2, ataqueMC=1; // los ataques de Marios O y C para el Monster
    int j=0;
    int cerezaX=0,cerezaY=0; //Estrella
    bool perfectAli=false; // Perfectamente aliado
    

    cout<<"Digite la posicion inicial de Mario Original y sus copias ";
        cin>>iniciaMOX>>iniciaMOY;
    marioC1X = iniciaMOX;
    marioC1Y = iniciaMOY;
    marioC2X = iniciaMOX;
    marioC2Y = iniciaMOY;

    cout<<"Digite el sentido de Mario Original ";
        cin>>sentidoMOX>>sentidoMOY;

    cout<<"Digite el sentido de la 1ra copia de Mario ";
        cin>>sentidoMC1X>>sentidoMC1Y;

    cout<<"Digite el sentido de la 2da copia de Mario ";
        cin>>sentidoMC2X>>sentidoMC2Y;


       // Cantidad de SCRUTTLEBUGS
            fflush(stdin);
            cout<<"Digite cantidad de SCRUTTLEBUGS ";
                cin>>cMonster;

 
       // PARTE DE COORDENADAS Y VIDAS DEL SCRUTTLEBUGS

        if ((cMonster >= 1) && (cMonster <= 3)){
            if (cMonster >= 1){
                cout<<"Diga las ubicacion y sus vidas del SCRUTTLEBUGS ";
                    cin>>monsterX1>>monsterY1>>monsterVida1;
                if (cMonster >= 2){
                    cout<<"Diga las ubicacion y sus vidas del SCRUTTLEBUGS ";
                        cin>>monsterX2>>monsterY2>>monsterVida2;
                    if (cMonster >= 3){
                        cout<<"Diga las ubicacion y sus vidas del SCRUTTLEBUGS ";
                            cin>>monsterX3>>monsterY3>>monsterVida3;
                    }
                }
            }
        }else{
                cout<<"Algo esta mal en la creacion de los moster";
            }


        // PARTE DE LA ESTRELLA EN EL MAPA
            fflush(stdin);
            cout<<"Digite Posicion de la estrella en el mapa ";
                cin>>cerezaX>>cerezaY;

       // PARTE DE CANTIDAD DE INTERACCIONES
       fflush(stdin);
            cout<<"Digite cantidad de interacciones ";
                cin>>cInteraccion;
fflush(stdin);
    for(int i = 0;i < cInteraccion;i++){

        //PARTE DE LAS COORDENAS DE LAS COPIAS

            cout<<"\nDiga las lineas de Movimiento del Mario Original "<<"["<<i<<"] ";
                cin>>interaccionX>>interacionY;
 
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
                cout<<"No se cambiaron los sentidos por los cuadrantes";
            }

        // PARTE QUE COLOCA LAS INTERACCIONES DE MARIO COPIA
                marioC1X+=(interaccionX*(sentidoMC1X));
                marioC1Y+=(interacionY*(sentidoMC1Y));
                marioC2X+=(interaccionX*(sentidoMC2X));
                marioC2Y+=(interacionY*(sentidoMC2Y));


         // PARTE QUE HACE A MARIO SUPER FUERTE POR LA ESTRELLA
                 if ( (j==1) || (j==2))
                {
                    j++; //2 - 3
                    if (j==3){
                    ataqueMO = 2;
                    ataqueMC = 1;
                    }
                    
                } 
                
                cout<<"\nCereza vale "<<cerezaX<<" "<<cerezaY<<endl;

                if (((iniciaMOX == cerezaX) && (iniciaMOY == cerezaY)) || ((marioC1X == cerezaX) && (marioC1Y == cerezaY)) || ((marioC2X == cerezaX) && (marioC2Y == cerezaY)))
                {
                    cout<<"\nEl Mario es super fuerte";
                    ataqueMO = 1000;
                    ataqueMC = 1000;
                    j++; // 1
                }

                cout<<"\nAFUERA Mario "<<ataqueMO <<" Copia "<<ataqueMC<<endl;

        // PARTE EN LA QUE MARIO Y SUS COPIAS TIENEN OPORTUNIDAD PARA MATAR AL MOSTER

            if ((cMonster >= 1) && (cMonster <= 3)){
                cout<<"\nMario Original "<<iniciaMOX <<iniciaMOY<<endl;
                cout<<"\nMonster "<<monsterX1 <<" "<<monsterY1<<endl;
                


                    if ((iniciaMOX == monsterX1) && (iniciaMOY == monsterY1)) // Mario original
                    { cout<<"\nMO Mata a monster 1";

                            monsterVida1 -= ataqueMO; // Ataque de 2 puntos
                            cout<<"\nADENTRO Mario "<<ataqueMO <<" Copia "<<ataqueMC<<endl;
                        if (monsterVida1 <= 0){ // Valida si murio o no
                                deadmonster1 = true;// Murio el monster

                        }else if ((marioC1X == monsterX1) && (marioC1Y == monsterY1)){ // Mario copia 1

                            monsterVida1 -= ataqueMC;// Ataque de 1 punto
                            if (monsterVida1 <= 0){// Valida si murio o no
                                deadmonster1 = true;// Murio el monster
                            }else if ((marioC2X == monsterX1) && (marioC2Y == monsterY1)){ // Mario copia 2
                                monsterVida1 -= ataqueMC;// Ataque de 1 punto
                                if (monsterVida1 <= 0){// Valida si murio o no
                                deadmonster1 = true;// Murio el monster
                                }
                            }
                            
                        }else if ((marioC2X == monsterX1) && (marioC2Y == monsterY1)){// Mario copia 2

                            monsterVida1 -= ataqueMC;// Ataque de 1 punto
                            if (monsterVida1 <= 0){// Valida si murio o no
                            deadmonster1 = true;// Murio el monster
                            }

                        }else{
                            cout<<"\nError en la entrada";
                        }
                    }else if ((marioC1X == monsterX1) && (marioC1Y == monsterY1)){ // Mario copia 1

                            monsterVida1 -= ataqueMC;// Ataque de 1 punto
                            if (monsterVida1 <= 0){// Valida si murio o no
                                deadmonster1 = true;// Murio el monster
                            }else if ((marioC2X == monsterX1) && (marioC2Y == monsterY1)){ // Mario copia 2
                                monsterVida1 -= ataqueMC;// Ataque de 1 punto
                                if (monsterVida1 <= 0){// Valida si murio o no
                                deadmonster1 = true;// Murio el monster
                                }
                            }
                    }else if ((marioC2X == monsterX1) && (marioC2Y == monsterY1)){// Mario copia 2

                            monsterVida1 -= ataqueMC;// Ataque de 1 punto
                            if (monsterVida1 <= 0){// Valida si murio o no
                            deadmonster1 = true;// Murio el monster
                            }

                        }else{
                            cout<<"\nError en la entrada";
                        }








                        if (cMonster == 2){

                            if ((iniciaMOX == monsterX2) && (iniciaMOY == monsterY2)) // Mario original
                            {
                                    monsterVida2 -= ataqueMO; // Ataque de 2 puntos
                                    if (monsterVida2 <= 0){ // Valida si murio o no
                                            deadmonster2 = true;// Murio el monster

                                }else if ((marioC1X == monsterX2) && (marioC1Y == monsterY2)){ // Mario copia 1

                                    monsterVida2 -= ataqueMC;// Ataque de 1 punto
                                    if (monsterVida2 <= 0){// Valida si murio o no
                                        deadmonster2 = true;// Murio el monster
                                    }else if ((marioC2X == monsterX2) && (marioC2Y == monsterY2)){ // Mario copia 2
                                        monsterVida2 -= ataqueMC;// Ataque de 1 punto
                                        if (monsterVida2 <= 0){// Valida si murio o no
                                        deadmonster2 = true;// Murio el monster
                                        }
                                    }
                                    
                                }else if ((marioC2X == monsterX2) && (marioC2Y == monsterY2)){// Mario copia 2

                                    monsterVida2 -= ataqueMC;// Ataque de 1 punto
                                    if (monsterVida2 <= 0){// Valida si murio o no
                                    deadmonster2 = true;// Murio el monster
                                    }

                                }else{
                                    cout<<"\nError en la entrada";
                                }
                            }

                        }







                             if (cMonster == 3){
                        
                                    if ((iniciaMOX == monsterX3) && (iniciaMOY == monsterY3)) // Mario original
                                        {
                                            monsterVida3 -= ataqueMO; // Ataque de 2 puntos
                                            if (monsterVida3 <= 0){ // Valida si murio o no
                                                    deadmonster3 = true;// Murio el monster

                                        }else if ((marioC1X == monsterX3) && (marioC1Y == monsterY3)){ // Mario copia 1

                                            monsterVida3 -= ataqueMC;// Ataque de 1 punto
                                            if (monsterVida3 <= 0){// Valida si murio o no
                                                deadmonster3 = true;// Murio el monster
                                            }else if ((marioC2X == monsterX3) && (marioC2Y == monsterY3)){ // Mario copia 2
                                                monsterVida3 -= ataqueMC;// Ataque de 1 punto
                                                if (monsterVida3 <= 0){// Valida si murio o no
                                                deadmonster3 = true;// Murio el monster
                                                }
                                            }
                                            
                                        }else if ((marioC2X == monsterX3) && (marioC2Y == monsterY3)){// Mario copia 2

                                            monsterVida3 -= ataqueMC;// Ataque de 1 punto
                                            if (monsterVida3 <= 0){// Valida si murio o no
                                            deadmonster3 = true;// Murio el monster
                                            }

                                        }else{
                                            cout<<"\nError en la entrada";
                                        }
                                        }
                            }
                
            }
            
            
            
            
            fflush(stdin);
        // PARTE QUE REUBICAN A LOS MARIOS ORIGINAL Y COPIA, EN LA MISMA POSION QUE MUERE EL MONSTER
                        cout<<"\nDeaf sera true ? "<<deadmonster1;
                        if (deadmonster1 == true)
                        {
                            cout<<"\n Aliadao por Monster 1";
                            iniciaMOX = monsterX1;
                            iniciaMOY = monsterY1;
                            marioC1X = monsterX1;
                            marioC1Y = monsterY1;
                            marioC2X = monsterX1;
                            marioC2Y = monsterY1;
                            perfectAli=true;
                        }else if(deadmonster2 == true){
                            cout<<"\n Aliadao por Monster 2";
                            iniciaMOX = monsterX2;
                            iniciaMOY = monsterY2;
                            marioC1X = monsterX2;
                            marioC1Y = monsterY2;
                            marioC2X = monsterX2;
                            marioC2Y = monsterY2;
                            perfectAli=true;
                        }else if (deadmonster3 == true){
                            cout<<"\n Aliadao por Monster 3";
                            iniciaMOX = monsterX3;
                            iniciaMOY = monsterY3;
                            marioC1X = monsterX3;
                            marioC1Y = monsterY3;
                            marioC2X = monsterX3;
                            marioC2Y = monsterY3;
                            perfectAli=true;
                        }else{
                            cout<<"\nAlgo salio mal en la muerte del moster";
                        }
                        

                if ( perfectAli == true)
                {
                    cout<<"\nPerfectamente alineados "<<endl;
                }else{
                    cout<<"\nDesincronizacion total "<<endl;

                    cout<<"Posicion de la 1era copia:"<<" ("<<marioC1X<<","<<marioC1Y<<")"<<endl;

                    cout<<"Posicion de la 2da copia:"<<" ("<<marioC2X<<","<<marioC2Y<<")"<<endl;
                }

                cout<<"Posicion de la 1era copia:"<<" ("<<marioC1X<<","<<marioC1Y<<")"<<endl;

                cout<<"Posicion de la 2da copia:"<<" ("<<marioC2X<<","<<marioC2Y<<")"<<endl;


                if (deadmonster1 == false)
                {
                    cout<< "Posicion del Scuttlebug 1:"<<" ("<<monsterX1<<","<<monsterY1<<")"<<";"<<"Vida="<<monsterVida1<<endl;
                }

                if (deadmonster2 == false)
                {
                    cout<< "Posicion del Scuttlebug 2:"<<" ("<<monsterX2<<","<<monsterY2<<")"<<";"<<"Vida="<<monsterVida2<<endl;
                }

                if (deadmonster3 == false)
                {
                    cout<< "Posicion del Scuttlebug 3:"<<" ("<<monsterX3<<","<<monsterY3<<")"<<";"<<"Vida="<<monsterVida3<<endl;
                }
                
                
         // Esta parte no es necesaria.
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
 
    }
    return 0;
}