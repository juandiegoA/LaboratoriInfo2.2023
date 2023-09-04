#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra si una combinacion de mes y dia son pocible"<< endl;
    int A,B;
    cout<<"Escriba un dia: ";
    cin>>A;
    cout<<"Escriba un mes: ";
    cin>>B;
    if (A>31) {
        cout<<A<<"/"<<B<<" Fecha invalida"<<endl;
    }
    else if ((B==4) && (A==31)) {
        cout<<A<<"/"<<B<<" Fecha invalida"<<endl;
    }
    else if ((B==6) && (A==31)) {
        cout<<A<<"/"<<B<<" Fecha invalida"<<endl;
    }
    else if ((B==9) && (A==31)) {
        cout<<A<<"/"<<B<<" Fecha invalida"<<endl;
    }
    else if ((B==11) && (A==31)) {
        cout<<A<<"/"<<B<<" Fecha invalida"<<endl;
    }
    else if ((B==2) && (A>=30)) {
        cout<<A<<"/"<<B<<" Fecha invalida"<<endl;
    }
    else if ((B==2) && (A==29)) {
        cout<<A<<"/"<<B<<" Valida en bisiesto"<<endl;
    }
    else{
        cout<<A<<"/"<<B<<" Es una fecha valida"<<endl;
    }

    return 0;
}
