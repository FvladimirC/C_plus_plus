#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string palabra;
    bool esPalindromo = true;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    int longitud = palabra.length();

    for (int i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - 1 - i]) {
            esPalindromo = false;
            break;
        }
    }

    if (esPalindromo) {
        cout << "La palabra '" << palabra << "' es un palíndromo." << endl;
    } else {
        cout << "La palabra '" << palabra << "' no es un palíndromo." << endl;
    }
    return 0;
}
