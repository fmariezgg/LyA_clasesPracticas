#include <stdio.h>

double convertirFahrenheitACelsius(double fahrenheit)
{
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

int main()
{
    double temperaturaFahrenheit;

    printf("Introduce la temperatura en grados Fahrenheit: ");
    scanf("%lf", &temperaturaFahrenheit);
    double temperaturaCelsius = convertirFahrenheitACelsius(temperaturaFahrenheit);
    printf("La temperatura en grados Celsius es: %.2lf\n", temperaturaCelsius);

    return 0;
}