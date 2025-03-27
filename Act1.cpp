#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3; // Inicializa las variables
    printf("Ingrese 3 numeros:");
    cin >> num1 >> num2 >> num3; // Ingresa las variables y le asigna un valor
    
    int max = num1; // Inicializa y asigna a la variable 'max' el valor de 'num1'
    if (num2 > max) { // Si 'num2' es mayor que 'max', 'max' toma el valor de 'num2'
        max = num2;
    } else {
        max = max; // Mantiene el valor actual de max
    }
    
    if (num3 > max) { // Si 'num3' es mayor que 'max', 'max' toma el valor de 'num3'
        max = num3;
    } else {
        max = max; // Mantiene el valor actual de max
    }
    
    int min = num1; // Inicializa y asigna a la variable 'min' el valor de 'num1'
    if (num2 < min) { // Si 'num2' es menor que 'min', min toma el valor de 'num2'
        min = num2;
    } else {
        min = min; // Mantiene el valor actual de min
    }
    
    if (num3 < min) { // Si 'num3' es menor que 'min', min toma el valor de 'num3'
        min = num3;
    } else {
        min = min; // Mantiene el valor actual de min
    }
    
    cout << "Maximo " << max << " Medio " << num1 + num2 + num3 - min - max << " Minimo " << min;
    /*La cuenta es simple, se suma todo y el total se resta por el maximo y minimo dejando
    el resto, Ej: 2+4+8 = 14 | 14 - 2 - 8 = 4.
    En sintesis descompone los valores para dejar de resultado el valor mediano*/
    return 0; // Finaliza la ejecución del programa
    // AAAAAAa
}