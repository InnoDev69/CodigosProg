#include <iostream>
using namespace std;

int main(){
    int num, divisor=2;
    cout << "Ingrese un numero: ";
    cin >> num;
    while (num % divisor != 0){
        divisor++;
    }
    if (divisor==num){
        cout << "El numero es primo." << endl;
    }else{
        cout << "El numero no es primo." << endl;
    }
    return 0;
}