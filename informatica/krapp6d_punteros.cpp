#include <iostream>
#include <string>
using namespace std;
void Ejercicio_1 () {
	int var1 = 5;
	int var2 = 20;
	int* puntero;
	cout << "Teniendo una variable var1 con un valor igual a " << var1 << " y una variable var2 con un valor igual a " << var2 <<"\nLas direcciones de memoria de las varibles son las siguientes:"<< endl;
	cout << "var1:\t" << &var1 << "\n" << "var2:\t" << &var2 << endl;  
	puntero=&var1;
	cout << "El valor actual de puntero es: " << *puntero << endl;
	puntero=&var2;
	cout << "El valor actual de puntero es: " << *puntero << endl;
}

void Ejercicio_2 () {
	struct persona {
		int ID;
		bool matricula_pagada;
		string nombre;
		int notas_parciales[5];
	}alumno[3];

	alumno[0] = {1, true, "Juan", 10};
}
int main () {
	cout << "Ejercicio 1:\n----------------------\n"; Ejercicio_1();
	cout << "Ejercicio 1:\n----------------------\n"; Ejercicio_2();
}
