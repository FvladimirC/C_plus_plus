#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Ingresa un número (0 para salir): ";
        cin >> numero;

        if (numero > 0) {
            cout << "El número es positivo." << endl;
        } else if (numero < 0) {
            cout << "El número es negativo." << endl;
        }
    } while (numero != 0);

    cout << "Programa terminado." << endl;
    return 0;
}