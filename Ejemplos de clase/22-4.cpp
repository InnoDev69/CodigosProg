#include <iostream>
using namespace std;

int main(){
    int num, maxImp, maxPar, posTotal;
    for (int i=0; i<5; i++){
        cout << "Ingrese un numero (0 para cerrar lista)" << endl;
        cin >> num;
        if (num % 2 == 0) maxPar=num;
        else maxImp = num;

        while (num!=0){
            if (num>0) posTotal+=num;
            if (num % 2 == 0){
                if(num>maxPar) maxPar=num;
            }
            else if(num>maxImp) maxImp = num;
            cin>>num;
        }
        cout << "-------------------------------------" << endl;
    }
    cout << "Numero maximo par: " << maxPar << endl;
    cout << "Numero maximo impar:" << maxImp << endl;
    cout << "Total de numeros positivos: " << posTotal << endl;
    return 0;
}