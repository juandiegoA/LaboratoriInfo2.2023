#include "enrutador.h"
//#include "red.h"
//#include "red.cpp"
bool enrutador::agregar_enlace(char, int) nombre, int costo)
{
    bool p=false;
    if(router.find(nombre)==router.end()){
        router.insert(pair<char,int>(nombre,costo));
        p=true;

    }
    return p;
}

bool enrutador::modificar_enlace(char nombre, int costo)
{
    bool p=false;
    if(router.find(nombre)!=router.end()){
        router[nombre]=costo;
        p=true;
    }
    return p;
}

bool enrutador::eliminar_enlace(char nombre)
{
    bool p=false;
    if(router.find(nombre)!=router.end()){
        router.erase(nombre);
        p=true;
    }
    return p;
}

void enrutador::print_enrutador()
{
    for(i=router.begin();i!=router.end();i++){
        if(i->second!=-1){
            cout<<i->first<<": costo "<<i->second<<endl;
        }
    }
}

int enrutador::ver_costo(char enrutador)
{
    return router[enrutador];
}
