/*
Unidad 2
Ecuación Cuadrática 
Autor: Juan Pablo Ruíz Esparza Salazar
Fecha: 11 de Octubre 
Descripción: Resolver la siguiete ecuación cuadrática x2 -8x +15=0
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int x,b,x1,x2,c;
    float formula=0;
    cout<<"Ingresa el coeficiente del término cuadrático";
    cout<<"\n";
    cin>>x;
    cout<<"Ingresa el segundo término dependiente";
    cout<<"\n";
    cin>>b;
    cout<<"Ingresa el término independiente";
    cout<<"\n";
    cin>>c;
    formula=(b*b) - (4*x*c);
    x1=(-b + sqrt(formula))/2*x;
    x2=(-b + sqrt(formula))/2*x;
    cout<<"Resultado de x1 y x2:";
    cout<<"\n";
    cout<<"x1=" << x1 << endl;
    cout<<"\n";
    cout<<"x2=" << x2 << endl;
    
    return 0;
}
