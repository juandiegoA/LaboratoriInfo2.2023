#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa cuenta la cantidad de digitos de un numero"<<endl;
    int N,contador147,c;
    cout<<"Ingrese un numero: ";
    cin>>N;
    c = N;
    contador = 0;
    while(N>0){
        N = N/10;
        contador += 1;
    }
    cout<<c<<" Tiene "<<contador<<" digitos"<<endl;
    return 0;
}
