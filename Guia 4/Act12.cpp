#include <iostream>
using namespace std;

int main(){
    int num;
    int primNum=0, segunNum=0;
    bool primNumEncontrado=false;
    bool segunNumEncontrado=false;
    cout << "Ingrese una lista de numeros (0 para salir):"<<endl;
    while(num!=0){
        cin >> num;
        if (num%2!=0){
            if (!primNumEncontrado){
                primNum=num;
                primNumEncontrado=true;
            }
            if (!segunNumEncontrado && num != primNum){
                segunNum=num;
                segunNumEncontrado=true;
            }
        }
    }
    cout << "Primer numero impar encontrado:"<<primNum<<endl;
    cout << "Segundo numero impar encontrado:"<<segunNum<<endl;
    return 0;
}