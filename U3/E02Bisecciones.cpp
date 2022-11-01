#include <iostream>
#include <cmath>
using namespace std;

double fnEcuacion1(double x){       // x²-8x+15 
    return (pow(x, 2) - 8*x+15);
}

int main(int argc, char const *argv[])
{
    double x1 =4.5;
    double x2 = -10;
    double xm;

    double Es = 0.000001;          //Error estándar o error absoluto
    double Er = abs(x2-x1);     //Error relativo 

    int i=1;

    while (Er>Es)
    {
        xm=(x1+x2)/2;
        if (fnEcuacion1(x1)*fnEcuacion1(xm) < 0)
        {
            x2=xm;
        }else{
            x1=xm;
        }
        Er=abs(x2-x1);
        i=i+1;
    }
    cout <<"i= " << i << " Raíz=" << xm << endl;
    cout << ". . . Hecho";
    double y;
    // y=fnEcuacion1(0);
    // cout << y << endl;
    return 0;
}
