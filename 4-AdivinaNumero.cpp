#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int x;
    int y = 0;
    int numero;
    
    srand(time(NULL));
    // Genera un número aleatorio entre 1 y 100

    cout << "¡Adivina el número secreto entre 1 y 100!\n";

    // Bucle while que continua hasta que el usuario adivina el número
    while (true) {
        cout << "Introduce tu intento: ";
        cin >> x;
        y++;

        if (x == numero) {
            cout << "¡Felicidades! ¡Adivinaste el número en " << y << " intentos!\n";
            break;
        } else if (x < numero) {
            cout << "El número secreto es mayor.\n";
        } else {
            cout << "El número secreto es menor.\n";
        }
    }
    return 0;
}
