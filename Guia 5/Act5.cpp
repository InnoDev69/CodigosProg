#include <iostream>
using namespace std;

int main(){
    int num, iteracion;
    float maxPorcentajeGrupo, imparesPos=0, posTotal=0;
    bool primIngreso=true;
    for (int i=0; i<3; i++){
        float nums=0;
        cout << "Ingrese un numero (0 para cerrar lista)" << endl;
        cin >> num;
        
        while (num!=0){
            float calc;
            nums++;
            if (num % 2 != 0 && num>0) imparesPos++;
            calc=100-((nums-imparesPos)/nums*100);
            cout << calc <<endl;
            if (maxPorcentajeGrupo<calc || primIngreso){
                maxPorcentajeGrupo=calc;
                iteracion=i;
            }
            cin>>num;
        }
        cout << "-------------------------------------" << endl;
        if (primIngreso){
            primIngreso=false;
        }
    }
    cout << maxPorcentajeGrupo << endl;
    cout << iteracion << endl;
    return 0;
}