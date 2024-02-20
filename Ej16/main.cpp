#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra un promedio de numeros ingresados por el usuario si el usuario ingresa 0 el programa termina"<<endl;
    int N,sum,contador;
    bool ban;
    float resultado;
    sum = 0;
    ban = false;
    contador = 0;
    while (ban == false) {
        cout<<"Ingrese un numero; si ingresa 0 el progrma termina: ";
        cin>>N;
        if(N==0){
            resultado = sum/contador;
            cout<<"El resultado del promedio es: "<<resultado<<endl;
            ban = true;
        }else {
        sum = sum + N;
        contador += 1;
        }
    }
    return 0;
}
