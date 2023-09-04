#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra la suma de las diagonales de una espiral de un tamano selecionado por el usuario"<<endl;
    int tam,n,sum,aux;
    cout<<"Ingrese un numero impar para determinar el tamano de la spiral: "<<endl;
    cin>>tam;
    n = 1;
    sum = 2;
    aux = 0;
    if(tam%2==0){
        cout<<"El numero no es impar"<<endl;
    }
    for(int i=0;i<(tam-1)/2;i++){
        aux+=n;
        n+=sum;
        aux+=n;
        n+=sum;
        aux+=n;
        n+=sum;
        aux+=n;
        n+=sum;
        sum+=2;
    }
    aux+=n;
    cout<<"En una espiral de "<<tam<<"x"<<tam<<", la suma es: "<<aux<<endl;
    return 0;
}
