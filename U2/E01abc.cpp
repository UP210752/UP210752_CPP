/*Unidad 2.  
ABC
Autor: Juan Pablo Ruíz Esparza Salazar
Fecha: 29/09/2022
Descripcion: Imprime el abecedario en un diferente orden
*/

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
