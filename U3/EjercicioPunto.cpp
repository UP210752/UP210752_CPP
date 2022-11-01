#include <iostream>
using namespace std;
long int factorial (int l){
    long int n;
    cin >> n;
    long int factorial = 1;
    for (int i = 1; i < n; i++)
    {
        factorial = factorial *i;
    }
    return factorial;
}
long int euler(int k){
    long double euler;
    for (int i = 0; i < 10; i++)
    {
        euler=1/(factorial(i));
        for (int  i = 0; i < 10; i++)
        {
            euler= euler + euler;
        }
        
    }
    
    return euler;
}
int main(){
    long double f;
    f=euler(10);
    cout<<"Euler: " << f;
}