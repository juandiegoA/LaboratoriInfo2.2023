#ifndef ENRUTADOR_H
#define ENRUTADOR_H
#include <map>
#include <iostream>

using namespace std;

class enrutador
{
private:
    map<char,int> router;
    map <char, enrutador> redes;
    map<char,int>::iterator i;

public:
    bool agregar_enlace(char,int);
    bool modificar_enlace(char,int);
    bool eliminar_enlace(char);
    void print_enrutador();
    int ver_costo(char);
};

#endif // ENRUTADOR_H
