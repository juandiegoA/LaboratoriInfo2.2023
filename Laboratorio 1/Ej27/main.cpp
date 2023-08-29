#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa funciona como calculadora, en donde se ingresa un numero, un operador de (+,-,*,/), despues otro numero y retorna el resultado de la operacion"<<endl;
    float A,B,resultado;
    char operacion;
    cout<<"Ingrese el primer numero: ";
    cin>>A;
    cout<<"Ingrese la operacion a realizar: ";
    cin>>operacion;
    cout<<"Ingrese el segundo numero: ";
    cin>>B;
    if (operacion == '+'){
        resultado = A+B;
        cout<<A<<"+"<<B<<"="<<resultado<<endl;
    }else if (operacion == '-') {
        resultado = A-B;
        cout<<A<<"-"<<B<<"="<<resultado<<endl;
    }else if (operacion == '*') {
        resultado = A*B;
        cout<<A<<"*"<<B<<"="<<resultado<<endl;
    }else if (operacion == '/') {
        resultado = A/B;
        cout<<A<<"/"<<B<<"="<<resultado<<endl;
}
    return 0;
}
