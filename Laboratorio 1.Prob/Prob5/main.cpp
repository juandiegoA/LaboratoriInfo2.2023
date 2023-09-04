#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra un patron de '* en pantalla'"<<endl;
    cout<<"Ingrese la cantidad maxima de '*' que quiere que imprima: ";
    int n,compImp,asteriscos,contador,contador2,espacios,aux,aux2,aux3,aux4,rep;
    cin>>n;
    compImp = n%2;
    espacios = (n/2)+1;
    contador = 0;
    contador2 = 0;
    aux = 1;
    aux2 = espacios-1;
    aux3 = 1;
    aux4 = 1;
    while (contador != espacios) {
        if(compImp == 0){
            cout<<n<<" No es un numero impar"<<endl;
            break;
        }
        while (aux2 != 0) {
                cout<<" ";
                aux2 -= 1;
            }
        while (contador2 != aux) {
                cout<<"*";
                contador2 += 1;
            }
        cout<<endl;
        contador += 1;
        aux4 += 2;
        aux = aux+aux4;
        aux3 += 1;
        aux2 = espacios-aux3;
        }
    //----------------------------------------------------
    rep = n/2;
    espacios = 1;
    contador = 0;
    asteriscos = n-2;
    aux = asteriscos;
    aux2 = espacios;
    aux3 = 1;
    aux4 = 0;
    while (contador != rep) {
        if(compImp == 0){
            break;
        }
        while (aux2 != 0) {
            cout<<" ";
            aux2 -= 1;
        }
        while (aux != 0) {
            cout<<"*";
            aux -= 1;
        }
        cout<<endl;
        contador += 1;
        aux3 += 1;
        aux2 += aux3;
        aux4 += 2;
        aux = asteriscos - aux4;
    }
    return 0;
}
