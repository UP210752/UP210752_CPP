/*
Unidad 1.  
Edades
Autor: Juan Pablo Ruíz Esparza Salazar
Fecha: 16/09/2022
Descripcion: Por medio de intervalos el usuario ingresa su edad y se le indica en que etapa está viviendo.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int edad;
    printf("Ingrese su edad límite 150 \n");
    scanf("%d", &edad);
    
    if (edad >= 1 && edad <= 150){
        if (edad >= 1 && edad <= 30){

            printf("Primera edad \n");
        }
        else if (edad >= 31 && edad <= 60){

            printf("Segunda edad \n");
        }
        else if (edad >= 61 && edad <= 90)
        {
            printf("Tercera edad \n");
        }
        else if (edad>=91 && edad<=150){

            printf("Horas extras :O \n");
        }
    
        
    }
    else{

    printf("Número invalido \n");
    }

return 0;
}
