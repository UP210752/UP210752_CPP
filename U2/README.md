# Unidad 2

<center>
<b>Rentas</b>
</center>
<br>
[Muestra el impuesto que correspondiente a la renta anual]
<pre>
#include <iostream>
#include <stdio.h>

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
        printf("TTu impuesto corresponde a: 20% \n");
    }else if(renta>=35000 && renta<=60000){
        printf("Tu impuesto corresponde a: 30% \n");
    }else {
        printf("Tu impuesto corresponde a: 45% \n");
    }
}

}
</pre><br>

<center>
<b>Salida:</b>
</center>

<img src="img/renta.png" alt="Rentas">
<br>  

---

<center>
<b>Puntaje</b>
</center>
<br>
[Ingresa tu puntaje y te muestra la recompensa que te corresponde]

<pre>
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

</pre>

<center>
<b>Salida:</b>
</center>
<br>
<img src="img/puntaje.png" alt="Puntaje">
<br>  

---

<center>
<b>ABC</b>
</center>
<br>
[Imprime el abecedario en un diferente orden]


<pre>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char l= 'A';
    char l1= 'a';
    char l2= 'z';
    char l3= 'Z';

    for(int i=0; i<26; i++)
    {
        printf("%c \t", l);
        l=l+1;
    }
    printf("\n");
    printf("\n");
    for(int i=0; i<26; i++)
    {
        printf("%c \t", l1);
        l1=l1+1;
    }
    printf("\n");
    printf("\n");
    for(int i=0; i<26; i++)
    {
        printf("%c \t", l2);
        l2=l2-1;
    }
    printf("\n");
    printf("\n");
    for(int i=0; i<26; i++)
    {
        printf("%c \t ", l3);
        l3=l3-1;
    }
    printf("\n");
    printf("\n");

    return 0;
}
</pre>

<center>
<b>Salida:</b>
</center>
<br>
<img src="img/abc.png" alt="abc"> 

---

<center>
<b>Tablas</b>
</center>
<br>
[Uso de ciclos para imprimir las tablas de multiplicar]

<pre>
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

</pre>

<center>
<b>Salida:</b>
</center>
<br>
<img src="img/tablas.png" alt="tablas">

---

<center>
<b>While</b>
</center>
<br>
[ Muestra la tabla de multiplicar con ciclo while]

<pre>
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
        


        printf("\n ¿Continuar? ");
        scanf("%s", &opcion);

    }
    printf("USER INTERRUPTION");
    return 0;
}
</pre>
<center>
<b>Salida:</b>
</center>
<br>
<img src="img/while.png" alt="while">
<br>  

---

<center>
<b>For</b>
</center>
<br>
[Imprime las tablas de multiplicar del 1 al 10 con ciclo for]
<pre>
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

</pre>

<center>
<b>Salida:</b>
</center>
<br>
<img src="img/For.png" alt="for">