#include <iostream>

using namespace std;
int main(){
    int nAnt,n, maxNeg, maxPos;
    for (int i=0;i<10;i++){
        cout << "Ingrese un numero: "; cin >> n;
        if (n % 2 != 0){
            if (n>0){
                if (nAnt>n) maxPos=n;
            }else{
                if (nAnt>n) maxNeg=n;
            }
        }
    }
    cout << "Maximo positivo: " << maxPos << endl;
    cout << "Maximo negativo: " << maxNeg << endl;
    return 0;
}