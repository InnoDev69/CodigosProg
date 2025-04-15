#include <iostream>
using namespace std;

int main() {
    int num, numAnt;
    bool primerNumero = true;
    bool ordenado = true;
    
    cout << "Ingrese una lista de numeros (0 para salir): ";
    
    cin >> num;
    while (num != 0) {
        if (primerNumero) {
            numAnt = num;
            primerNumero = false;
        } else {
            if (numAnt > num) {
                ordenado = false;
            }
            numAnt = num;
        }
        cin >> num;
    }
    
    if (ordenado) {
        cout << "Conjunto Ordenado" << endl;
    } else {
        cout << "Conjunto No Ordenado" << endl;
    }
    
    return 0;
}