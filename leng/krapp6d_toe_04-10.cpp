/*
Definir un array del tipo float que se guardaran n mediciones que el usuario ingresará.
Se debe imprimir en pantalla la segunda y la cuarta medicion ingresada
*/

#include <iostream>
using namespace std;
int main() {
	int cantidadMediciones;
	bool aux = false;
	// -------------------------------
	//Conseguir cantidad de mediciones
	while (aux == false) { 
		cout << "Ingrese la cantidad de mediciones: ";
		cin >> cantidadMediciones;
		if (cantidadMediciones < 0)
			cout << "Tiene que ser un numero entero mayor a 0" <<endl;
		else 
			aux = true;	
	}
	float * puntero = (float*) (malloc (sizeof(float)*cantidadMediciones));
	// -------------------------------
	// Conseguir mediciones
	for (int i=0 ; i <cantidadMediciones ; i++) {
		cout << "Ingrese la medicion numero n" << i+1 << ":\t";
		float aux;
		cin >> aux;
		puntero+= sizeof(float);
		* puntero = aux;
	}
	//--------------------------------
	// Imprimir mediciones
	for (int i=0 ; i<cantidadMediciones ; i++) {
		puntero-= sizeof(float)*cantidadMediciones;

		
	}

}
