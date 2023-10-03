#include <iostream>
#include<fstream>
#include<math.h>
#include<cstdlib>
#include "Archivos.cpp"
#include "Codificacion.cpp"
#include "Decodificacion.cpp"

using namespace std;

int main(){

    string input, output;
    cout<<"Ingrese nombre de archivo a decodificar"<<endl;
    cin>>input;
    cout<<"Ingrese nombre de archivo de salida"<<endl;
    cin>>output;

    int metodo;
    cout<<"Que metodo quiere usar para decodificar: [1-2]"<<endl;
    cin>>metodo;
    int n;
    cout<<"Ingrese un numero entero (semilla): "<<endl;
    cin>>n;

    if(metodo==1){
        string dataIn=lecturaArchivo(input);
        //cout<<dataIn<<endl;
        string decodificada=BintoDec(decodificarpalabra1(dataIn,n));
        escrituraArchivo(decodificada, output);
    }else if(metodo==2){
        string dataIn=lecturaArchivo(input);
        //cout<<dataIn<<endl;
        string decodificada=BintoDec(decodificarpalabra2(dataIn,n));
        escrituraArchivo(decodificada, output);
    }else{
        cout<<"Ese Metodo no existe"<<endl;
    }

    return 0;
}


