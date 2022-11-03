#include <iostream>
using namespace std;
int menorV(int x[], int N){
    int menor = x[0];
    for (int i = 0; i < N; i++)
    {
        if(x[i] < menor){
            menor=x[i];
        }
    }
    
    return menor;
}
int main(){
    
    int matriz[2][3];
    int x, y;
    int n=7;
    for (int i = 0; i < n; i++)//columnas
    {
        cout<<"ingrese un dato para la matriz en la posición: " << i <<endl;
        cin>>x;
        matriz=[x];
        for (int j = 0; j < i; j++)
        {
            cout<<"ingrese un dato para la matriz en la posición" << j << endl;
            cin>>y;
            matriz=[y];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout<<matriz[i]<<endl;
    }
    
    
    return 0;
    /*
    int n=5;
    int cal[]={10,9,8,7,6};
    //int calf [5];
    //calf [0]=10;
    //calf [1]=9;
    //calf [2]=8;
    //calf [3]=7;
    //calf [4]=10;
    int cal2[]   ={10,5,6,8,7};
    double n =5, total;
    for (int i = 0; i < n; i++)
    {
        total=total+cal2[i];
    }
    double promedio = total/n;
    cout << total << endl;
    cout << promedio << endl;
    */
    
}