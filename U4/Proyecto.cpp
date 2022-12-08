#include <stdio.h>
#include <iostream>
using namespace std;

int ganadorx(char matriz[3][3], int ganador=0){
    if (matriz[0][0] == 'x' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] || matriz[1][0] == 'x' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] || matriz[2][0] == 'x' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]

            || matriz[0][0] == 'x' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] || matriz[0][1] == 'x' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] || matriz[0][2] == 'x' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]

            || matriz[0][0] == 'x' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] || matriz[0][2] == 'x' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0])
        {
            ganador = 1;
            cout << "Felicidades jugador X" << endl;
            exit(0);
        }
        return ganador;
}
int ganadoro(char matriz[3][3], int ganador=0){
    if (matriz[0][0] == 'o' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] || matriz[1][0] == 'o' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] || matriz[2][0] == 'o' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]

            || matriz[0][0] == 'o' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] || matriz[0][1] == 'o' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] || matriz[0][2] == 'o' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]

            || matriz[0][0] == 'o' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] || matriz[0][2] == 'o' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0])
        {
            ganador = 1;
            cout << "Felicidades jugador O" << endl;
            exit(0);
        }
    return ganador;
}
int main()
{

    char matriz[3][3];
    printf("Juego del gato!\n");
    int contador=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = ' ';
            printf("{%c}", matriz[i][j]);
        }
        printf("\n");
    }

    int fila, columna, ganador = 0, turno = 1;

    do
    {
        if (turno % 2 == 1)
        {
            do
            {
                cout << "Jugador X:" << endl;
                cout <<endl<<"FILA" << endl;
                scanf("%d", &fila);
                cout <<endl<<"COLUMNA" << endl;
                scanf("%d", &columna);
                if (matriz[fila][columna] == 'x' || matriz[fila][columna] == 'o' || columna > 2 || fila > 2)
                {
                    cout << endl;
                }
            } while (matriz[fila][columna] == 'x' || matriz[fila][columna] == 'o' || columna > 2 || fila > 2);
            matriz[fila][columna] = 'x';
            system("clean");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("{%c}", matriz[i][j]);
                }
                printf("\n");
            }
            turno++;
        }
        else if (turno % 2 == 0)
        {
            do
            {
                cout << "Jugador O" << endl;
                cout <<endl<<"FILA" << endl;
                scanf("%d", &fila);
                cout <<endl<<"COLUMNA" << endl;
                scanf("%d", &columna);

                if (matriz[fila][columna] == 'x' || matriz[fila][columna] == 'o' || columna > 2 || fila > 2)
                {
                    cout <<endl<<"Ingresa otro valor";
                }
            } while (matriz[fila][columna] == 'x' || matriz[fila][columna] == 'o' || columna > 2 || fila > 2);

            matriz[fila][columna] = 'o';

            system("clear");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("{%c}", matriz[i][j]);
                }
                cout << endl;
            }
            turno++;
        }
        // posiciones ganadores de jugador 1
        int gx,go;
        gx=ganadorx(matriz, ganador);
        // posiciones ganadores de jugador 2
        go=ganadoro(matriz, ganador);
    } while (ganador < 1);
    return 0;
}

