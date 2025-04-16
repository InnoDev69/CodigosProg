#include <iostream>
using namespace std;

int main() {
    int num, suma = 0, divisor = 1;
    
    cout << "Ingrese un numero: ";
    cin >> num;
    
    // Encontrar y sumar los divisores propios
    while(divisor < num) {
        if(num % divisor == 0) {
            suma += divisor;
        }
        divisor++;
    }
    
    // Verificar si es perfecto
    if(suma == num) {
        cout << num << " es un numero perfecto" << endl;
    } else {
        cout << num << " no es un numero perfecto" << endl;
    }
    
    return 0;
}