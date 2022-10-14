/*
Unidad 2
Switch Case
Autor: Juan Pablo Ruíz Esparza Salazar
Fecha: 14 de Octubre
Descripción:
*/

#include <iostream>
using namespace std;

int main()
{
    int r = 0, a = 6, b = 2;
    int opcion;
    cout << "Operaciones <1..4>";
    cin >> opcion;
    while (opcion != 0)
    {
        switch (opcion)
        {
        case 1:
            cout << "Suma" << endl;
            break;
        case 2:
            cout << "Resta" << endl;
            break;
        case 3:
            cout << "Multiplicación" << endl;
            break;
        case 4:
            cout << "División" << endl;
            if (b != 0)
            {
                r = a / b;
                cout << "Resultado: " << r << endl;
            }
            else
            {
                cout << "ERROR/ DIVISION ENTRE 0 INDETERMINADA" << endl;
            }
            break;
        default:
            cout << "Opción inválida / solo acepta valores del <1..4>" << endl;
        }
        cout << "Operaciones <1..4> <0=Salir>";
        cin >> opcion;
    }
    
    return 0;
}