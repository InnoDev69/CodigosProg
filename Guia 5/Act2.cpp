#include <iostream>
using namespace std;

int main() {
    int num, primerNumero, cantNumPrimo=0;
    
    for (int x=0; x<3; x++){
        cout << "Ingrese un numero (0 para una nueva lista): " <<endl;
        cin >> num;
        while (num!=0){   
            int divisor=2;
            while (num % divisor != 0){
                divisor++;
            }
            if (divisor==num) cantNumPrimo++;
            cin >> num;
        }
        cout << "-------------------------------------------" <<endl;
    }
    cout << "Numeros primos totales: " << cantNumPrimo <<endl;
}