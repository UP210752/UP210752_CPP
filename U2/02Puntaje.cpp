/*Unidad 2.  
Puntaje.
Autor: Juan Pablo Ruíz Esparza Salazar
Fecha: 07/10/2022
Descripcion: -Segundo trabajo del PDF- 
*/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float p;
    int n;
    printf("¿Cual es tu puntuacion? \n");
    scanf("%f",&p);
    
    if(p==0.0 || p==round(0.4) || p>=0.6)
    {
        if (p==0.0)
        {
            n=2400*0.0;
            printf("Tu nivel es inaceptable :(  y recibirás %d $ \n",n);
        }else if(p==0.4)
        {
            n=2400*0.4;
            printf("Tu nivel es aceptable ._. y recibirás %d $ \n",n);
        }else if(p>=0.6)
        {
            n=2400*p;
            printf("Tu nivel es meritorio :) y recibirás %d $ \n",n);
        }
        
    }

    return 0;
}
