#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra una sumataria de numero ingresados por el usuario si el usuario ingresa 0 el programa termina"<<endl;
    int N,sum;
    bool ban;
    sum = 0;
    ban = false;
    while (ban == false) {
        cout<<"Ingrese un numero; si ingresa 0 el progrma termina: ";
        cin>>N;
        if(N==0){
            cout<<"El resultado de la sumartoria es: "<<sum<<endl;
            ban = true;
        }else {
        sum = sum + N;
        }
    }
    return 0;
}
