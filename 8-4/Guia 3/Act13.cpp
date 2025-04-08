#include <iostream>

using namespace std;

int main(){
    bool esPar;
    int nAnt, n, maxNeg=-99999999,maxPos=0;
    for (int i=0;i<10;i++){
        cout << "Ingrese un numero: "; cin >> n;
        if (n % 2 == 0){
            esPar=true;
            if (n>0){
                if (nAnt>n) maxPos=n;
            }else{
                if (maxNeg<n) maxNeg=n;
            }
        }else esPar=false;
    }
    if (esPar){
        cout << "Maximo positivo: " << maxPos << endl;
    }
    return 0;
}