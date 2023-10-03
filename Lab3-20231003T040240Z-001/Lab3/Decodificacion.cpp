#include <iostream>
#include<fstream>
#include<math.h>
#include<cstdlib>

using namespace std;


string decod(string grupo, int n){
    char primer=grupo.at(0);
    string salida=grupo.substr(1,n)+primer;
    return salida;

}

string decodificarpalabra2(string data, int n){

    string palabraBinaria=data;
    string palabraCodificada="";

    for (int i=0; i<palabraBinaria.length()/n; i++){//la longitud de palabra binaria se divide entre 4, por que se sabe que se van a tomar de a 4 caracteres.para que en la ultima teracion el string tenga las posiciones necesarias para ietrar
        string palabra_=palabraBinaria.substr(i*n,n);
        palabraCodificada+=decod(palabra_,n);
    }

    //mostrar(palabraBinaria, 8);
    //mostrar(palabraCodificada, n);

    return palabraCodificada;
}

string BintoDec(string binario){
    string palabra="";
    for(int i=0; i<binario.length()/8; i++){
        string palabra_=binario.substr(i*8,8);
        int sumaAscii=0;
        for(int j=7; j>=0; j--){//codificar a binario(8 bits 0-7)
            if(palabra_.at(7-j)=='1'){
                sumaAscii+=pow(2,j);
            }
        }

        char x=sumaAscii;
        palabra=palabra+x;
    }
    return palabra;
}

string decodificarpalabra1(string data, int n){

    string palabraBinaria=data;
    string palabraDeCodificada="";

    string dataAnt=palabraBinaria.substr(0,n);

    for(int i=0;i<dataAnt.length();i++){
        dataAnt.at(i)=changeOneZero(dataAnt.at(i));
    }

    int cont1=contOnes(dataAnt);
    int cont0=contZeros(dataAnt);
    palabraDeCodificada+=dataAnt;
    int intervalo=1;

    for(int i=1;i<(palabraBinaria.length()/n);i++){

        if(cont1<cont0){
            intervalo=1;
        }else if (cont1>cont0){
            intervalo=2;
        }else{
            intervalo=0;
        }

        string temp=palabraBinaria.substr(i*n,n);

        int conteo=0;
        for(int j=0;j<temp.length();j++){
            if(conteo<intervalo){
                conteo++;
            }else{
                temp.at(j)=changeOneZero(temp.at(j));
                conteo=0;
            }
        }
        cont1=contOnes(temp);
        cont0=contZeros(temp);
        dataAnt=temp;
        palabraDeCodificada+=dataAnt;
    }

    //mostrar(palabraDeCodificada, n);

    return palabraDeCodificada;
}

