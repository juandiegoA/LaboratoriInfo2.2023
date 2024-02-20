#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra dos columnas, una del 1 al 50 y otra del 50 al 1"<<endl;
    int contador,A,B;
    contador = 1;
    A=1;
    B=50;
    while (contador <= 50) {
        cout<<A<<"   "<<B<<endl;
        A += 1;
        B -= 1;
        contador += 1;
    }
    return 0;
}
