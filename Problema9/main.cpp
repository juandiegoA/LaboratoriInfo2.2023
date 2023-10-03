#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main() {
    int n;
    string inputString;

    cout << "Ingrese el valor n: ";
    cin >> n;
    cout << "Ingrese los datos numericos: ";
    cin >> inputString;

    int stringLength = inputString.length();
    int numDigits = ceil(static_cast<double>(stringLength) / n); //Tomar los datos numericos uno por uno.
    int padding = n - (stringLength % n);

    // Sumar los ceros
    if (padding != n) {
        inputString = string(padding, '0') + inputString;
    }

    int sum = 0;
    for (int i = 0; i < numDigits; i++) {
        string substring = inputString.substr(i * n, n);
        int number = stoi(substring);
        sum += number;
    }

    cout << "Resultado: " << sum <<endl;

    return 0;
}
