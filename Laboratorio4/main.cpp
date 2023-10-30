#include "red.h"
#include "enrutador.h"
#include "enrutador.cpp"
#include "red.cpp"
#include <iostream>

using namespace std;
int main()
{
    red net;
    char nombre, nombre1;
    int costo, n;
    while(true){
        cout << "\n\tMenu principal" << endl;
        cout << "1) Agregar enrutador" << endl;
        cout << "2) Eliminar enrutador " << endl;
        cout << "3) Ver enrutador" << endl;
        cout << "4) Ver tabla" << endl;
        cout << "5) Ver ruta y costo" << endl;
        cout << "6) Cargar una red" << endl;
        cout << "7) Cambiar costo" << endl;
        cout << "8) Enlaces (eliminar o agregar)" << endl;
        cout << "9) Salir" << endl <<endl;
        short option;
        cin >> option;
        switch (option) {
        case 1:
            cout << "Ingrese el nombre del enrutador: ";cin>>nombre;
            net.agregar_enrutador(nombre);
            break;
        case 2:
            cout << "Ingrese el nombre del enrutador: ";cin>>nombre;
            net.eliminar_enrutador(nombre);
            break;
        case 3:
            cout << "Ingrese el nombre del enrutador: ";cin>>nombre;
            net.ver_enrutador(nombre);
            break;
        case 4:
            net.ver_tabla();
            break;
        case 5:
            cout<<"Ingrese el nombre del enrutador 1: ";cin>>nombre;
            cout<<"Ingrese el nombre del enrutador 2: ";cin>>nombre1;
            net.buscar_ruta(nombre,nombre1);
            break;
        case 6:
            cout<<"\n1) Red aleatoria"<<endl;
            cout<<"2) Desde un archivo"<<endl;
            cin>>option;
            switch (option) {
            case 1:
                cout<<"Ingrese cantidad de enrutadores [2,25]"<<endl;
                cin>>n;
                net.red_aleatoria(n);
                break;
            case 2:
                net.leer_archivo();
                break;
            default:
                cout<<"Opcion invalida"<<endl;
                break;
            }
            break;
        case 7:
            cout<<"Ingrese el nombre del enrutador 1: ";cin>>nombre;
            cout<<"Ingrese el nombre del enrutador 2: ";cin>>nombre1;
            cout<<"Ingrese el nuevo costo: ";cin>>costo;
            if(net.agregar_enlace(nombre, nombre1, costo))cout<<"Se ha cambiado el costo"<<endl;
            break;
        case 8:
            cout<<"\n1) Agregar enlace"<<endl;
            cout<<"2) Eliminar enlace"<<endl;
            cin>>option;
            switch (option) {
            case 1:
                cout<<"Ingrese el nombre del enrutador 1: ";cin>>nombre;
                cout<<"Ingrese el nombre del enrutador 2: ";cin>>nombre1;
                cout<<"El costo debe estar entre 1 y 100"<<endl;
                cout<<"Ingrese el costo: ";cin>>costo;
                if(net.agregar_enlace(nombre, nombre1, costo))cout<<"se ha realizado el enlace"<<endl;
                break;
            case 2:
                cout<<"Ingrese el nombre del enrutador 1: ";cin>>nombre;
                cout<<"Ingrese el nombre del enrutador 2: ";cin>>nombre1;
                net.eliminar_enlace(nombre,nombre1);
                break;
            default:
                cout<<"Opcion invalida"<<endl;
                break;
            }
            break;
        default:
            exit(1);
            break;
        }
    }

    return 0;
}
