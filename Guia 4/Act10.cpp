#include <iostream>
using namespace std;

int main(){
    int in;
    int max = 0, min = 0;
    cout << "Ingrese un numero (0 para salir):"; cin >> in;
    while (in!=0){
        if (in>max) max=in;
        else if(in<min) min=in;
        cout << "Ingrese un numero (0 para salir):"; cin >> in;
    }
    cout << max << endl;
    cout << min << endl;
}