#include <iostream>
using namespace std;
void elimiar_repetidos(char cadena[]){
    int aux[10];
    for(int i=0;i<10;i++){
        aux[i]=1;
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(cadena[i]==cadena[j]){
                aux[j]=0;
            }
        }
    }
    for(int i=0;i<10;i++){
        if(aux[i]==1){
            cout<<cadena[i];
        }
    }
}
int main(){
    char palabra[10]="bananas";
    elimiar_repetidos(palabra);
}
