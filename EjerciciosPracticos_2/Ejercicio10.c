#include <stdio.h>

int main() {
    int n, num, i, sumaPares = 0, productoImpares = 1;

    printf("Introduce la cantidad de numeros a leer: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Introduce el numero %d: ", i+1);
        scanf("%d", &num);

        if(num % 2 == 0) {
            sumaPares += num;
        } else {
            productoImpares *= num;
        }
    }

    printf("La suma de los numeros pares es: %d\n", sumaPares);
    printf("El producto de los numeros impares es: %d\n", productoImpares);

    return 0;
}