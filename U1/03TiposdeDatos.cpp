/*Unidad 1.  
Tipos de datos
Autor: Juan Pablo Ruíz Esparza Salazar
Fecha: 15/09/2022
Descripcion: Información sobre los tipos de variables en c++
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int entero =2142234;
    float flotante = 3.4e38;
    double grande = 2.32334534;
    char caracter = '@';

    cout << "Este programa muestra los tipos de variables \n";
    cout << "El número entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << "bytes"<< endl;
    cout << "El número del flotante es: " << sizeof(flotante) << "bytes" << endl;
    return 0;
}