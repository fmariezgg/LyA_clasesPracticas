#include <iostream>

int main() {
    int numero;
    int factorial = 1;
    std::cout << "Ingrese un número entero no negativo: ";
    std::cin >> numero;
    if (numero < 0) {
        std::cout << "El número debe ser no negativo." << std::endl;
        return 0;
    }

    int i = 1;
    while (i <= numero) {
        factorial *= i;
        i++;
    }
    std::cout << "El factorial de " << numero << " es: " << factorial << std::endl;
    return 0;
}

