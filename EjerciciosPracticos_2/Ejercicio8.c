#include <stdio.h>

int main() {
    float compra, total;

    printf("Introduce el monto de la compra: ");
    scanf("%f", &compra);

    if(compra > 1000) {
        total = compra * 0.8; 
        printf("El total a pagar después del descuento es: $%.2f\n", total);
    } else {
        printf("El total a pagar es: $%.2f\n", compra);
    }

    return 0;
}