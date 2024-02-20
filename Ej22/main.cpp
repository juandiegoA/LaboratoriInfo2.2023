#include <iostream>

using namespace std;

int main()
{
    cout<<"Este programa resibe una cantidad de segundos y la pasa a horas minutos y segundos"<<endl;
    int seg,hora,min,aux1,aux2;
    cout<<"Ingrese los segundos: ";
    cin>>seg;
    hora = seg/3600;
    aux1 = hora*3600;
    seg = seg-aux1;
    min = seg/60;
    aux2 = min*60;
    seg = seg-aux2;
    cout<<hora<<":"<<min<<":"<<seg<<endl;
    return 0;
}
