#include <iostream>
using namespace std;

int main(){
    int maxNeg=-99999999;
    int maxPos=0;
    int n;
    for (int i=0;i<5;i++){
        cout << "Ingrese un numero: "; cin >> n;
        if (n>0){
            if (maxPos<n) maxPos=n;
        }else{
            if (maxNeg<n) maxNeg=n;
        }
    }
    cout << "Maximo positivo: " << maxPos << endl;
    cout << "Maximo negativo: " << maxNeg << endl;
    return 0;
}