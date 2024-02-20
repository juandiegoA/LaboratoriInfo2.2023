#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa muestra el redondeo de una division"<<endl;
    int resultadoI;
    float A,B,resultadoF,diferencia;
    cout << "Ingrese numero A: ";
    cin>>A;
    cout<<"Ingrese numero B: ";
    cin>>B;
    resultadoI = A/B;
    resultadoF = A/B;
    diferencia =resultadoF-resultadoI;
    if (diferencia<=0.5){
    cout<<resultadoI<<endl;
    }else {resultadoI = resultadoI+1;
    cout<<resultadoI<<endl;}
}
