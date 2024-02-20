#include <iostream>

using namespace std;

int main()
{
    cout<<"Ëste programa da un aproximado de Pi, en la suma de una susecion infinita"<<endl;
    float N;
    int signo=1;
    float sumatoria=0;
    cout << "Ingrese un numero: ";
    cin >> N;
    for(float i=1; i<N*2 ; i+=2){
        if(signo%2 == 0){
            sumatoria -= (1/i);
        }
        else{
            sumatoria += (1/i);
        }
        signo++;
    }
    cout<<"Pi es aproximadamente"<<4*sumatoria<<endl;

    return 0;
}
