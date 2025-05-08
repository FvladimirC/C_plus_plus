#include <iostream>

using namespace std;

int main() {
    
    int numero;
    int factorial = 1;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no está definido para numeros negativos." << endl;
    } else {
        for (int i = 1; i <= numero; i++) {
            factorial *= i;
        }
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }
    return 0;
}
