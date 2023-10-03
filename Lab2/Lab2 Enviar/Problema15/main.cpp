 #include <iostream>
using namespace std;
int main(){
    cout<<"ingrese un cuadrado: ";
    int a[4],b[4];
    for(int i=0;i<4;i++){
        cout<<"\n["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<"ingrese el segundo cuadrado: ";
    for(int i=0;i<4;i++){
        cout<<"\n["<<i<<"]: ";
        cin>>b[i];
    }
    int campo[100][100],d1[2],d2[2];
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            campo[i][j]=0;
        }
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            if(i==a[0] and j==a[1]){
                d1[0]=i+a[2];
                d1[1]=j+a[3];
            }
            if(i==b[0] and j==b[1]){//esta es la posicion del segundo
                campo[i][j]=1;
                d2[0]=i;
                d2[1]=j;
            }
        }
    }
    int cont=0;
    if(d1[0]<d2[0]){
        a[0]=d1[0];
        a[1]=d1[1];
        while(d1[0]<d2[0]){
            d1[0]++;
            cont++;
        }
        a[2]=cont;
        cont=0;
        if(d1[1]>d2[1]){
            while(d1[1]>d2[1]){
                d1[1]--;
                cont++;
            }
        }else{
            while(d1[1]<d2[1]){
                d1[1]++;
                cont++;
            }
        }
        a[3]=cont;
    }else{
        a[0]=d2[0];
        a[1]=d2[1];
        while(d2[0]<d1[0]){
            d2[0]++;
            cont++;
        }
        a[2]=cont;
        cont=0;
        if(d2[1]>d1[1]){
            while(d2[1]>d1[1]){
                d2[1]--;
                cont++;
            }
        }else{
            while(d2[1]<d1[1]){
                d2[1]++;
                cont++;
            }
        }
        a[3]=cont;
    }cout<<"{";
    for(int i=0;i<4;i++){
        cout<<a[i]<<", ";
    }
    cout<<"}";
    return 0;
}
