#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra el mayor de dos numeros"<<endl;
    int A, B;
    cout << "Ingrese numero A: ";
    cin>>A;
    cout << "Ingrese numero B: ";
    cin>>B;
    if (A>B){
        cout<<"El mayor es "<<A<<endl;
    }else {
    cout<<"El mayor es "<<B<<endl;
}
    return 0;
}
