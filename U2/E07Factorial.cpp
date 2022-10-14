#include <iostream>
#include <stdio.h>
int main()
{
    int fac = 0;
    printf("Ingresa numero para calcular el factorial ");
    scanf("%d", &fac);
    if(fac<=0){
        printf("Error, introduzca un número real positivo");
    }
    int temp = fac - 1;
    int r = fac;
    while (temp >= 1)
    {
        r = r * temp;
        temp--;
    }

    printf("El factorial de %d es: %d ", fac, r);
    
}