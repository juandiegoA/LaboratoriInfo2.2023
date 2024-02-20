#include <iostream>
using namespace std;

int main()
{
    cout<<"Este programa toma una letra y la pasa de mayuscula a minuscula y de minuscula a mayuscula, segun corresponda"<<endl;
    char C;
    cout<<"Ingrese una letra: ";
    cin>>C;
    if (C>65 && C<90){
        C = C+32;
        cout<<C<<endl;
    }else {
        C = C-32;
    cout<<C<<endl;
}
    return 0;
}
