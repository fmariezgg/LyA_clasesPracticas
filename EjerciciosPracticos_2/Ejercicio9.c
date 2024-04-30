#include <stdio.h>

int main() {
    float inversion, intereses;

    printf("Introduce la cantidad de la inversion: ");
    scanf("%f", &inversion);

    intereses = inversion * 0.05;

    if(intereses > 7000) {
        inversion += intereses;  
        printf("Los intereses generados son más de $7000. Después de reinvertir, la cantidad final en la cuenta es: $%.2f\n", inversion);
    } else {
        printf("Los intereses generados son: $%.2f\n", intereses);
    }

    return 0;
}