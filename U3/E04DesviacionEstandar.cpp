#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float xi[5]={600.0, 470.0, 170.0, 430.0, 300.0};
    float media=394.0;
    float desviacion=0.0;
    float resultado=0.0;        
    for (int i = 0; i <=5; i++)
    {
        desviacion=sqrt(pow((xi[i]-media)*1/5, 2));
        resultado=resultado + desviacion;
    }
    cout<<"Desviación="<<resultado<<endl;
}