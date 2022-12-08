#include <iostream>
#include <limits>
#include <cstdio>
#include <limits.h>
#include <string>


using namespace std;



void limpiarBuffer(void); 

/*void clrscr() {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {0, 0};
    DWORD count;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hStdOut, &csbi);
    FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y,
                               coord, &count);
    SetConsoleCursorPosition(hStdOut, coord);
}*/

/*void gotoxy(int x, int y) {
    HANDLE hconsola;
    COORD Wpos;
    Wpos.X = x;
    Wpos.Y = y;
    hconsola = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hconsola, Wpos);
}*/




void gotoxy(int x, int y) {
    // Coloca el cursor en la posicion (x,y)
    cout << "\033[" << y << ";" << x << "f";
}



void signo_gato() {
    // system("cls");
    int n = 1;
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            gotoxy(12+j*4, 7+i*3); cout << n ;
            n = n + 1;
        }
    }
    for (int i = 0; i <= 1; i++) {
        gotoxy( 11 , 9+i*3 ); cout << "---|---|---" ;
    }
    for (int i = 0; i <=7; i++)  {
        gotoxy( 14, 7+i ); cout << "|" ;
        gotoxy( 18, 7+i ); cout << "|" ;
    }

}

const char *llenar_espacios(int opcion){
    system("clear");
    switch (opcion)
    {
    case 1:  
        signo_gato();
        gotoxy(12, 8); cout<<"O";

    break;
    
    case 2:  
        system("cls");
        signo_gato();
        gotoxy(15,8); 
        gotoxy(15, 8); cout<<"O";  
        system("clear");

    break;
    case 3:  
        gotoxy(19, 8); cout<<"O";
    break;
    case 4:  
        gotoxy(12, 11); cout<<"O";
    break;
    case 5:  
        gotoxy(15, 11); cout<<"O";
    break;
    case 6:  
        gotoxy(19, 11); cout<<"O";
    break;
    case 7:  
        gotoxy(12, 13); cout<<"O";
    break;
    case 8:  
        gotoxy(15, 13); cout<<"O";
    break;
    case 9:  
        gotoxy(19, 13); cout<<"O";
    break;
    default:
        while (opcion<=9)
        {
            cout<<"Ingrese un  numero de tablero";
            cin>>opcion;
        }
        
    break;
    }
}

int main(int argc, char const *argv[]) {
    int opO, opX;
    system("clear");
    signo_gato();
    gotoxy(40,20); cout << ". . . Hecho" << endl;
    cout<<"Turno jugador (O)";
    cin>>opO;
    llenar_espacios(opO);
    return 0;
    
}

void limpiarBuffer(){
    (void) cin.ignore(numeric_limits<streamsize>::max(), '\n');
}