#include <stdio.h>
int main(int argc, char const *argv[])
//Calcular salario de un obrero con 25% de aumento
{
    float salario, salario_aumentado;
    float porcentaje = 0.25;//se expresa como un decimal
    printf("Digame su salario: ");
    scanf("%f", &salario);
    salario_aumentado=salario + (salario*porcentaje);
    printf("Su nuevo salario ahora es de: %.2f\n", salario_aumentado);
    return 0;
}

