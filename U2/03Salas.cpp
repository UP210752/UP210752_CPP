#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int edad;
    cout << "ingresa la edad" << endl;
    cin >> edad;

    if (edad < 4)
    {
        cout << "Entrada gratis :)";
    }
    else if (edad >= 4 & edad <= 18)
    {
        cout << "Precio de la entrada: $5.00";
    }
    else if (edad > 18)
    {
        cout << "Precio de la entrada: $10.00";
    }
    return 0;
}