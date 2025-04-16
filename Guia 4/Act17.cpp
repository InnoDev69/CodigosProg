#include <iostream>
using namespace std;

int main(){
    int num, antNum, maxNum;
    bool primerNumero = true;
    
    cout << "Ingrese una lista de numeros (el programa termina cuando se ingresen dos numeros positivos consecutivos): ";
    
    cin >> num;
    if(num == 0){
        cout << "No se ingresaron numeros." << endl;
        return 0;
    }
    
    maxNum = num;
    antNum = num;
    
    while (true){
        cin >> num;
        
        // Verificar si hay dos numeros positivos consecutivos
        if (num > 0 && antNum > 0){
            break;  // Sale sin analizar el ultimo numero
        }
        
        // Actualiza el maximo con el numero actual
        if (num > maxNum){
            maxNum = num;
        }
        
        antNum = num;
    }
    
    cout << "El numero maximo es: " << maxNum << endl;
    return 0;
}