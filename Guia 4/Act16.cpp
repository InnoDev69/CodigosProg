#include <iostream>
using namespace std;

int main(){
    int num, antNum, maxNum;
    
    cout << "Ingrese una lista de numeros (el programa termina cuando un numero se ingrese dos veces consecutivas): ";
    
    cin >> num;
    if(num == 0){
        cout << "No se ingresaron numeros." << endl;
        return 0;
    }
    maxNum = num;
    antNum = num;
    while (true){
        cin >> num;

        if (num == antNum){
            break;
        }
        if (num >= maxNum){
            maxNum = num;
        }
        antNum = num;
    }
    cout << "El numero maximo es: " << maxNum << endl;
    return 0;
}