#include <iostream>
using namespace std;

int transformar(int num, char *ptr);

int main()
{
    int x;
    char Res[100];

    cout<<"Ingrese un dato entero para convertirlo en tipo char: ";
    cin>>x;

    int c;
    c=transformar(x, Res);

    for(int i=c; i>=0; i--){
        cout<<Res[i];
    }
    cout<<endl;
    return 0;
}

int transformar(int num, char *ptr){
    int residuo;
    int cont=0;
    while(num!=0){
        residuo = num%10;
        num = num/10;
        *ptr=residuo+48;
        ptr++;
        cont++;
    }
    return cont;
}
