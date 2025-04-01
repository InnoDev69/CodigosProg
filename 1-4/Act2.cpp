#include <iostream>
using namespace std;
int main(){
    int v1,v2,v3,v4,v5;
    int i1,i2,i3,i4,i5;
    int contB;
    cout << "Ingrese venta 1:"; cin >> v1;
    cout << "Ingrese importe venta 1:"; cin >> i1;

    cout << "Ingrese venta 2:"; cin >> v2;
    cout << "Ingrese importe venta 2:"; cin >> i2;

    cout << "Ingrese venta 3:"; cin >> v3;
    cout << "Ingrese importe venta 3:"; cin >> i3;

    cout << "Ingrese venta 4:"; cin >> v4;
    cout << "Ingrese importe venta 4:"; cin >> i4;

    cout << "Ingrese venta 5:"; cin >> v5;
    cout << "Ingrese importe venta 5:"; cin >> i5;

    /*A*/cout << "Importe total: " << i1+i2+i3+i4+i5 << endl;
    
    /*B*/cout << "Cantidad de ventas que superaron las 30:" << (v1>30)+(v2>30)+(v3>30)+(v4>30)+(v5>30) << endl;

    /*C*/
}