/*Unidad 1. 
Ciclos
Autor: Juan Pablo Ruíz Esparza Salazar 
Fecha: 19/09/2022
Descripcion: Uso de ciclos para contar números pares e impares.
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int suma = 0;
    int pares=0;
    int impares=0;
    int total=0;


    for (int i = 0; i <= n; i++)
    {      
        suma = suma + i;
        if (i % 2==0){
            pares=pares+1;
        }
        else{
            impares=impares+1;
        }

        total=total+1;
    }
    /*
    Salida
    */
    printf("Hay %d números pares\n",pares);
    printf("Hay %d números impares\n",impares);
    printf("Hay %d números en total\n",total);
    printf("La suma de %d numeros es %d ",n,suma);
    printf("\n");

    return 0;
}
