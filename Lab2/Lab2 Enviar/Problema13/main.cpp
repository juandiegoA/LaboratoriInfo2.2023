#include <iostream>
using namespace std;
int estrellas=0;
int fot[6][8]=
    {{0,3,4,0,0,0,6,8},
    {5,13,6,0,0,0,2,3},
    {2,6,2,7,3,0,10,0},
    {0,0,4,15,4,1,6,0},
    {0,0,7,12,6,9,10,4},
    {5,0,6,10,6,4,8,0}};
void fun(int *foto){
    int m=0;
    for(int i=8;i<40;i++){
        if(i%8!=0 && ((i+1)%8!=0)){
            m=*(foto+i);//numero del centro
            m+=*(foto+i-8);//arriba
            m+=*(foto+i+8);//numero de abajo
            m+=*(foto+i+1);//numero de la derecha
            m+=*(foto+i-1);//numero de la izquierda
            if((float)m/5 > 6){
                estrellas++;
                //cout<<"\n"<<i<<"\n";
            }
        }
    }
    cout<<"Hay "<<estrellas<<" estrellas"<<endl;
}

int main(){
    fun(*fot);
    return 0;
}
