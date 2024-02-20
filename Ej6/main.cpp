#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra el resultado de una potencia entre dos numeros"<<endl;
    int A,B,contador,resultado;
    cout<<"ingrese numero A: ";
    cin>>A;
    cout<<"ingrese numero B: ";
    cin>>B;
    resultado = 1;
    contador = 0;
    while (contador != B) {
        resultado=resultado*A;
        contador = contador + 1;
    }
    cout<<A<<"^"<<B<<"="<<resultado<<endl;
    return 0;
}
