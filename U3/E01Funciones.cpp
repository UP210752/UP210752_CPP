/*
Unidad 2
Funciones
Autor: Juan Pablo Ruíz Esparza Salazar
Fecha: 14 de Octubre
Descripción: Creamos una función que recibe de parametro un número y lo multiplica por dos

EJERCICIO: Crear una función camello donde dada una cadena "Upa" la pasamos a "uPA"
    (minus a mayus)
    (mayus a minus)
*/
#include <iostream>
#include <cmath>
using namespace std;

/*Dos formas de declarar una constante*/
const double E = 2.718281;
#define e 2.718281;
/*
Declaración de funciones
*/
string camello(string x)
{
    int lon = x.length();
    for (int i = 0; i < lon; i++)
    {
        if (islower(x[i]))
        {
            x[i] = toupper(x[i]);
        }
        else
        {
            x[i] = tolower(x[i]);
        }
    }
    return x;
}
int ec2(double x)
{
    return (pow(E, -x) + 4 * pow(x, 3) - 5);
}
int doble(int a)
{
    int r;
    r = a * 2;
    return r;
}
int ec(double x)
{
    int y = pow(x, 2) - 8 * x + 15;
    return y;
}
int sumatoria(int n)
{
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        y = y + i;
    }
    return y;
}
int main(int argc, char const *argv[])
{
    int o = 0;
    int n = 10;
    int x = 5;
    int r = doble(x);
    int i = sumatoria(n);
    cout << "Resultado:" << r << endl;
    i = sumatoria(n);
    cout << "La sumatoria de " << n << " es: " << i << endl;

   int k;
   for (int i = 0; i <=10; i++)
   {
        k=ec(i);
        cout<<"Cuando x= "<< i << " y=" <<k<<endl;
   }

    int s;
    s=ec2(1.051552);
    cout<<"Ecuación R= "<< s << endl;
    return 0;
    string res= camello("Upa");
    cout << res << endl;
}
