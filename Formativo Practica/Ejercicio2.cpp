#include <iostream>

using namespace std;

int sumar();
int restar();
int multiplicar();
int dividir();

int main(int argc, char const *argv[])
{
    int opcion;
    cout << "Bienvenido" << endl;
    cout << "Opcion 1: Sumar" << endl;
    cout << "Opcion 2: Restar" << endl;
    cout << "Opcion 3: Multiplicar" << endl;
    cout << "Opcion 4: Dividir" << endl;
    cout << "Opcion 5: Salir" << endl;

    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << sumar();
        break;
    case 2:
        cout << restar();
        break;
    case 3:
       cout << multiplicar();
        break;
    case 4:
        cout << dividir();
        break;
    case 5:
        cout << "Saliendo..." << endl;
        system("exit");
        break;

    default:
        cout << "Opcion invalida..";
        main(0, 0);
        break;
    }
    return 0;
}

int sumar()
{
    int numero1, numero2;

    cout << "Proporciona el valor del primer numero: " << endl;
    cin >> numero1;

    cout << "Proporciona el valor del segundo numero: " << endl;
    cin >> numero2;

    return numero1 + numero2;
}

int restar()
{
    int numero1, numero2;

    cout << "Proporciona el valor del primer numero: " << endl;
    cin >> numero1;

    cout << "Proporciona el valor del segundo numero: " << endl;
    cin >> numero2;

    return numero1 - numero2;
}

int multiplicar()
{
    int numero1, numero2;

    cout << "Proporciona el valor del primer numero: " << endl;
    cin >> numero1;

    cout << "Proporciona el valor del segundo numero: " << endl;
    cin >> numero2;

    return numero1 * numero2;
}

int dividir()
{
    int numero1, numero2;

    cout << "Proporciona el valor del primer numero: " << endl;
    cin >> numero1;

    cout << "Proporciona el valor del segundo numero: " << endl;
    cin >> numero2;

    if (numero2 > 0)
    {
        return numero1 / numero2;
    }
    return  0;

    
}