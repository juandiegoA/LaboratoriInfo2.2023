#include <iostream>

using namespace std;

int main()
{
    int A,B,C,aux,aux2,aux3,aux4;
    cout<< "Este programa permite determinar el tipo de triangulo por sus lados" << endl;
    cout<<"Ingrese un numero A: "<<endl;
    cin>>A;
    cout<<"Ingrese un numero B: "<<endl;
    cin>>B;
    cout<<"Ingrese un numero C: "<<endl;
    cin>>C;
    aux = A+B;
    aux2=A+C;
    aux3=B+C;
    if(aux==C){
        cout<<"Las longitudes ingresadas no forman un triangulo"<<endl;
    }
    if(aux2==B){
        cout<<"Las longitudes ingresadas no forman un triangulo"<<endl;
    }
    if(aux3==A){
        cout<<"Las longitudes ingresadas no forman un triangulo"<<endl;
    }
    if(A==B && A==C){
        cout<<"Se forma un triangulo equilatero"<<endl;
    }else if (A==B || B==C || A==C){
              cout<<"Se forma un triangulo isosceles"<<endl;
}else {
cout<<"Se forma un triangulo escaleno"<<endl;
}
    return 0;
}
