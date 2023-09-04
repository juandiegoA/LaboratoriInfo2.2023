#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"El programa toma un numero y eleva todos sus digitos a si mismos y entrega una sumatoria de los mismos"<<endl;
    cout<<"Ingrese un numero: ";
    cin>>a;
    int b, x = 1, suma = 0;
    while(a>0){
        b = a%10;
        a = a/10;
        for(int i=1; i<=b; i++){
            x = x*b;
        }
        suma += x;
        x = 1;
    }
    cout<<"El resultado de la suma es "<<suma<<endl;
    return 0;
}
