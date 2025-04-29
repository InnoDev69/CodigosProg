#include <iostream>
using namespace std;

int main(){
    int num, iteracion;
    float maxPorcentajeGrupo;
    bool primIngreso=true;
    int gruposOrdenados = 0;
    
    for (int i=0; i<3; i++){
        float nums=0, imparesPos=0;
        int ultimoPrimo = 0, posicionPrimo = 0, orden = 0;
        bool hayPrimo = false, ordenado = true;
        int numAnterior;
        bool primerNumero = true;
        
        cout << "Ingrese un numero (0 para cerrar lista)" << endl;
        cin >> num;
        
        while (num!=0){
            orden++;
            nums++;
            
            // Verifica si es primo
            bool esPrimo = true;
            if(num <= 1){
                esPrimo = false;
            } else {
                for(int j = 2; j < num; j++){
                    if(num % j == 0){
                        esPrimo = false;
                        break;
                    }
                }
            }
            
            // Guarda el último primo y su posición
            if(esPrimo){
                ultimoPrimo = num;
                posicionPrimo = orden;
                hayPrimo = true;
            }
            
            // Verifica el orden descendente
            if(primerNumero){
                numAnterior = num;
                primerNumero = false;
            } else {
                if(num > numAnterior){
                    ordenado = false;
                }
                numAnterior = num;
            }
            
            if (num % 2 != 0 && num>0) {
                imparesPos++;
            }
            
            float porcentaje = (imparesPos/nums) * 100;
            if (maxPorcentajeGrupo<porcentaje || primIngreso){
                maxPorcentajeGrupo=porcentaje;
                iteracion=i+1;
            }
            cin>>num;
        }
        
        // Muestra resultados del grupo
        cout << "Grupo " << i+1 << ":" << endl;
        if(hayPrimo){
            cout << "Ultimo numero primo: " << ultimoPrimo << endl;
            cout << "Aparecio en la posicion: " << posicionPrimo << endl;
        } else {
            cout << "No hubo numeros primos en este grupo" << endl;
        }
        
        if(ordenado && !primerNumero){
            gruposOrdenados++;
        }
        
        cout << "-------------------------------------" << endl;
        if (primIngreso){
            primIngreso=false;
        }
    }
    
    // Resultados finales
    cout << "El maximo porcentaje es: " << maxPorcentajeGrupo << "%" << endl;
    cout << "Ocurrio en el grupo: " << iteracion << endl;
    cout << "Cantidad de grupos ordenados de mayor a menor: " << gruposOrdenados << endl;
    
    return 0;
}