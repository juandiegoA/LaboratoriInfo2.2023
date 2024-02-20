#include <iostream>

using namespace std;

int main()
{
    int n,contador,c,d,e;
    cout<<"Ingrese el numero de * que quiere: "<<endl;
    cin>>n;
    c = 0;
    e = 0;

    while (c!=n) {
        cout<<"*";
        c += 1;
    }
    cout<<endl;
    contador = 2;
    while (contador<n) {
        cout<<"*";
        d = n-2;
        while (d!=0) {
            cout<<" ";
            d -= 1;
        }
        cout<<"*";
        cout<<endl;
        contador += 1;
    }
    while (e!=n) {
        cout<<"*";
        e += 1;
    }
    cout<<endl;
    return 0;
}
