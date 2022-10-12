#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=17;
    string b="";
    float c;
    
    if(n>0)    {
        while (n>0)
        {
            if (n%2==0)
            {
                b="0"+b;
            }else{
                b="1"+b;
            }
            n=(int) n/2;
        }
    }
    cout << "El resultado es: " << b << endl;  


    return 0;
}
