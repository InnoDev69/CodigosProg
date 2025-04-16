#include <iostream>
using namespace std;

int main(){
    int num, primerNum, ubPrimNum, ultNum, ubUltNumM, ciclo=0, divisor=2;
    bool esPrimerNum = true;
    cout << "Ingrese una lista de numeros (el programa termina cuando se ingresa un cero): ";
    cin >> num;
    while (num!=0){
        ciclo++;
        if (esPrimerNum && num%2==0){
            esPrimerNum = false;
            primerNum=num;
            ubPrimNum = ciclo;
        }
        while (num%divisor!=0){
            divisor++;
        }
        if (divisor==num){
            ultNum=num;
            ubUltNumM=ciclo;
        }
        cin >> num;
        divisor=2;
    }
    
    cout << primerNum << " es el primer numero par en la ub. "<< ubPrimNum << endl;
    cout << ultNum << " es el ultimo numero primo en la ub. "<< ubUltNumM << endl;
}