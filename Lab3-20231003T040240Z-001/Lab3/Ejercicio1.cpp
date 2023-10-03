#include <iostream>
#include<fstream>
#include<math.h>
#include<cstdlib>
#include "Archivos.cpp"
#include "Codificacion.cpp"

using namespace std;

int main(){

    string input, output;
    cout<<"Ingrese nombre de archivo a codificar"<<endl;
    cin>>input;
    cout<<"Ingrese nombre de archivo de salida"<<endl;
    cin>>output;

    int metodo;
    cout<<"Que metodo quiere usar para codificar: [1-2]"<<endl;
    cin>>metodo;
    int n;
    cout<<"Ingrese un numero entero (semilla): "<<endl;
    cin>>n;

    if(metodo==1){
        string dataIn=lecturaArchivo(input);
        //cout<<dataIn<<endl;
        string codificada=codificacionpalabra1(dataIn,n);
        escrituraArchivo(codificada, output);
    }else if(metodo==2){
        string dataIn=lecturaArchivo(input);
        //cout<<dataIn<<endl;
        string codificada=codificacionpalabra2(dataIn,n);
        escrituraArchivo(codificada, output);
    }else{
        cout<<"Ese Metodo no existe"<<endl;
    }

    return 0;
}
