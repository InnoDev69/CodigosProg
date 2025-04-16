#include <iostream>
using namespace std;
int main(){
    int num, primMayorNum, secMayorNum;

    cout << "Ingrese una lista de numeros (0 para salir): ";
    cin >> num;

    if(num == 0){
        cout << "No se ingresaron numeros" << endl;
        return 0;
    }

    primMayorNum = num;
    secMayorNum = num;

    while (num!=0){
        if (num > primMayorNum){
            secMayorNum = primMayorNum;
            primMayorNum = num;
        } else if (num > secMayorNum && num < primMayorNum){
            secMayorNum = num;
        }
        cin >> num;
    }

    cout << "El primer mayor es: " << primMayorNum << endl;
    cout << "El segundo mayor es: " << secMayorNum << endl;
    return 0;
}