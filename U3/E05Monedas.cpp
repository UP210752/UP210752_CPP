#include <iostream>
using namespace std;

int main(){
    int pago;
    cin>>pago;
    int resultado=0;
    resultado=pago/1000;
    pago%=1000;
    cout<<"Billete de 1000["<<resultado<<"]"<<endl;
    resultado=pago/500;
    pago%=500;
    cout<<"Billete de 500["<<resultado<<"]"<<endl;
    resultado=pago/200;
    pago%=200;
    cout<<"Billete de 200["<<resultado<<"]"<<endl;
    resultado=pago/100;
    pago%=100;
    cout<<"Billete de 100["<<resultado<<"]"<<endl;
    resultado=pago/50;
    pago%=50;
    cout<<"Billete de 50["<<resultado<<"]"<<endl;
    resultado=pago/20;
    pago%=20;
    cout<<"Billete de 20["<<resultado<<"]"<<endl;
    resultado=pago/10;
    pago%=10;
    cout<<"Billete de 10["<<resultado<<"]"<<endl;
    resultado=pago/5;
    pago%=5; 
    cout<<"Billete de 5["<<resultado<<"]"<<endl;
    resultado=pago/2;
    pago%=2;
    cout<<"Billete de 2["<<resultado<<"]"<<endl;
    resultado=pago/1;
    pago%=1;
    cout<<"Billete de 1["<<resultado<<"]"<<endl;
}

