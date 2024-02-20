#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra el menor de dos numero"<<endl;
    int A, B;
    cout << "Ingrese numero A: ";
    cin>>A;
    cout << "Ingrese numero B: ";
    cin>>B;
    if (A>B){
        cout<<"El menor es "<<B<<endl;
    }else {
    cout<<"El menor es "<<A<<endl;
}
    return 0;
}
