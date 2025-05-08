#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int x;
    int y = 0;
    int numero;
    // Inicializa el generador de números aleatorios con la hora actual
    srand(time(NULL));
    // Genera un número aleatorio entre 1 y 100 (inclusive)
    numero = rand() % 100 + 1;

    cout << "¡Adivina el número secreto entre 1 y 100!\n";

    // Bucle while que continúa hasta que el usuario adivina el número
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