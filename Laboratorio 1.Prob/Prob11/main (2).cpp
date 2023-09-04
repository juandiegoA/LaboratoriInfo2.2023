#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra el minimo comun multiplo de una numeros consecutivos ingresados por el usuario"<<endl;
    int n,r,aux,aux2;
    cout<<"Ingrese el numero mas alto: ";
    cin>>n;
    r = n;
    aux = 1;
    aux2 = 1;
    while (true) {
        if(r%aux!=0){
            r = n+aux2;
            aux2 += 1;
            aux = 1;
        }
        else if (aux == n){
            break;
        }
        else {
            aux += 1;
        }
    }
    cout<<"EL minimo comun multiplo es: "<<r<<endl;
    return 0;
}
