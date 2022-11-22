#include<iostream>
using namespace std;
void ordenar_asc(int [], int);
void ordenar_des(int [], int);
int main()
{
 
 int xn;
 int num[9];
 
 for (int i=1;i<=5;i++){
  cout <<"Ingrese numero : "<<endl;
  cin>>num[i];
  
 }
 cout <<"Orden ascendente "<<endl;
 ordenar_asc(num,5);
 
 for (int i=1;i<=5;i++){
  cout <<num[i]<<endl;
  
 }
 cout <<"Orden descendente "<<endl;
 ordenar_des(num,5);
 
 for (int i=1;i<=5;i++){
  cout <<num[i]<<endl;
  
 }
 return 0;
}

void ordenar_asc(int a[], int n)
{
   int aux;
   for (int i=n; i>=0; i--)
      for (int j=0; j<=i; j++)
         if (a[j] > a[j+1])
          {
            aux = a[j];
            a[j]= a[j+1];
            a[j+1]= aux;
           }
}

void ordenar_des(int a[], int n)
{
   int aux;
   for (int i=n; i>=0; i--)
      for (int j=0; j<=i; j++)
         if (a[j] < a[j+1])
          {
            aux = a[j];
            a[j]= a[j+1];
            a[j+1]= aux;
           }
}