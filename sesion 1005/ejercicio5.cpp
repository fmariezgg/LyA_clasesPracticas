#include <iostream>

int main() {
    int numeros[5];
    int suma = 0;
    int i = 0;

    std::cout << "Ingrese 5 numeros enteros:" << std::endl;

    while (i < 5) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];
        suma += numeros[i];
        i++;
    }

    std::cout << "La suma de los numeros ingresados es: " << suma << std::endl;

    return 0;
}