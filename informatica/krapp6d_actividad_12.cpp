#include <iostream>
using namespace std;

int exponenciacionRecursiva(int n1, int n2, int aux = 0) { //uso aux como variable opcional, y la uso dentro de mi codigo como una especie de acumulador
/*
Esta funcion hace n1 elevado a n2, el parametro aux es usado de forma interna en la funcion
*/

   /* Para debug:
   cout  << "datos recibidos: "
         << "n1: "    << n1
         << "\t n2: " << n2
         << "\t aux: "<< aux <<endl;
   */
	if (n2 > 1) {
		/* Para debug:
		cout << "n2 es menor a 1, entrando a la funcion..." <<endl;
		*/
		if (aux == 0) {
         aux = n1*n1;
		}else {
         aux*=n1;
		}
		n2--;
   /* Para debug:
      cout  << "datos pasados: "
      << "\t n1: " << n1
      << "\t n2: " << n2
      << "\t aux: "<< aux <<endl;
   */
		exponenciacionRecursiva(n1,n2,aux);
	}
	else {
		return aux;
	}
}

int main() {
	int x = 0;
	int y = 0;
	int resultado;
	cout << "ingrese x ";		cin >> x;
	cout << "ingrese y ";		cin >> y;
	resultado = exponenciacionRecursiva(x, y);
	cout << "el resultado es " << resultado <<endl;
	return 0;
}
