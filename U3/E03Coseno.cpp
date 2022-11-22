#include <iostream>
#include <math.h>
using namespace std;

#define n 6
#define PI 3.14159265358979323846


long double factorial (int num)
{
    long double ft=1.0;

    for (int i=1; i<=num; i++){
        ft=ft*i;
    }
    return ft;
}

double radianes(double grados){
    return grados * PI/180;
}

double cos(double x){
    double resultado=0;
    for (int i = 0; i <= n; i++)
    {
        resultado=resultado+(pow(-1, i)*((pow(x, 2*i))/factorial(2*i)));
    }
    return resultado;
}
int main(){ 
    double angulo=radianes(60), print;
    print=cos(angulo);
    cout <<"Coseno de 60° igual a "<< print<< endl;
    return 0;
}