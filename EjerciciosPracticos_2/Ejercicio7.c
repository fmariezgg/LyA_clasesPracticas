#include <stdio.h>

int main() {
    int num1, num2;

    printf("Introduce el primer numero: ");
    scanf("%d", &num1);

    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);

    if(num1 % num2 == 0) {
        printf("El numero %d es divisible por %d\n", num1, num2);
    } else {
        printf("El numero %d no es divisible por %d\n", num1, num2);
    }

    return 0;
}