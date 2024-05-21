#include <iostream>
#include <stdio.h>
#include "variable.h"

using namespace std;
/*
C REATE
R EAD
U UPDATE
D ELETE
*/

//CREATE
void addReg();
void showReg();
void menu();
void addReg(){
    cout << "*.*.*DATOS DEL ESTUDIANTE*.*.*.*\n";
    cout << "CIF: ";
    scanf(" %[^\n]", people[pos].cif); //acepta los espacios, lee los espacios hasta que el usuario introduzca un espacio
    cout << "NOMBRES: ";
    scanf(" %[^\n]", people[pos].name);
    cout << "APELLIDOS: ";
    scanf(" %[^\n]", people[pos].lastName);
    cout << "AÑO DE NACIMIENTO: ";
    scanf("%d", & people[pos].year);
    pos++;

}


void showReg(){
    cout << "*******Datos del Estudiante*******\n ";
    for (int i = 0; i < pos; i++){
        printf("Nombre: %s %s \nAño: %d" , people[i].name, people[i].lastName , people[i].year);
        cout << "\n************************************\n ";
    }
}

void menu(){
    int op=0;
    do
    {
        system("cls||clear");
        cout << "1. Agregar \n ";
        cout << "2. Mostrat \n ";
        cout << "3. Salir \n ";
        cout << "Opcion: ";
        cin >> op;
        switch (op){
            case 1:
                addReg();
                system("read -n 1 -s -p \"Presione una tecla para continuar...\"");
                break;
            case 2:
                showReg();
                system("read -n 1 -s -p \"Presione una tecla para continuar...\"");
                break;
            case 3:
                cout << "Adios\n";
                system("read -n 1 -s -p \"Presione una tecla para continuar...\"");
                break;
            default:
                cout << "Opcion no valida\n";
                break;
        }
        

    } while (op!=3);
    


}
//do while entra aunque sea una vez al ciclo