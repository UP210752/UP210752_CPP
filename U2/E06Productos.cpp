#include <iostream>

using namespace std;

int main()
{
    double costo;
    int bandera, total=0, i=1;
    do
    {
        cout << "Precio " << i << ":" <<endl;
        i=i+1;
        cin >> costo;
        total = total + costo;
        bandera = bandera + 1;
    } while (costo != 0);
    cout << "Total: $" << total<<endl;
    return 0;
}