/*Unidad 2. 
Tramos
Autor: Juan Pablo Ruíz Esparza Salazar
Fecha: 27/09/2022
Descripcion: Muestra el impuesto que correspondiente a la renta anual
*/
#include<iostream>
#include<stdio.h>

using namespace std;

main(){

float renta;

printf("Ingresa tu renta anual:");
scanf("%f", &renta);

if(renta>=1){
    if (renta<10000){
        printf("Tu impuesto es de 5% \n");
    }else if (renta>=10000 && renta<20000) {
        printf("Tu impuesto corresponde a: 15% \n");
    }else if(renta>=20000 && renta<35000){
        printf("Tu impuesto corresponde a: 20% \n");
    }else if(renta>=35000 && renta<=60000){
        printf("Tu impuesto corresponde a: 30% \n");
    }else {
        printf("Tu impuesto corresponde a: 45% \n");
    }
}

}
