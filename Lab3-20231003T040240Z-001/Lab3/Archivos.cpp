#include <iostream>
#include<fstream>
#include<math.h>
#include<cstdlib>

using namespace std;

void escrituraArchivo(string data, string name){
    ofstream outfile;
    outfile.open("Data/"+name+".txt");

    if (!outfile.is_open())
    {
      cout << "Error abriendo el archivo" << endl;
      exit(1);
    }

    outfile << data+"_" << endl;
    outfile.close();
}

string lecturaArchivo(string name){
    string data;
    string dataSalida="";
    ifstream infile;

    infile.open("Data/"+name+".txt");
    if (!infile.is_open())
    {
      cout << "Error abriendo el archivo" << endl;
      exit(1);
    }

    while (!infile.eof()){
        infile >> data;
    }

    for (int i=0;i<data.length();i++){
        if(data.at(i)!='_'){
          dataSalida+=data.at(i);
        }else{
          break;
        }
    }
    //cout<<dataSalida<<endl;
    infile.close();
    return dataSalida;
}

