#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0.0;
    const int totalNotas = 5;

    cout << "Ingrese " << totalNotas << " notas:" << endl;

    for (int i = 0; i < totalNotas; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> nota;
        suma += nota;
    }

    float promedio = suma / totalNotas;
    cout << "El promedio de las notas es: " << promedio << endl;

    return 0;
}