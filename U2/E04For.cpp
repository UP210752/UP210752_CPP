/* Unidad 2.
For
Autor: Juan Pablo Ruíz Esparza Salazar
Fecha: 7/10/2022
Descripción: Imprime las tablas de multiplicar del 1 al 10 con ciclo for
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int r=0;

    for (int i =1; i<=10; i++)
    {
        for(int j =1; j<=10; j++)
        {
            r=i*j;
            printf("%d x %d = %d",i,j,r);
            printf("\n");
        }
    
        printf("\n");
    }
    return 0;
}
