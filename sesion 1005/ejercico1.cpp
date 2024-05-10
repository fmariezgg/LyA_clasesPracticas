#include <iostream>

int main() {
    int numero;

    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> numero;

    if (numero <= 0) {
        std::cout << "El número ingresado no es válido." << std::endl;
        return 0;
    }

    for (int i = 1; i <= numero; i++) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}