#include <iostream>

using namespace std;

int main()
{
    float km,mts;
    cout << "ingrese una velocidad en km:";cin>>km;
   mts = km/1000*1/3600;
    cout << "la velocidad en metros es :"<<mts;

    return 0;
}
//Se pide ingresar un valor en km, con este valor se hacen calculos de convercion y se optine un valor en metros.
