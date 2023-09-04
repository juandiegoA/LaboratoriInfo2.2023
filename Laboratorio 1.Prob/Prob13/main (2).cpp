#include <iostream>

using namespace std;

int main()
{
    int N, aux,sum;
    cout<<"Este programa entrega la suma de numeros pirmos hasta un numero ingresado por el usuario"<<endl;
    cout<<"Ingrese el numero limte: ";
    cin>>N;
    sum = 0;
    for(int i=1;i<N;i++){
        aux=0;
        for(int div=1;div<=i;div++)
            if(i%div==0 && i%1==0)
            aux += 1;
            if(aux==2){
                sum += i;
            }
    }
    cout<<"El resultado de la suma es "<<sum<<endl;
    return 0;
}
