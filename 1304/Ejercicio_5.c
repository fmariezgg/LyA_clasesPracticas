#include <stdio.h>

int main()
{
    float precio_original, descuento, nuevo_precio;
    printf("Ingrese el precio original del producto: ");
    scanf("%f", &precio_original);
    descuento = 0.15 * precio_original;
    nuevo_precio = precio_original - descuento;
    printf("\nPrecio original: $%.2f\n", precio_original);
    printf("Descuento (15%%): $%.2f\n", descuento);
    printf("Nuevo precio: $%.2f\n", nuevo_precio);

    return 0;
}