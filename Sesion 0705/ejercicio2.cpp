#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Ingresar un numero: ";
    cin >> num;
    int i = 0;
    cout << "*.*.* TABLA DE MULTIPLICAR *.*.*" << endl;

    while (i <= 12) {
        int resultado = i*num;
        cout << num << "*" << i << " = " << resultado << endl;
        i++;
    }
}  