#ifndef HERRAMIENTAS_H_INCLUDED
#define HERRAMIENTAS_H_INCLUDED

void Ramdom_map(char mapa[11][30]){

     char mapa_1[11][30] = {
        "#############################",
        "#Aoooxxooooxxoooxxooooxxoooo#",
        "#ooooxxooooxxoooxxooooxxoooo#",
        "#ooooooooooooooooooooooooooo#",
        "#oo#######################oo#",
        "#oo#######################oo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooxxooooxxoooxxooooxxoooo#",
        "#ooooxxooooxxoooxxooooxxoooo#",
        "#############################"
        };
    char mapa_2[11][30] = {
        "#############################",
        "#Aooo#ooooo#ooooooo#oooooooo#",
        "#oooo#ooooo#oooo#ooooooo##oo#",
        "#oooo#oo#oooooooooo#oooooooo#",
        "###ooooo#oo#oooo#ooooooo##oo#",
        "###ooooo#oo#oooo#ooooooooooo#",
        "#oooo#oo#oooooooooo#oooo##oo#",
        "#oooo#ooooo#oooo#ooooooooooo#",
        "#oooo#ooooo#ooooooo#oooo##oo#",
        "#############################"
        };
    char mapa_3[11][30] = {
        "#############################",
        "#Aooooooooooooxooooooooooooo#",
        "#ooxxxxxxxxxxxxxxxxxxxxxxxoo#",
        "#oooooooooooooxooooooooooooo#",
        "#oooo####oooo#x#oooo####oooo#",
        "#oooo####oooo#x#oooo####oooo#",
        "#oooooooooooooxooooooooooooo#",
        "#ooxxxxxxxxxxxxxxxxxxxxxxxoo#",
        "#oooooooooooooxooooooooooooo#",
        "#############################"
        };
    char mapa_4[11][30] = {
        "#############################",
        "#Aoooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#############################"
        };
    char mapa_5[11][30] = {
        "#############################",
        "#Aoooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#############################"
        };
    char mapa_6[11][30] = {
        "#############################",
        "#Aoooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#ooooooooooooooooooooooooooo#",
        "#############################"
        };

    int x;

    int dado;
    int cont;

    srand(time(0));

    dado = ((rand()) % 6) + 1;

    switch(dado){
        case 1:

            for(x=0;x<10;x++){
                strcpy(mapa[x], mapa_1[x]);
            }

        break;
        case 2:

            for(x=0;x<10;x++){
                strcpy(mapa[x], mapa_2[x]);
            }

        break;
        case 3:

            for(x=0;x<10;x++){
                strcpy(mapa[x], mapa_3[x]);
            }

        break;
        case 4:

            for(x=0;x<10;x++){
                strcpy(mapa[x], mapa_4[x]);
            }

        break;
        case 5:

            for(x=0;x<10;x++){
                strcpy(mapa[x], mapa_5[x]);
            }

        break;
        case 6:

            for(x=0;x<10;x++){
                strcpy(mapa[x], mapa_6[x]);
            }

        break;
    }

}

void Mostrar_mapa(char mapa[11][30]){

    int x, y;

    cout<< endl<< endl;

    for(x=0;x<10;x++){
        for(y=0;y<30;y++){

            if(mapa[x][y] == 'A'){
                setColor(GREEN);
            }
            if(mapa[x][y] == '#'){
                setColor(LIGHTRED);
            }
            if(mapa[x][y] == 'x'){
                setColor(YELLOW);
            }
            if(mapa[x][y] == 'o'){
                setColor(WHITE);
            }

            cout<< mapa[x][y];
        }
        cout<< endl;
    }
    setColor(WHITE);

}

bool Mover_avatar(char mapa[30][30], int *act_x, int *act_y, int fut_x, int fut_y){

    if(mapa[fut_x][fut_y] == 'o'){

        mapa[fut_x][fut_y] = 'A';
        mapa[*act_x][*act_y] = 'x';

        *act_x = fut_x;
        *act_y = fut_y;

        return false;
    }
    if(mapa[fut_x][fut_y] == 'x'){

        mapa[fut_x][fut_y] = 'A';
        mapa[*act_x][*act_y] = '#';

        *act_x = fut_x;
        *act_y = fut_y;

        return false;
    }

    return true;

}



#endif // HERRAMIENTAS_H_INCLUDED
