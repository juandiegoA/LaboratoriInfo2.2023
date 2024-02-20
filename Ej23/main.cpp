#include <iostream>

using namespace std;

int main()
{
    int A,B,c,contador,aux1,aux2,acumulador;
    cout<<"Ingrese un numero A: ";
    cin>>A;
    cout<<"Ingrese un numero B: ";
    cin>>B;
    if (A>B){
        c=A;
    }else {c=B;
}
    contador=1;
    acumulador=1;
    while (contador!=c) {
        aux1=A%contador;
        aux2=B%contador;
        if(aux1==0 || aux2==0){
            acumulador = acumulador*contador;
            }
        contador += 1;
        }
    cout<<acumulador;
    return 0;
}
