#include <iostream>
#include <math.h>
using namespace std;


bool bis(int año){
    if (año%400==0 || ( año%4==0 && año%100!=0 )){
        return true;
    }else{
        return false;
    }
}

int main(){
    int year;
    cout << "Ingrese año" << endl;
    cin >> year;

    if (bis(year)==true){
        cout << "El año es bisiesto" << endl;
    }else {
        cout << "El año no es bisiesto" << endl;
    }
    return 0;
}