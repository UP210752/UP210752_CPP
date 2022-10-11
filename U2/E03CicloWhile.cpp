/* Unidad 2. 
While
Autor: Juan Pablo Ruíz Esparza Salazar
Fecha: 07/10/2022
Descripcion: Muestra la tabla de multiplicar con ciclo while
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i;
    char opcion='s';
    printf ("Tabla de multiplicar \n");

    while (opcion=='s')
    {
        printf("Numero:");
        scanf("%d", &n);

        i= 1;
        do
        {
            printf("%d x %d = %d \n", n,i,n*1);
            i++;
        } while (i<=10);
        


        printf("\n ¿Continuar? <s/n>");
        scanf("%s", &opcion);

    }
    printf("USER INTERRUPTION");
    return 0;
}

