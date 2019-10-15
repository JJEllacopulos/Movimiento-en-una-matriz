//Nombre: Jonathan Jesus Ellacópulos
/*Comentarios: */

#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<ctime>
#include<string.h>

using namespace std;

#include "rlutil.h"

using namespace rlutil;

#include"Herramientas.h"

int main (){

    ///Mapa
    char mapa[11][30];

    Ramdom_map(mapa);

    int x = 1, y = 1;

    ///Control
    char comando;

    ///Variables de efectos
    bool impacto;
    int puntuacion = 0;

    while(true){

        Mostrar_mapa(mapa);

        cout<< endl<< endl;
        cout<< "Ariba (w)."<< endl;
        cout<< "Abajo (s)."<< endl;
        cout<< "Derecha (d)"<< endl;
        cout<< "Izquierda (a)."<< endl;
        cout<< "Finalizar (x)."<< endl;
        comando = getch();

        system("cls");

        switch(comando){
            case 'w':
                impacto = Mover_avatar(mapa,&x, &y, x-1, y);
            break;
            case 's':
                impacto = Mover_avatar(mapa,&x, &y, x+1, y);
            break;
            case 'd':
                impacto = Mover_avatar(mapa,&x, &y, x, y+1);
            break;
            case 'a':
                impacto = Mover_avatar(mapa,&x, &y, x, y-1);
            break;
            case 'x':
                cout<< "Puntuacion: "<< puntuacion<< endl;
                cout<< "Gracias por jugar."<< endl;
                return 0;
            break;
        }
        if(impacto){
            cout<< "Puntuacion: "<< puntuacion<< endl;
            cout<< "Te haz golpeado contra un muro. fin."<< endl;
            return 0;
        }

        puntuacion ++;
    }



    ///cout<< Ramdom_int (20, 10)<< endl;

    system("pause");

}
