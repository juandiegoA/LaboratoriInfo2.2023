#include <iostream>
#include <stdbool.h>
#include <string>


using namespace std;
bool comparar(char cadena1[10], char cadena2[10]);


int main()
{
    char a[10]="Hola";
    char b[10]="hola";
    if(comparar(a,b)){
        cout<<"Las cadenas son iguales"<<endl;
    }
    else {
        cout<<"Las cadenas son diferentes"<<endl;
}
    return 0;
}

bool comparar(char cadena1[10], char cadena2[10]){
    for (int i=0; i<10; i++){
        if (cadena1[i]!=cadena2[i]){
            return false;
        }
        return true;
    }
}
