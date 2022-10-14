#include <iostream>
using namespace std;
/*
isalpha pregunta si dicha variable es alfabética
isdigit pregunta si es un número
isalnum Ó letra o números
isspace Espacios
islower Pregunta si es mínusculas
isupper Pregunta si es mayúsculas
tolower Pasa a minuscúlas
toupper Pasa a mayúsculas
*/
int main()
{
    char texto1[]={'A', 'D', 'I', 'O', 'S', '\0'};
    char texto2[50]="Hola Amigo Mio";
    string cadena = "universidad";
    int longitud = cadena.length();
    char texto[20] = "PoliTecnicA";
    
    int i=0;
    int contador=0, contalpha=0, contadorespacios;
   
    for (int i = 0; i < texto2[i]; i++)
    {
        if (isspace(texto2[i]))
        {
            contadorespacios=contadorespacios+1;
        }
    }
    cout<<"El texto: "<< texto2[50] << "tiene " << contadorespacios <<  " palabras." << endl;
    
   
   
   
   
    if (islower(texto[4]))
    {
        cout<<"Es minúscula"<< endl;
    }
    else{
        cout<<"Es mayúscula" << endl;
    }
    
    for (int i = 0; i < texto[i]; i++)
    {
        if (islower(texto[i]))
        {
            cout<< "Mínusculas:" << contalpha << endl;
        }
        
    }
    
    for (int i = 0; i < longitud; i++)
    {
        cout <<cadena[i] << " ";
    }
    i=0;
    while (texto[i]!='\0')
    {
        cout<<texto[i] << " ";
        cout<<"\n";
        i++;
    }
    for (int i=0; i<30; i++){
        cout << texto[i]; " ";
        cout<<"\n";
    }
    for (int i=0; i < longitud; i++)
    {
        if (texto[i]=='a' ||texto[i]=='e' ||texto[i]=='i' ||texto[i]=='o' ||texto[i]=='u')
        {
            contador=contador+1;
            cout<<"\n";
            cout<<"Vocales:" << texto[i] << "cantidad:" << contador<< endl;
        }
        
    }
    
    cout<<"... Hecho" << endl;
    return 0;
    
}