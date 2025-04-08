#include <iostream>
using namespace std;
int main(){
    int v, i;
    int importeTotal, ventasMayor30, ventasMayor15eImporte10000, ventasMayor5oImporte1000;

    cout << "Ingrese cantidad de ventas de prod. 1: ";  cin >> v;
    cout << "Ingrese importe venta 1: ";                cin >> i;
    importeTotal+=i;
    if (v> 30) ventasMayor30++;
    if (v > 15 && i > 10000) ventasMayor15eImporte10000++;
    if (v > 5 || i > 1000) ventasMayor5oImporte1000++;

    cout << "Ingrese cantidad de ventas de prod. 2: ";  cin >> v;
    cout << "Ingrese importe venta 2: ";                cin >> i;
    importeTotal+=i;
    if (v> 30) ventasMayor30++;
    if (v > 15 && i > 10000) ventasMayor15eImporte10000++;
    if (v > 5 || i > 1000) ventasMayor5oImporte1000++;

    cout << "Ingrese cantidad de ventas de prod. 3: ";  cin >> v;
    cout << "Ingrese importe venta 3: ";                cin >> i;
    importeTotal+=i;
    if (v> 30) ventasMayor30++;
    if (v > 15 && i > 10000) ventasMayor15eImporte10000++;
    if (v > 5 || i > 1000) ventasMayor5oImporte1000++;

    cout << "Ingrese cantidad de ventas de prod. 4: ";  cin >> v;
    cout << "Ingrese importe venta 4: ";                cin >> i;
    importeTotal+=i;
    if (v> 30) ventasMayor30++;
    if (v > 15 && i > 10000) ventasMayor15eImporte10000++;
    if (v > 5 || i > 1000) ventasMayor5oImporte1000++;

    cout << "Ingrese cantidad de ventas de prod. 5: ";  cin >> v;
    cout << "Ingrese importe venta 5: ";                cin >> i;
    importeTotal+=i;
    if (v> 30) ventasMayor30++;
    if (v > 15 && i > 10000) ventasMayor15eImporte10000++;
    if (v > 5 || i > 1000) ventasMayor5oImporte1000++;

    cout << "Importe total: " << importeTotal << endl;
    cout << "Cantidad de ventas que superaron las 30: " << ventasMayor30 << endl;
    cout << "Hubo una cantidad de " << ventasMayor15eImporte10000 << " ventas con un importe de 10mil y 15 unidades vendidas." << endl;
    cout << ventasMayor5oImporte1000 << " prods. tuvieron mas de 5 unidades vendidas o un importe de mas de 1000." << endl;
}