#include <iostream>
#include <stdlib.h>
#include <time.h>
#define F 4
#define C 4

using namespace std;


void diagonal(int A[F][C]){
    for (int i = 0; i < F; i++)
    {
        cout<< A[i][i]<<"\t";
    }
    
}
//Programa que ingrese 10 califaciones en un vector aleatorias pero SIN REPETIR alguna 

int calificaciones(int x[5]){
    srand(time(NULL));
    int y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            x[i]=rand()%11;
            if (x[i]!=x[i])
            {
                true;
                cout<<x[i]<<endl;

            }else{
                false;
            }
            
        }
        
    }
    return y;
}

void transpuesa(int A[F][C]){
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < F; j++)
        {
            cout<< A[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void llenarM(int A[F][C])
{
    int contador = 1;
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            A[i][j] = contador;
            contador++;
        }
    }
}

void llenarM__(int A[][C])
{
    int contador = 1;
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            A[i][j] = contador;
            contador++;
        }
    }
}
void imprimirM(int A[F][C])
{
    int contador = 1;
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << endl;
}
int main()
{
    int A[F][C];
    int x[5];
    //llenarM(A);
    //imprimirM(A);
    //transpuesa(A);
    calificaciones(x);
}
