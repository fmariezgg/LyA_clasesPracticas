#include <iostream>

void bubbleSort(int arr[], int n) {
    int i = 0;
    while (i < n-1) {
        int j = 0;
        while (j < n-i-1) {
            if (arr[j] > arr[j+1]) {
                // Intercambiar los elementos
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            j++;
        }
        i++;
    }
}

int main() {
    int arr[5];

    // Solicitar al usuario ingresar los números
    std::cout << "Ingrese 5 números enteros: ";
    int i = 0;
    while (i < 5) {
        std::cin >> arr[i];
        i++;
    }

    // Ordenar el arreglo utilizando el algoritmo de ordenamiento de burbuja
    bubbleSort(arr, 5);

    // Imprimir el arreglo ordenado
    std::cout << "Arreglo ordenado en forma ascendente: ";
    int j = 0;
    while (j < 5) {
        std::cout << arr[j] << " ";
        j++;
    }
    std::cout << std::endl;

    return 0;
}