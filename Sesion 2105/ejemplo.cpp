#include <iostream>
//#include "variable.h"
using namespace std;
struct { //una variable,coleccion de elememntos que tienen algo en comun
    char cif [60];
    char name[60];
    char lastName[60];
    int year;

} person;



int main()
{
    cout << "CIF: ";
    cin >> person.cif;
    cout << "NOMBRE: ";
    cin >> person.name;

    cout << person.cif << " - " << person.name << endl;
    return 0;

}

