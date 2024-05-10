#include <iostream>

int main() {
    const int SIZE = 10;
    int numeros[SIZE];
    int pares = 0;
    int impares = 0;
    int contador = 0;

    std::cout << "Ingrese 10 números enteros:" << std::endl;

    while (contador < SIZE) {
        std::cout << "Número " << contador + 1 << ": ";
        std::cin >> numeros[contador];

        if (numeros[contador] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        contador++;
    }

    std::cout << "Cantidad de números pares: " << pares << std::endl;
    std::cout << "Cantidad de números impares: " << impares << std::endl;

    return 0;
}