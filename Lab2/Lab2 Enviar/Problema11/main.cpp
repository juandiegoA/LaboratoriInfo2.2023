#include <iostream>
using namespace std;
char sala_cine[15][20];
void mostrar(){
    for(int i=0;i<15;i++){
    for (int l=0;l<20;l++){
        cout<<sala_cine[i][l]<<"  ";
        }
    cout<<endl;
    }
}
int main(){
for(int i=0;i<15;i++){
    for (int l=0;l<20;l++){
        sala_cine[i][l]='-';
    }
}
int op;
int a,f;
char r[1];
do{
    cout<<"\ningrese una opcion: \n1.Hacer reservacion.\n2.Cancelar reservacion.\n3.Salir.\n";
    cin>>op;
    switch(op){
        case 1:
            cout<<"\ningrese la fila que desea reservar: ";
            cin>>r;
            f=r[0]-65;
            cout<<"\ningrese la aciento que desea reservar: ";
            cin>>a;
            sala_cine[f][a-1]='+';
            mostrar();
            break;
        case 2:
            cout<<"\ningrese la fila que desea Cancelar: ";
            cin>>r;
            f=r[0]-65;
            cout<<"\ningrese la aciento que desea Cancelar: ";
            a;cin>>a;
            sala_cine[f][a-1]='-';
            mostrar();
            break;
        case 3:
            break;
        default:
            cout<<"\nopcion ingresada incorrecta.\n";
    }
}while(op!=3);
return 0;
}
