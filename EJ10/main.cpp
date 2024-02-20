#include <iostream>

using namespace std;

int main()
{
int N,contador,aux;
cout<<"Este programamuestra los multiplos de un numero del 1 al 100"<<endl;
cout<<"Ingrese un numero N: ";
cin>>N;
contador=1;
while (contador<=100) {
    aux = contador%N;
    if(aux==0){
        cout<<contador<<endl;
    }
    contador += 1;
}
}
