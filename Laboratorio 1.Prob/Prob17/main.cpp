#include <iostream>

using namespace std;
int divs(int n);

int main()
{
    int d=0,k=1,n;
    cin>>n;
    for(int i=2;i>0;i++){
        k+=i;
        if(i%2==0)
            d=divs(i/2)*divs(i+1);
        else
            d=divs(i)*divs((i+1)/2);
        if(d>=n){
            cout<<"El numero es: "<<k<<" que tiene"<<d<<" divisores"<<endl;
            break;
        }
        d=0;
    }
    return 0;
}

int divs(int n){
    int i, d=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            d+=1;
        }
    }
    return d;
}
