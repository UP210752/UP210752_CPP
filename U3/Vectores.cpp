#include <iostream>
using namespace std;

int main(){
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
    
}