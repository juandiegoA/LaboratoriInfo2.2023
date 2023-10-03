#include <iostream>
#include<fstream>
#include<math.h>
#include<cstdlib>

using namespace std;

void mostrar(string palabra, int b){

    cout<<endl;
    for(int i=0; i<palabra.length()/b;i++){

        string palabra_="";
        for (int j=i*b;j<((i*b)+b);j++){
            palabra_=palabra_+palabra.at(j);
        }
        cout<<palabra_<<"|";

    }
}

string DectoBin(char letra){
    int Ascii=letra;
    string binario="";

    for(int i=7; i>=0; i--){//codificar a binario(8 bits 0-7)
        if(pow(2,i)<=Ascii){
            binario=binario+"1";//agrega un uno si en la suma cabe el siguiente numero
            Ascii-=pow(2,i);//se le quita el valor que al que se le agrega el ascii
        }
        else{
            binario=binario+"0";//si no esta, se le agrega el cero
        }
    }
    return binario;
}

char changeOneZero(char num){
    if(num=='1'){
        return '0';
    }else{
        return '1';
    }
}

int contOnes(string palabra){
    int suma=0;
    for(int i=0; i<palabra.length();i++){
        if (palabra.at(i)=='1'){
            suma++;
        }
    }
    return suma;
}

int contZeros(string palabra){
    int suma=0;
    for(int i=0; i<palabra.length();i++){
        if (palabra.at(i)=='0'){
            suma++;
        }
    }
    return suma;
}

string codificacionpalabra1(string data, int n){
    string palabraBinaria="";
    string palabraCodificada="";

    for (int i = 0; i < data.length(); i++) {
        palabraBinaria=palabraBinaria+DectoBin(data.at(i));
    }

    string dataAnt=palabraBinaria.substr(0,n);
    int cont1=contOnes(dataAnt);
    int cont0=contZeros(dataAnt);

    for(int i=0;i<dataAnt.length();i++){
        dataAnt.at(i)=changeOneZero(dataAnt.at(i));
    }

    palabraCodificada+=dataAnt;
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
        cont1=contOnes(temp);
        cont0=contZeros(temp);

        int conteo=0;
        for(int j=0;j<temp.length();j++){
            if(conteo<intervalo){
                conteo++;
            }else{
                temp.at(j)=changeOneZero(temp.at(j));
                conteo=0;
            }
        }
        dataAnt=temp;
        palabraCodificada+=dataAnt;
    }

    //mostrar(palabraCodificada, n);

    return palabraCodificada;
}

string codificar(string grupo, int n){//toma el ultimo dato y lo pone al incicio
    string nuevo=grupo.substr(0,n-1);//extrae desde la posicion o a la 3
    string nuevoFinal=grupo.at(n-1)+nuevo;//toma el ultimo valor y lo pone al inicio
    return nuevoFinal;
}

string codificacionpalabra2(string data, int n){
    
    string palabraBinaria="";


    for (unsigned int i = 0; i < data.length(); i++) {
        palabraBinaria=palabraBinaria+DectoBin(data.at(i));
    }

     cout << endl;
    string palabraCodificada="";
    for (unsigned int i=0; i<palabraBinaria.length()/n; i++){//la longitud de palabra binaria se divide entre 4, por que se sabe que se van a tomar de a 4 caracteres.para que en la ultima teracion el string tenga las posiciones necesarias para ietrar
        string palabra_="";
        for (unsigned int j=i*n;j<((i*n)+n);j++){
            palabra_=palabra_+palabraBinaria.at(j);
        }
        palabraCodificada=palabraCodificada+codificar(palabra_,n);
    }

    //mostrar(palabraCodificada, n);

    return palabraCodificada;
}

