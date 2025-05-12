#include <iostream>

using namespace std;

int main() {
    cout << "Múltiplos de 3 entre 1 y 100:\n";
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
