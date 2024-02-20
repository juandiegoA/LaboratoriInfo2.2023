#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout<<"Este programa hace que el usuario intente adivinar el numero que tiene almacenado"<<endl;
    int N= rand()%101;
    int Adiv,contador;
    contador = 0;
    while(true){
    cout<<"Ingrese un numero: ";
    cin>>Adiv;
    if (N>Adiv){
        cout<<"Ël numero es mayor"<<endl;
    }
    if (N<Adiv){
        cout<<"El numero es menor"<<endl;
    }
    if (N==Adiv){
        cout<<"Felicidades a adivinado el numero"<<endl;
        cout<<"A adivinado el numero en "<<contador+1<<" intentos"<<endl;
        break;
    }
    contador += 1;
    }
    return 0;
}
