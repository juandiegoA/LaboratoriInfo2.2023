#include <iostream>

using namespace std;

int main()
{
    char L;
    cout<<"Este programa toma una letra y dice si es consonante o vocal"<<endl;
    cout<<"Ingrese una letra: ";
    cin>>L;
    if ((L=='A')||(L=='E')||(L=='I')||(L=='O')||(L=='U')||(L=='a')||(L=='e')||(L=='i')||(L=='o')||(L=='u')){
        cout<<L<<" Es una vocal"<<endl;
    }else if ((L=='q')||(L=='w')||(L=='r')||(L=='t')||(L=='y')||(L=='p')||(L=='s')||(L=='d')||(L=='f')||(L=='g')||(L=='h')||(L=='j')||(L=='k')||(L=='l')||(L=='z')||(L=='x')||(L=='c')||(L=='v')||(L=='b')||(L=='n')||(L=='m')||(L=='Q')||(L=='W')||(L=='R')||(L=='T')||(L=='Y')||(L=='P')||(L=='S')||(L=='D')||(L=='F')||(L=='G')||(L=='H')||(L=='J')||(L=='K')||(L=='L')||(L=='Z')||(L=='X')||(L=='C')||(L=='V')||(L=='B')||(L=='N')||(L=='M')) {
        cout<<L<<" Es una consonante"<<endl;
}   else {
    cout<<"No es una letra"<<endl;
}
    return 0;
}
