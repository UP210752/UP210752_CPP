/*Unidad 2.  
Tablas de multiplicar.
Autor: Juan Pablo Ruíz Esparza Salazar
Fecha: 29/09/2022
Descripcion: Uso de ciclos para imprimir las tablas de multiplicar
*/
#include <iostream>
#include<stdio.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    int r=0;
    int conti = 10;
    int cont=1;
    int a=1;
    int b=10;

    printf("Ingresa un número");
    scanf("%d", &n);
     printf ("\n");

    for (int i=1; i<=10; i++)
    {
        r=n*i;
        printf("%d x %d = %d ", n ,i, r);
        printf ("\n");
    }
     printf ("\n");
    r=0;

    for (int j=10; j>=1; j--)
    {
        r=n*j;
        printf("%d x %d = %d ", n ,j, r);
        printf ("\n");
    }
    r=0;

    printf ("\n");

    while (cont<=10)
    {
        r=n*cont;
        printf("%d x %d = %d ", n ,cont, r);
        printf ("\n");
        cont=cont+1;
    }

     printf ("\n");

    while (conti>=1)
    {
        r=n*conti;
        printf("%d x %d = %d ", n ,conti, r);
        printf ("\n");
        conti=conti-1;
    }

    printf ("\n");

    do{
        r=n*a;
        printf("%d x %d = %d ", n ,a, r);
        printf ("\n");
        a=a+1; 
    }while (a<=10);

    printf ("\n");

    a=10;
    do{
        r=n*a;
        printf("%d x %d = %d ", n ,a, r);
        printf ("\n");
        a=a-1; 
    }while (a>=1);
    

    return 0;
}
