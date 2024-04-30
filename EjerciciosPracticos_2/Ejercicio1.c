#include <stdio.h>

int main(int argc, char const *argv[])
{
    int horas, minutos, segundos;
    printf("Ingresa las horas: ");
    scanf("%d", &horas);
    minutos = horas * 60;
    segundos=horas*3600;
    printf("%d horas son equivalentes a %d minutos y %d segundos.\n", horas, minutos, segundos);
    return 0;
}