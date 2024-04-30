#include <stdio.h>

int main() {
    int year;

    printf("Introduce el ano: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("El ano %d es bisiesto.\n", year);
    } else {
        printf("El ano %d no es bisiesto.\n", year);
    }

    return 0;
}