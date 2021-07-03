#include <iostream>
using namespace std;

int main() {
int hipotenusa, cateto_opuesto, cateto_adyacente, suma_cuadrados, contadorTerna = 0;
int valor_maximo = 500;

for (int i=1 ; i<=valor_maximo; i++) {
    hipotenusa = i*i; //esto hace que el valor de hipotenusa sea i al cuadrado
    for (int x=1 ; x <=valor_maximo ; x++) {
        cateto_opuesto = x*x;
        for (int y=1 ; y<=valor_maximo; y++) {
            cateto_adyacente = y*y;
            suma_cuadrados = cateto_opuesto + cateto_adyacente;
            if (suma_cuadrados == hipotenusa) { //esto se ejecuta si hay una hipotenusa en la suma de los cuadrados
                contadorTerna += 1;
                cout << "terna numero: " << contadorTerna << endl;
                cout << "hipotenusa: \t\t" << i << endl;
                cout << "cateto opuesto: \t" << x << endl;
                cout << "cateto adyacente: \t" << y << endl;
                cout << "-----------\n\n";
            }
        }
    }
}

}
