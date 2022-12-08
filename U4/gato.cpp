#include <iostream>
using namespace std;

void imprimir_tablero(){

    char mapa[3][3] = {{'1', '2', '3'},
                       {'4', '5', '6'},
                       {'7', '8', '9'}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mapa[i][j] << "\t";
            cout<<"----------------";
        }
        cout<<"|";
        cout << endl;
    }
    cout << endl;
    
}

int main(){
    imprimir_tablero();
}