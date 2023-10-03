#include <iostream>

using namespace std;
int divisores(int x){
    int sum = 0;
    for(int l=1; l<= x/2; l++){
        if(x%l == 0){
            sum += l;
        }
    }
    return sum;
}

int main()
{
  int rei, rej, n, fsum;
  cout<<"Ingrese el numero tope: ";
  cin>>n;
  fsum = 0;
  for(int i=2; i<=n; i++){
      rei = divisores(i);
      for(int j=i; j<=n; j++){
          rej=divisores(j);
          if((rei==j) && (rej==i) && (i!=j)){
              fsum=fsum+(j+i);
          }
      }
  }
  cout<<"El resultasdo de la suma es: "<<fsum<<endl;
  return 0;
}
//Codigo Arduino
//---------------------------------------------------------------------------------------------------------------------------
/*
int rei, rej, n, fsum;
void setup()
{
  Serial.begin(9600);
}

int divisores(int x){
    int sum = 0;
    for(int l=1; l<= x/2; l++){
        if(x%l == 0){
            sum += l;
        }
    }
    return sum;
}

void loop()
{
  Serial.println("Ingrese el numero tope: ");
  n=Serial.read();
  fsum = 0;
  for(int i=2; i<=n; i++){
      rei = divisores(i);
      for(int j=i; j<=n; j++){
          rej=divisores(j);
          if((rei==j) && (rej==i) && (i!=j)){
              fsum=fsum+(j+i);
          }
      }
  }
  Serial.print("El resultasdo de la suma es: ");
  Serial.println(fsum);
  delay(10000);
}
*/
