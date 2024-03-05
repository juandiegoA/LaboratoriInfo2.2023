#include <iostream>

using namespace std;

int main()
{

    cout<<"Este programa entraga la cantidad de dinero billetes y monedas que se deben entregar"<<endl;
    cout<<"Ingrese la cantidad de dinero a devolver: ";
    int X,A;
    cin>>X;
    A=X/50000;
    X=X%50000;
    cout<<"$50000: "<<A<<endl;
    A=X/20000;
    X=X%20000;
    cout<<"$20000: "<<A<<endl;
    A=X/10000;
    X=X%10000;
    cout<<"$10000: "<<A<<endl;
    A=X/5000;
    X=X%5000;
    cout<<"$5000: "<<A<<endl;
    A=X/2000;
    X=X%2000;
    cout<<"$2000: "<<A<<endl;
    A=X/1000;
    X=X%1000;
    cout<<"$1000: "<<A<<endl;
    A=X/500;
    X=X%500;
    cout<<"$500: "<<A<<endl;
    A=X/200;
    X=X%200;
    cout<<"$200: "<<A<<endl;
    A=X/100;
    X=X%100;
    cout<<"$100: "<<A<<endl;
    A=X/50;
    X=X%50;
    cout<<"$50: "<<A<<endl;
    cout<<"Faltante: "<<X<<endl;
    return 0;

}
//-----------------------------------------------------------------------------------------------------------------------
//Codigo en Arduino
/*void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println("Este programa entrega la cantidad de dinero billetes y monedas que se deben entregar");
  Serial.print("Ingrese la cantidad de dinero a devolver: ");
  int X, A;
  while (!Serial.available()) {
    // Wait for user input
  }
  X = Serial.parseInt();
  A = X / 50000;
  X = X % 50000;
  Serial.print("$50000: ");
  Serial.println(A);
  A = X / 20000;
  X = X % 20000;
  Serial.print("$20000: ");
  Serial.println(A);
  A = X / 10000;
  X = X % 10000;
  Serial.print("$10000: ");
  Serial.println(A);
  A = X / 5000;
  X = X % 5000;
  Serial.print("$5000: ");
  Serial.println(A);
  A = X / 2000;
  X = X % 2000;
  Serial.print("$2000: ");
  Serial.println(A);
  A = X / 1000;
  X = X % 1000;
  Serial.print("$1000: ");
  Serial.println(A);
  A = X / 500;
  X = X % 500;
  Serial.print("$500: ");
  Serial.println(A);
  A = X / 200;
  X = X % 200;
  Serial.print("$200: ");
  Serial.println(A);
  A = X / 100;
  X = X % 100;
  Serial.print("$100: ");
  Serial.println(A);
  A = X / 50;
  X = X % 50;
  Serial.print("$50: ");
  Serial.println(A);
  Serial.print("Faltante: ");
  Serial.println(X);
  delay(1000);
}
*/
