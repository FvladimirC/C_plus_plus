#include <iostream>
#include <string>
#include <cctype> // Para las funciones isupper y islower

using namespace std;

int main() {
    
    string frase;
   
    int mayusculas = NULL;
    int minusculas = NULL;

    cout << "Ingrese una frase: ";
    getline(cin, frase); // Usamos getline para leer la frase completa, incluyendo espacios

    for (char caracter : frase) {
        if (isupper(caracter)) {
            mayusculas++;
        } else if (islower(caracter)) {
            minusculas++;
        }
    }
    cout << " " << endl;
    cout << "El Numero de letras mayusculas es: " << mayusculas << endl;
    cout << "El Numero de letras minusculas es: " << minusculas << endl;
    return 0;
}
