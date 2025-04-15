#include <iostream>
using namespace std;

int main(){
    int num;
    int primNum=0, ultNum=0;
    bool primNumEncontrado=false;
    cout << "Ingrese una lista de numeros (0 para salir):"<<endl;
    while(num!=0){
        cin >> num;
        if (num%2!=0){
            if (!primNumEncontrado){
                primNum=num;
                primNumEncontrado=true;
            }
            if (num != primNum){
                ultNum=num;
            }
        }
    }
    cout << "Primer numero impar encontrado:"<<primNum<<endl;
    cout << "Ultimo numero impar encontrado:"<<ultNum<<endl;
    return 0;
}