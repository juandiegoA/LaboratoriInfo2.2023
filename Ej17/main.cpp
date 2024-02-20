#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra el mayor de numeros ingresados por el usuario si el usuario ingresa 0 el programa termina"<<endl;
    int N,B;
    bool ban;
    B = 0;
    ban = false;
    while (ban==false) {
        cout<<"Ingrese un numero; si ingresa 0 el progrma termina: ";
        cin>>N;
        if(N==0){
            cout<<"El numero mayor es: "<<B<<endl;
            ban = true;
        }
        if (N>B) {
            B=N;
        }
        }
    return 0;
}
