#include <iostream>
using namespace std;
int main(){
    int v1,v2,v3,v4,v5;
    int i1,i2,i3,i4,i5;

    cout << "Ingrese venta 1: "; cin >> v1;
    cout << "Ingrese importe venta 1: "; cin >> i1;

    cout << "Ingrese venta 2: "; cin >> v2;
    cout << "Ingrese importe venta 2: "; cin >> i2;

    cout << "Ingrese venta 3: "; cin >> v3;
    cout << "Ingrese importe venta 3: "; cin >> i3;

    cout << "Ingrese venta 4: "; cin >> v4;
    cout << "Ingrese importe venta 4: "; cin >> i4;

    cout << "Ingrese venta 5: "; cin >> v5;
    cout << "Ingrese importe venta 5: "; cin >> i5;

    /*A*/cout << "Importe total: " << i1+i2+i3+i4+i5 << endl;
    
    /*B*/cout << "Cantidad de ventas que superaron las 30: " << (v1>30)+(v2>30)+(v3>30)+(v4>30)+(v5>30) << endl;

    /*C*/cout << "Hubo una cantidad de " << 
    (v1>15 && i1>10000)+(v2>15 && i2>10000)+(v3>15 && i3>10000)+(v4>15 && i4>10000)+(v5>15 && i5>10000) 
    <<" ventas con un importe de 10mil y 15 unidades vendidas. "<< endl;

    /*D*/cout << (v1>5 || i1>1000)+(v2>5 || i2>1000)+(v3>5 || i3>1000)+(v4>5 || i4>1000)+(v5>5 || i5>1000) 
    << " prods. tuvieron mas de 5 unidades vendidas o un importe de mas de 1000." << endl;
}