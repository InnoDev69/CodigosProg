#include <iostream>
using namespace std;

int main(){
    /*
    hacer un programa para ingresar 5 numeros, calcular el promedio de ellos y luego calcular cueantos son mayores al promedio
    */
    int num[5];
    int suma = 0;
    float promedio;
    int cont = 0;
    for (int i = 0; i < 5; i++){
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> num[i];
        suma += num[i];
    }

    return 0;
} 