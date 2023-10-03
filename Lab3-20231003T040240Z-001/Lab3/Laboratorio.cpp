#include <iostream>
#include<fstream>
#include<math.h>
#include<string>
#include<cstdlib>
#include "Archivos.cpp"
#include "Codificacion.cpp"
#include "Decodificacion.cpp"

using namespace std;
string cedu;
string clave;
int saldo;

void separar(string palabra, string *dataout){
    int x=0;
    for (int i=0; i<palabra.length(); i++){
        if (palabra.at(i)==','){
            x++;
        }
        else{
            *(dataout+x)=*(dataout+x)+palabra.at(i);
        }
    }
}

bool VerificarAdmin(string userIn, string contraseniaIn){
    string dataIn=lecturaArchivo("Sudo");
    string data=BintoDec(decodificarpalabra1(dataIn,4));
    string user="";
    string contra="";
    bool controlu;

    for (int i=0; i<data.length(); i++){
        if (data.at(i)=='u'){
            controlu=true;
            continue;
        }
        if (data.at(i)=='c'){
            controlu=false;
            continue;
        }
        if (controlu){
            user+=data.at(i);
        }
        else{
            contra+=data.at(i);
        }
    }

    if(user==userIn && contra==contraseniaIn){
        return true;
    }else{
        return false;
    }
}

bool VerificarUsuario(string userIn, string contraseniaIn , int cant){

    cout<<cant<<endl;
    string usuariosplit[cant];
    string usersIn_cod=lecturaArchivo("Usuarios");
    separar(usersIn_cod, &usuariosplit[0]);

    for(int u=0;u<=cant;u++){
        string usersIn_=BintoDec(decodificarpalabra1(usuariosplit[u],4));
        //cout<<usersIn_<<endl;
        bool cc=false;
        bool cl=false;
        bool sa=false;
        string user="";
        string clave_="";
        string saldo_="";
        for(int i=2;i<usersIn_.length();i++){
            if( usersIn_.at(i-1)=='c' &&  usersIn_.at(i-2)=='c'){
                cc=true;
                cl=false;
                sa=false;
            }
            if( usersIn_.at(i-1)=='l' &&  usersIn_.at(i-2)=='c'){
                cc=false;
                cl=true;
                sa=false;
            }
            if( usersIn_.at(i-1)=='a' &&  usersIn_.at(i-2)=='s'){
                cc=false;
                cl=false;
                sa=true;
            }
            if(cc){
                user+=usersIn_.at(i);
            }
            if(cl){
                clave_+=usersIn_.at(i);
            }
            if(sa){
                saldo_+=usersIn_.at(i);
            }
        }

        if(user.substr(0,user.length()-2)==userIn){
            cc=true;
        }

        if(clave_.substr(0,clave_.length()-2)==contraseniaIn){
            cl=true;
        }
    
        if(cc && cl){
            cedu=userIn;
            clave=clave_.substr(0,clave_.length()-2);
            saldo=stoi(saldo_);
            cout<<saldo<<endl;
            return true;
        }
    }

    return false;
}

void actualizarDatosUsuario(string userIn, int cant){

    string usuariosplit[cant];
    string usersIn_cod=lecturaArchivo("Usuarios");
    separar(usersIn_cod, &usuariosplit[0]);
    string dataSalida="";

    for(int u=0;u<cant;u++){
        string usersIn_=BintoDec(decodificarpalabra1(usuariosplit[u],4));
        bool cc=false;
        bool cl=false;
        bool sa=false;
        string user="";
        for(int i=2;i<usersIn_.length();i++){
            if( usersIn_.at(i-1)=='c' &&  usersIn_.at(i-2)=='c'){
                cc=true;
                cl=false;
                sa=false;
            }
            if( usersIn_.at(i-1)=='l' &&  usersIn_.at(i-2)=='c'){
                break;
            }
            if(cc){
                user+=usersIn_.at(i);
            }
        }

        if(u>0){
            dataSalida+=",";
        }

        if(user.substr(0,user.length()-2)==userIn){

            dataSalida+=codificacionpalabra1("cc"+user+clave+"sa"+to_string(saldo),4);
        }else{
            dataSalida+=codificacionpalabra1(usersIn_,4);
        }
    }
    
    escrituraArchivo(dataSalida,"Usuarios");
}

int main(){

    int opcion=0;
    string user;
    string contra;
    string cedu_;
    string clave_;
    string saldo_;

    int cantUsuarios=stoi(lecturaArchivo("cantUsers"));

    cout <<"///-----Bienvenido al cajero-----///"<<endl;
    while(opcion!=3){

        cout<<"-----MENU----- "<< endl;
        cout <<"Desea ingresar como: \n1.Administrador \n2.Usuario \n3.Salir"<<endl;
        cin >> opcion;
        bool verificar=false;
        switch(opcion){
            case 1:
                cout<<"Ingrese Usuario Adminsitrador:"<<endl;
                cin>>user;
                cout<<"Ingrese Contraseña:"<<endl;
                cin>>contra;

                verificar=VerificarAdmin(user, contra);

                if(verificar){
                    cout<<"=====Autenticacion Valida===="<<endl;
                    string datain="";
                    int rep=0;
                    cout<<"|||-------ADMINISTRADOR-------|||"<<endl;
                    cout << "|||-------registro de usuarios-------|||"<<endl;

                        cout << "Ingrese la cedula del usuario: "<< endl;
                        cin >> cedu_;
                        cedu_="cc"+cedu_;
                        cout << "Ingrese la clave del usuario: " << endl;
                        cin >> clave_;
                        clave_="cl"+clave_;
                        cout << "Ingrese el saldo del usuario: "<< endl;
                        cin >> saldo_;
                        saldo_="sa"+saldo_;
                        string dataincod=cedu_+clave_+saldo_;
                        //cout<<"sincod: "+dataincod<<endl;

                    datain=codificacionpalabra1(dataincod,4);

                    string dataInmod=lecturaArchivo("Usuarios");
                    cantUsuarios+=1;
                    escrituraArchivo(to_string(cantUsuarios),"cantUsers");
                
                    dataInmod+=","+datain;
                    //cout<<dataInmod<<endl;
                    escrituraArchivo(dataInmod,"Usuarios");
                    
                }else{
                    cout<<"Datos Incorrectos"<<endl;
                }

            break;
            case 2:
                if(cantUsuarios>0){
                    cout<<"Ingrese Usuario:"<<endl;
                    cin>>user;
                    cout<<"Ingrese Contraseña:"<<endl;
                    cin>>contra;
                    verificar=VerificarUsuario(user, contra, cantUsuarios);

                    if(verificar){
                        int menuU=0;
                        while(menuU!=3){
                            
                            cout<<"|||--------MENU USUARIO--------|||"<<endl;
                            cout<<"1. Consultar Saldo"<<endl;
                            cout<<"2. Retirar Dinero"<<endl;
                            cout<<"3. Salir"<<endl;
                            cin>>menuU;

                            char respU;
                            switch(menuU){
                                case 1:
                                    cout<<"Este proceso cuesta 1000, desea continuar? [y/n]"<<endl;
                                    cin>>respU;
                                    if(respU=='y'){
                                        saldo-=1000;
                                        cout<<"Su saldo actual es: "<<saldo<<endl;
                                        actualizarDatosUsuario(cedu, cantUsuarios);
                                    }            
                                break;
                                case 2:
                                    cout<<"Este proceso cuesta 1000, desea continuar? [y/n]"<<endl;
                                    cin>>respU;
                                    if(respU=='y'){

                                        int retiro=0;
                                        cout<<"Cuanto desea retirar: "<<endl;
                                        cin>>retiro;
                                        saldo-=retiro;
                                        saldo-=1000;
                                        cout<<"Su saldo actual es: "<<saldo<<endl;

                                        actualizarDatosUsuario(cedu, cantUsuarios);

                                    }

                                break;
                                case 3:
                                    cout<<"Retorno menu principal"<<endl;
                                break;
                                default:
                                    cout<<"Esa opcion no existe"<<endl;
                                break;
                            }
                        }
                    }

                }else{
                    cout<<"No hay usuarios registrados"<<endl;
                }
               
            break;
            case 3:
                cout<<"Fin del programa"<<endl;
            break;
            default:
                cout<<"Esa opcion no existe"<<endl;
            break;

        }

    }

    return 0;
}
