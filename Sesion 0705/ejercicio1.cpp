#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    int divisor = 2;
    while (divisor < numero) {
        if (numero % divisor == 0) {
            return false;
        }
        divisor++;
    }

    return true;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << "El " << numero << " es un numero primo." << endl;
    } else {
        cout << "El " << numero << " no es un numero primo." << endl;
    }

    return 0;
}