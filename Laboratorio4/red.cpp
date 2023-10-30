#include "red.h"
//#include "enrutador.h"
//#include "enrutador.cpp"
void red::agregar_enrutador(char nombre)
{
    enrutador router;
    router.agregar_enlace(nombre,0);
    if(redes.find(nombre)==redes.end()){
        for(i=redes.begin();i!=redes.end();i++){
            i->second.agregar_enlace(nombre,-1);
            router.agregar_enlace(i->first,-1);

        }

        redes.insert(pair<char,enrutador>(nombre,router));
    }else cout << "El enrutador ya existe"<<endl;
}

void red::eliminar_enrutador(char nombre)
{
    if(redes.find(nombre)!=redes.end()){
        redes.erase(nombre);
        for(i=redes.begin();i!=redes.end();i++){
            i->second.eliminar_enlace(nombre);
        }
        cout<<"El enrutador se ha eliminado"<<endl;
    }else cout << "El enrutador no existe"<<endl;
}

void red::ver_enrutador(char nombre)
{
    if(redes.find(nombre)!=redes.end()){
        redes[nombre].print_enrutador();
    }else cout<<"El enrutador no existe"<<endl;
}

void red::ver_tabla()
{
    for(i=redes.begin();i!=redes.end();i++){
        cout<<"\nEnrutador "<<i->first<<":"<<endl;
        i->second.print_enrutador();
    }

}

bool red::agregar_enlace(char enrutador1, char enrutador2, int costo)
{

    bool p=false;
    if(costo<=1000000000 && costo>=1){
        if(enrutador1!=enrutador2){
            if(redes[enrutador1].modificar_enlace(enrutador2, costo) && redes[enrutador2].modificar_enlace(enrutador1, costo)){
               p=true;
            }else cout<<"Uno de los enrutadores no existe"<<endl;
        }else cout<<"No se puede hacer un enlace con el mismo enrutador"<<endl;
    }
    return p;
}

void red::eliminar_enlace(char enrutador1, char enrutador2)
{
    if(enrutador1!=enrutador2){
        if(redes[enrutador1].modificar_enlace(enrutador2,-1) && redes[enrutador2].modificar_enlace(enrutador1,-1)){
            cout<<"Se ha eliminado el enlace"<<endl;
        }else cout<<"Uno de los enrutadores no existe"<<endl;
    }else cout<<"No se puede eliminar el enlace"<<endl;
}

void red::buscar_ruta(char origen, char destino)
{
    //------------Algoritmo dijkstra-----------

    if(redes.find(origen)!=redes.end() && redes.find(destino)!=redes.end()){
        struct enlaces
        {
        public:
            struct prueba{
            public:
                char anterior=' ';
                int acumulado;
            }temporal, permanente;
        }d;
        map<char,enlaces> camino;
        map<char,enlaces>::iterator it;

        d.temporal.acumulado=2147483647;
        d.permanente.acumulado=-1;

        for(i=redes.begin();i!=redes.end();i++){
            camino.insert(pair<char,enlaces>(i->first,d));
        }

        char permanente=origen;
        camino[permanente].permanente.acumulado=0;
        list<int> acomulados;

        int menor_acomulado;

        while(true){
            for(i =redes.begin();i!=redes.end();i++){
                if(redes[permanente].ver_costo(i->first)!=-1 && redes[permanente].ver_costo(i->first)!=0){
                    if(camino[i->first].permanente.acumulado==-1){
                        if((camino[permanente].permanente.acumulado+redes[permanente].ver_costo(i->first))<(camino[i->first].temporal.acumulado)){
                            camino[i->first].temporal.anterior=permanente;
                            camino[i->first].temporal.acumulado=camino[permanente].permanente.acumulado+redes[permanente].ver_costo(i->first);
                        }
                    }

                }
            }
            acomulados.clear();
            for(it=camino.begin();it!=camino.end();it++){
                acomulados.push_back(it->second.temporal.acumulado);
            }
            acomulados.sort();
            menor_acomulado=*acomulados.begin();
            for(it=camino.begin();it!=camino.end();it++){
                if(it->second.temporal.acumulado==menor_acomulado){
                    it->second.permanente.acumulado=menor_acomulado;
                    it->second.permanente.anterior=it->second.temporal.anterior;
                    it->second.temporal.acumulado=2147483647;
                    permanente=it->first;
                    break;
                }
            }
            if(permanente==destino){
                break;
            }
        }
        string ruta;
        ruta.push_back(destino);
        char nodo=destino;
        it=camino.find(destino);
        while(nodo!=origen){
            nodo=it->second.permanente.anterior;
            ruta.push_back('-');
            ruta.push_back(nodo);
            it=camino.find(nodo);
        }
        string r;
        for(int i=ruta.length()-1;i>=0;i--){
            r.push_back(ruta[i]);
        }

        cout<<"La ruata mas corta es:\n"<<r<<" con un costo de: "<<camino[destino].permanente.acumulado<<endl;

    }else cout<<"Uno de los enrutadores no existe"<<endl;
}

void red::leer_archivo()
{
    redes.clear();
    ifstream fileinput;
    fileinput.open("red.txt",ios::in);
    if(fileinput.fail()){
        cout<<"No se pudo abrir el archivo, verifique que el archivo si exista"<<endl;
        exit(1);//Si no se pudo abrir el archivo termina la ejecucion del programa
    }

    string linea,costo;
    char enrutador1, enrutador2;
    while(!fileinput.eof()){   //Mientras no sea el final del archivo
        getline(fileinput,linea);
        enrutador1=linea[0];
        enrutador2=linea[2];
        for(unsigned int i=4;i<linea.length();i++){
            costo.push_back(linea[i]);
        }
        if(redes.find(enrutador1)==redes.end()){
            agregar_enrutador(enrutador1);
        }
        if(redes.find(enrutador2)==redes.end()){
            agregar_enrutador(enrutador2);
        }
        agregar_enlace(enrutador1,enrutador2,atoi(costo.c_str()));
        costo.clear();
      }
    fileinput.close();
    cout<<"La red se ha cargado"<<endl;
}

void red::red_aleatoria(int nodos)
{
    char enrutador='A';
    if(nodos>=2 && nodos<=25){
        redes.clear();
        while(enrutador!='A'+nodos){
            agregar_enrutador(enrutador);
            enrutador+=1;
        }
        int al;
        int al2;

        srand(time(NULL));
        for(i=redes.begin();i!=redes.end();i++){
          do{
               al2=rand()%nodos;
               al2+=65;
           } while(al2==i->first);
           agregar_enlace(i->first,al2,1+rand()%(100));
           for(it=redes.begin();it!=redes.end();it++){
               al=rand()%5;
               if(al==1 && i->first!=it->first){
                   agregar_enlace(i->first,it->first,1+rand()%(101-1));
               }
           }
       }
       cout<<"La red se ha creado"<<endl;
    }else cout<<"La cantidad de enrutadores no es valida"<<endl;
}
