#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa calcula el area y el perimetro de un circulo con radio N"<<endl;
    int N;
    float pi,perimetro,area;
    pi = 3.1416;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    perimetro = 2*pi*N;
    area = pi*(N*N);
    cout<<"Area="<<area<<endl;
    cout<<"Perimetro="<<perimetro<<endl;
    return 0;
}
