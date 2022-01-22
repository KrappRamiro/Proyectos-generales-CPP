#include <iostream>
#include <string>

//verlo la clase siguiente que no anda bien el cin

using namespace std;

struct dispositivo {
	string marca;
	string funcion;
	string numeroSerie;
	float corrienteMa;
};

void prueba(int* puntero) {
	(*puntero)++; //sin los parentesis es distinto, si tengo *p++ el asterisco no me sirve,
	//
	//
	// avanzar en direccion de memoria nos sirve para visualizar todo un struct o un array
}

void mostrarArray(int *p, int tamano) {
	for (int i=0 ; i<tamano ; i++) {
		cout << "elemento numero " << i+1 << ": ";
		// opcion 1:
		// p[i]
		//
		// opcion 2:
		cout << *(p+i) << endl; // aca basicamente voy avanzando en
										// la direccion de memoria i veces
	}
}

void sumar_1_array (int* p, int size) {
	// esta funcion le suma 1 a cada elemento de un array
	for (int i=0 ; i<size ; i++) {
		(*(p+i))++;
		cout << *(p+i) << endl; 
	}
}

void ingresarDatos (struct dispositivo * myDevice, int size) {
	for (int i=0 ; i<size ; i++) {
		cin >> myDevice->marca;
		//cin >> myDevice[i].marca;
	}
}

int main() {
	int n=5;
	cout <<"n antes de la funcion:\t\t" << n <<endl;
	prueba(&n); //aca paso la direccion de memoria de i
	cout <<"n despues de la funcion:\t" << n <<endl;

	int myArray[]={12,56,23,4,555};
	mostrarArray(myArray, 5); //pasar myArray es lo mismo que pasar la direccion de memoria 
	// del primer elemento, o sea, &myArray[0]
	sumar_1_array(myArray, 5);



	struct dispositivo testers[3];

	ingresarDatos(testers, 3);

}





