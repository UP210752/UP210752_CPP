#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char const *argv[])
{
   string i = "";
   string r = "";
   
   cout << "¿Tu pizza es vegetariana?" << endl;
   cin >> r;

   if (r == "si")
   {
      cout << "La pizza lleva: Pimiento y tofu"<< endl;
      cout<< "¿De que quieres la pizza?"<<endl;
      cin >> i;
      if (i == "pimiento")
      {
         cout << "Ha escogido pimiento: Su orden contiene mozarella, tomate y pimiento"<<endl;
      }
      else if (i == "tofu")
      {
         cout << "Ha escogido tofu: Su orden contiene mozarella, tomate y tofu." << endl;
      }
   }
   else if (r == "no")
   {
      cout << "Los ingredientes son: peperonni, jamón y salmon"<<endl;
      cout<<"¿De que quieres tu pizza?"<<endl;
      cin >> i;
      if (i == "peperonni")
      {
         cout << "Ha escogido peperonni: Su orden contiene mozarella, tomate y peperonni." << endl;
      }
      else if (i == "jamon")
      {
         cout << "Ha escogido jamon: Su orden contiene mozarella, tomate y jamon."<<endl;
      }
      else if (i == "salmon")
      {
         cout << "Ha escogido salmon: Su orden contiene mozarella, tomate y salmon."<<endl;
      }
   }

   return 0;
}