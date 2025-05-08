#include <iostream>
using namespace std;
int main() {
  
  int numero;

  cout << "Por favor, introduce un número entero positivo: "<<endl;
  cin >> numero;

  if (numero < 0) {
    cout << "Por favor, introduce un número entero positivo." << endl;
  } 
  else {
    cout << "Cuenta regresiva desde " << numero << " hasta 0:" << endl;
    for (int i = numero; i >= 0; --i) {
      cout << i << endl;
    }
  }

  return 0;
}