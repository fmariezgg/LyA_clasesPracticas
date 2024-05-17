#include<iostream>
using namespace std;
#include "variable.h"
int menu();
void start();
void addGrade();
void showGrade();
void calcPromedio();

int menu(){

    int option;
    system("cls||clear");
    cout<<"1. Ingresar notas"<<endl;
    cout<<"2. Mostrar notas"<<endl;
    cout<<"3. Nota mas alta"<<endl;
    cout<<"4. Nota mas baja"<<endl;
    cout<<"5. Promedio"<<endl;
    cout<<"6. Salir"<<endl;
    cout<<"Ingrese una opcion: ";
    cin>>option;
    return option;
}
 
void start(){
    int option;
    while(option != 6){
        option = menu();
        switch(option){
            case 1:
                cout<<"Ingresar notas"<<endl;
                addGrade();
                system("read -n 1 -s -p \"Presione una tecla para continuar...\"");
                break;
            case 2:
                showGrade();
                calcPromedio();
                break;
            case 3:
                cout<<"Salir"<<endl;
                system("read -n 1 -s -p \"Presione una tecla para continuar...\"");
                break;
            default:
                cout<<"Opcion no valida"<<endl;
                system("read -n 1 -s -p \"Presione una tecla para continuar...\"");
                break;
        }
    }
}

void addGrade(){
    int position = 0;
    if(position < MAX){
        cout<<"Ingrese la nota: ";
        cin>>grades[position];
        position++;
    }else{
        cout<<"No hay espacio para mas notas"<<endl;
    }
}

void showGrade(){
    cout<< "Mostrar notas" << endl;
    for(int i = 0; i < position; i++){
        cout<<" Nota " << i + 1 << " : " << grades[i]<< endl;
    }
    
    system("read -n 1 -s -p \"Presione una tecla para continuar...\"");
}

void calcpromedio();{

    int sum = 0;
    for(int i = 0; i < position; i++){
        sum += grades[i];
    }
    cout<<"El promedio es: "<<sum/position<<endl;
    system("read -n 1 -s -p \"Presione una tecla para continuar...\"");
}