#include<iostream>
#include<cstdlib>
using namespace std;

long int potencia(int base,int e){
    if(e==0) return 1;
    if(e==1) return base;
    else return base*potencia(base,e-1);
}
int main( void ){
    int b,e;
    cout<<"Ingrese la base"<<endl;
    cin>>b;

    do{
            cout<<"Ingrese un exponente";
            cin>>e;
    }while(e<0);
    cout<<endl;
    cout<<"Base:"<<b<<endl;
    cout<<"Exp:"<<e<<endl;
    cout<<"Resultado:"<<potencia(b,e)<<endl<<endl;

    return 0;
}