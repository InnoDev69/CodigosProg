#include <iostream>
using namespace std;

int main(){
    int ndia, nmes, nyear;
    int adia, ames, ayear;
    cout << "Ingrese el dia de nacimiento:"; cin >> ndia;
    cout << "Ingrese el mes de nacimiento:"; cin >> nmes;
    cout << "Ingrese el año de nacimineto:"; cin >> nyear;

    cout << "Ingrese dia actual:"; cin >> adia;
    cout << "Ingrese mes actual:"; cin >> ames;
    cout << "Ingrese año actual:"; cin >> ayear;

    if (ames>nmes && adia>ndia) cout<<"Su edad es de:"<<ayear-nyear;
    else if (ames == nmes && adia>ndia) cout<<"Su edad es de:"<<ayear-nyear;
    else if (ames == nmes && adia==ndia) cout<<"Su edad es de:"<<ayear-nyear;
    else cout << "Su edad es de:" << (ayear-nyear)-1;
    
    return 0;
}