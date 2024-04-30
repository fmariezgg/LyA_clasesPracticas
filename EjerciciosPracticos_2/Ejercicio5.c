#include <stdio.h>

int main() {
    int n, suma;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    suma = n * (n + 1) / 2;
    printf("La sumatoria de los primeros %d numeros es: %d\n", n, suma);

    return 0;
}