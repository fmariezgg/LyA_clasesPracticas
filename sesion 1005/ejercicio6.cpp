#include <iostream>
using namespace std;

int main() {
    int cantidadCalificaciones;
    cout << "Ingrese la cantidad de calificaciones a promediar: ";
    cin >> cantidadCalificaciones;

    int calificaciones[cantidadCalificaciones];
    int suma = 0;
    int i = 0;

    while (i < cantidadCalificaciones) {
        cout << "Ingrese la calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
        i++;
    }

    double promedio = static_cast<double>(suma) / cantidadCalificaciones;

    cout << "El promedio de las calificaciones ingresadas es: " << promedio << endl;

    return 0;
}