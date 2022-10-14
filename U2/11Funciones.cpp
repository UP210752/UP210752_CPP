/*
Unidad 2
Funciones
Autor: Juan Pablo Ruíz Esparza Salazar
Fecha: 14 de Octubre 
Descripción: Creamos una función que recibe de parametro un número y lo multiplica por dos
*/
#include <iostream>
using namespace std;

int doble(int a) {
    int r;
    r=a*2;
    return r;
}
int sumatoria(int n){
    int y=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+i;
    }
    cout<<"Sumatoria: " <<sum<<endl;  
    return y;
}
int main(int argc, char const *argv[])
{
    int x=5;
    int r=doble(x);
    cout<<"Resultado:" << r << endl;
    return 0;
    int y;
    cin>>y;
    int sa=sumatoria(y);
}
