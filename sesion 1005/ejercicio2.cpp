/*Escribe un programa que pida al usuario ingresar números enteros positivos y
calcule la suma de todos los números ingresados hasta que el usuario ingrese un
número negativo.*/
#include <iostream>
int main() {
    int number;
    int sum = 0;

    std::cout << "Ingrese un numero entero positivo (ingrese un número negativo para terminar): ";
    std::cin >> number;

    while (number >= 0) {
        sum += number;
        std::cout << "Ingrese otro numero entero positivo (ingrese un número negativo para terminar): ";
        std::cin >> number;
    }

    std::cout << "La suma de los numeros ingresados es: " << sum << std::endl;

    return 0;
}