#include<stdio.h>
int main(int argc, char const *argv[])
{
    int horas;
    float salario, salarioHora, total;
    printf("Digame su salario: ");
    scanf("%f", &salario);
    printf("Cuantas horas ha trabajado: ");
    scanf("%d", &horas);
    salarioHora = salario * horas;
    printf("Su salario por %d horas trabajadas es de %.2f", horas, salarioHora);

    return 0;
}
