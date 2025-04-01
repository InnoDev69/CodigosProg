#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout<<"Ingrese 1er numero:";/*->*/ cin >> num1;
    cout<<"Ingrese 2do numero:";/*->*/ cin >> num2;
    cout<<"Ingrese 3er numero:";/*->*/ cin >> num3;
    int max = num1;
    int min = num1; 

    if (num2 > max) max = num2;
    else max = max;
    
    if (num3 > max) max = num3;
    else max = max;
    
    if (num2 < min) min = num2;
    else min = min;
    
    if (num3 < min) min = num3;
    else min = min; 
    
    cout << "Maximo " << max << "|Medio " << num1 + num2 + num3 - min - max << " Minimo " << min;
    /*La cuenta es simple, se suma todo y el total se resta por el maximo y minimo dejando
    el resto, Ej: 2+4+8 = 14 | 14 - 2 - 8 = 4.
    En sintesis descompone los valores para dejar de resultado el valor mediano*/
    return 0;
}