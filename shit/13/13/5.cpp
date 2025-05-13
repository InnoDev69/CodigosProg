#include <iostream>
using namespace std;

int main(){
    /*
    hacer un programa para ingresar 5 numeros, calcular el promedio de ellos y luego calcular cueantos son mayores al promedio
    */
    int num[5];
    int suma = 0;
    float promedio;
    for (int i = 0; i < 5; i++){
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> num[i];
        promedio += num[i];
    }
    promedio /= 5;
    for (int j=0; j<5;j++){
        if (num[j] > promedio){
            suma++;
        }
    }
    cout << "El promedio: " << promedio << endl; 
    cout << "Los numeros mayores al promedio son: " << suma << endl;

    return 0;
} 