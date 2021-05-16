#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   float a,b,c,X1,X2,disc;
   cout<<"ingrese a:"; cin>>a;
   cout<<"ingrese b:"; cin>>b;
   cout<<"ingrese c:"; cin>>c;
   X1= (-b+sqrt(b*b-4*a*c))/(2*a);
   X2= (-b-sqrt(b*b-4*a*c))/(2*a);
   disc= b*b-4*a*c;
   if(disc<0)
      {cout<<"La funcion no posee raices";
      }
   else{cout<<"X1:"<<X1<<endl;
        cout<<"X2:"<<X2<<endl;
   }

   return 0;
}
//se pide ingresar los datos a,b,c y se hacen una serie de calculos para determinar las raices,tambien se aplica una condicion para probrar si las raices existen o no.
