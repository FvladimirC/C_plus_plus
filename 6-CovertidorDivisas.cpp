#include <iostream>
using namespace std;

int main() {
    float dinero, resultado;
    int opcion;
    char continuar;

    do {
        cout << "=== Convertidor de Divisas ===" << endl;
        cout << "Ingrese la cantidad a covertir: ";
        cin >> dinero;

        cout << "\nSeleccione la moneda a la que desea convertir:" << endl;
        cout << "1. Dollar (1 USD = 58.73 DOP)" << endl;
        cout << "2. Euros (1 EUR = 66.44 DOP)" << endl;
        cout << "3. Yenes Japoneses (1 JPY = 0.41 DOP)" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                resultado = dinero * 58.73;
                cout << dinero << " USD = " << resultado << " DOP" << endl;
                break;
            case 2:
                resultado = dinero * 66.44;
                cout << dinero << " EUR = " << resultado << " DOP" << endl;
                break;
            case 3:
                resultado = dinero * 0.41;
                cout << dinero << " Yenes = " << resultado << " DOP" << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
        }

        cout << "\n¿Desea realizar otra conversión? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "Gracias por usar el convertidor." << endl;
    return 0;
}
