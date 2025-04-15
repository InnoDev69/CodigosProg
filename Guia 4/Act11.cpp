#include <iostream>
using namespace std;

int main() {
    float numero;
    float maximo_negativo = 0;
    float minimo_positivo = 0;
    bool hay_negativos = false;
    bool hay_positivos = false;
    
    cout << "Ingrese numeros (finalice con 0):" << endl;
    
    while (numero != 0) {
        cin >> numero;
        
        if (numero < 0) {
            if (!hay_negativos || numero > maximo_negativo) {
                maximo_negativo = numero;
                hay_negativos = true;
            }
        }
        
        else if (numero > 0) {
            if (!hay_positivos || numero < minimo_positivo) {
                minimo_positivo = numero;
                hay_positivos = true;
            }
        }
    }
    
    if (hay_negativos) {
        cout << "Maximo Negativo: " << maximo_negativo << endl;
    } else {
        cout << "No se ingresaron numeros negativos" << endl;
    }
    
    if (hay_positivos) {
        cout << "Minimo Positivo: " << minimo_positivo << endl;
    } else {
        cout << "No se ingresaron numeros positivos" << endl;
    }
    
    return 0;
}