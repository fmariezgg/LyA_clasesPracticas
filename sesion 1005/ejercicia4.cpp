#include <iostream>

int main() {
    int numeros[5];
    int suma = 0;

    std::cout << "Ingrese 5 numeros enteros:" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];
        suma += numeros[i];
    }

    std::cout << "La suma de los numeros ingresados es: " << suma << std::endl;

    return 0;
}