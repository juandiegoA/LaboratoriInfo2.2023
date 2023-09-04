#include <iostream>

using namespace std;

int main()
{
    int n, aux, veri;
    int nuanterior = 0;
    int num = 1;
    int sum = 0;
    cout<<"Este programa muestra la sumatoria de los nuemros pares menores al numeor ingresado, en la sucecion de fibonacci"<<endl;
    cout<<"Ingrese un numero: ";
    cin>>n;
    while (num<=n) {
        aux = num;
        num += nuanterior;
        nuanterior = aux;
        if (num>n){
            break;
        }
        veri = num%2;
        if(veri==0){
            sum += num;
        }

    }
        cout<<"El resultado de la suma es: "<<sum<<endl;
    return 0;
}
