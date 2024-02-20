#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string N, c;
    int g,y;
    cout<<"Ingrese un nuemro N: ";
    cin>>N;
    g = N.length();
    y = g-1;
    c = N[y];
    while (y!=0) {
        y=y-1;
        c = c+N[y];
    }
    if (N==c){
      cout<<N<<" Es un palindromo"<<endl;
    }else {cout<<N<<" No es un palindromo"<<endl;

}
    return 0;
}
