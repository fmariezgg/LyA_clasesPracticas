#include <stdio.h>
/*Arreglos o vectores*/
/*Vector de enteros tamano 4*/
int main(int argc, char const *argv[])
{
    float arreglo[5];
    //Agregar elemento al vector
    arreglo[0]=7.1;
    arreglo[1]=7.2;
    arreglo[2]=7.3;
    arreglo[3]=7.4;
    arreglo[4]=7.5;
    arreglo[5]=7.6;
    printf("Numero almacenados: \n");
    printf("Elemento 0: %.2f\n", arreglo[0]);
    printf("Elemento 1: %.2f\n", arreglo[1]);
    printf("Elemento 2: %.2f\n", arreglo[2]);
    printf("Elemento 3: %.2f\n", arreglo[3]);
    printf("Elemento 4: %.2f\n", arreglo[4]);
    printf("Elemento 5: %.2f\n", arreglo[5]);

    return 0;
}
