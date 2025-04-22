#include <iostream>
using namespace std;

int main() {
    int num, primerNumero, cantPerf=0;
    
    for (int x=0; x<3; x++){
        cout << "Ingrese un numero (0 para una nueva lista): " <<endl;
        cin >> num;
        while (num!=0){   
            int suma = 0, divisor = 1;
            // Encontrar y sumar los divisores propios
            while(divisor < num) {
                if(num % divisor == 0) {
                    suma += divisor;
                }
                divisor++;
            }
            
            // Verificar si es perfecto
            if(suma == num) {
                cantPerf++;
            }
            cin >> num;
        }
        cout << "-------------------------------------------" <<endl;
    }
    cout << "Numeros perfectos totales: " << cantPerf <<endl;
}