#include <stdio.h>
/*Arreglos o vectores*/
/*Vector de enteros tamano 4*/
int main(int argc, char const *argv[])
{
    int vector[5];
    //Agregar elemento al vector
    vector[0]=13;
    vector[1]=0;
    vector[2]=100;
    vector[3]=59;
    vector[4]=17;
    printf("Numero almacenados: \n");
    printf("Elemento 0: %d\n", vector[0]);
    printf("Elemento 1: %d\n", vector[1]);
    printf("Elemento 2: %d\n", vector[2]);
    printf("Elemento 3: %d\n", vector[3]);
    printf("Elemento 4: %d\n", vector[4]);

    return 0;
}
