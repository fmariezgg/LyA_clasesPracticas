#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float a, b, resultado;
    printf("Dime un numero: ");
    scanf("%f", &a);
    printf("Dime un numero: ");
    scanf("%f", &b);

    // Calculando la hipotenusa utilizando el teorema de Pitágoras
    resultado = sqrt(a * a + b * b);

    printf("El resultado de la hipotenusa es de %.2f ", resultado);

    return 0;
}