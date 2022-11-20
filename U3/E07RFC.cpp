#include<stdio.h> 
#include<string.h>
#include <iostream>


using namespace std;

int main(){
    char DatoA[100], DatoB[100], DatoC[100], rfc[100], ano[100]; 
    cout<<"Ingresa el apellido paterno"<<endl; 
    cin>>DatoA; 
    cout<<"Ingresa el apellido materno "<<endl; 
    cin>>DatoB; 
    cout<<"Ingrese solo su primer nombre "<<endl; 
    cin>>DatoC; 
    cout<<"Ingresa tu fecha de nacimiento"<<endl;  
    cin>>ano; 
     
    rfc[0] = DatoA[0]; 
    rfc[1] = DatoA[1];
    rfc[2] = DatoB[0]; 
    rfc[3] = DatoC[0]; 
    strcat(DatoA, DatoB);
    strcat(DatoB, DatoC);
    strcat(DatoC, ano);

    cout<<rfc<<ano<<endl;

    return 0; 
}