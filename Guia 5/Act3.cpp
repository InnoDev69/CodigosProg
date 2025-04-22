#include <iostream>
using namespace std;

int main(){
    int num, totalPorcentaje;
    float primosCant=0, totalNum=0;
    cout << "Ingrese un numero: ";
    cin >> num;
    while(num != 0){
        totalNum++;
        int divisor = 2;
        
        while (num % divisor != 0){
            divisor++;
        }
        if (divisor==num) primosCant++;
        cin>>num;
    }
    totalPorcentaje=((totalNum-primosCant)/totalNum)*100;
    cout << primosCant << endl << totalNum << endl;
    cout << "Porcentaje de numeros no primos: " << totalPorcentaje << "%" << endl;
    cout << "Porcentaje de numeros primos: " << 100-totalPorcentaje << "%" << endl;
    return 0;
}