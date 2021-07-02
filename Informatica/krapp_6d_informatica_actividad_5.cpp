#include <iostream>
using namespace std;
int main ()
{
    int auxiliar, cantidadNumeros =0;
    cout << "¿Cuantos numeros desea ingresar?: ";
    cin>> cantidadNumeros;
    int miVector[cantidadNumeros];

    for (int i=0 ; i<cantidadNumeros ; i++) {
        cout << "Ingrese el numero " << i+1 <<" : ";
        cin  >> miVector[i];
    }

    for (int i=1 ; i<cantidadNumeros ; i++){
        for (int j=0 ; j<cantidadNumeros-1 ; j++){
            if (miVector[j] > miVector[j+1]){
                auxiliar = miVector[j+1];
                miVector[j+1] = miVector[j];
                miVector[j] = auxiliar;
            }
        }
    }

    for (int i=0 ; i < cantidadNumeros ; i++){
            cout << miVector[i] <<"   ";
    }
return 0;
}
