#include <iostream>
using namespace std;

void saltos(int cantidadSaltos){
	for (int i=0 ; i < cantidadSaltos ; i++)
	cout <<"\n";
}


int main() {
	int cantidadPersonas = 5;
	int acumuladorEstatura = 0;
	int estaturaPromedio = 0;
	int cantidadPersonasAltas = 0;

	struct datos_persona {
		int DNI;
		int estatura;
	} persona[cantidadPersonas];

	cout << "Bienvenido a mi programa" <<endl;

	/*obtener los datos de las personas mediante input por consola
	y acumular la suma de estaturas, luego calcular el promedio de estaturas */
	for (int i=0 ;  i < cantidadPersonas ; i++) {
		cout << "Ingrese el DNI de la persona numero " << i+1 << "\t\t\t\t";
		cin >> persona[i].DNI;
		cout << "Ingrese en centimetros la estatura de la persona numero " << i+1 << "\t";
		cin >> persona[i].estatura;
		saltos(1);
		acumuladorEstatura += persona[i].estatura; //acumulo la suma de las estaturas
	}
	estaturaPromedio = acumuladorEstatura / cantidadPersonas;

	saltos(3);

	for (int i=0 ; i < cantidadPersonas ; i++) {
		if (persona[i].estatura > estaturaPromedio) {
			cantidadPersonasAltas++;
		}
	}
	cout << "la estatura promedio es de " << estaturaPromedio << endl;
	cout << "La cantidad de personas con altura sobre el promedio es de " << cantidadPersonasAltas << endl;
}
