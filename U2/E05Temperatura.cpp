#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int temperatura[5];
    int s = 0, promedio, mayor = 0, menor = 0;

    cout << "Ingrese 6 temperaturas" << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << "Ingrese la "<< i <<" temperatura " <<endl;
        cin >> temperatura[i];
        s = s + temperatura[i];
    }

    mayor = temperatura[0];
    menor = temperatura[0];

    for (int i = 0; i <= 5; i++)
    {
        if (temperatura[i] >= mayor)
        {
            mayor = temperatura[i];
        }
        else if (temperatura[i] < menor)
        {
            menor = temperatura[i];
        }
    }

    promedio = s / 6;
    cout << "El promedio de las temperaturas ingresadas es: " << promedio << endl;
    cout << "El mayor de las temperaturas ingresadas es: " << mayor << endl;
    cout << "El menor de las temperaturas ingresadas es: " << menor << endl;
    return 0;
}