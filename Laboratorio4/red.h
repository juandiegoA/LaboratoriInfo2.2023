#ifndef RED_H
#define RED_H
#include "enrutador.h"
#include <list>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>


class red
{
private:
    map<char,enrutador> redes;
    map<char,enrutador>::iterator i, it;


public:
    void agregar_enrutador(char);
    void eliminar_enrutador(char);
    void ver_enrutador(char);
    void ver_tabla();
    bool agregar_enlace(char,char,int);
    void eliminar_enlace(char,char);
    void buscar_ruta(char,char);
    void leer_archivo();
    void red_aleatoria(int);
};

#endif // RED_H
