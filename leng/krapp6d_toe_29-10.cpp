#include <iostream>
using namespace std;

void metrosToMilimetros(float* distancia) {
	*(distancia) = *(distancia)*1000;
}

int sumarEnteros(int* num1, int* num2) {
	int resultado = *(num1) + *(num2);
	return resultado;
}

float averiguarPorcentaje (float valor, float total) {
	float resultado = (valor/total)*100;
	return resultado;
}

void floatByte_a_Byte () {
	return;
}

void intByte_a_Byte () {
	return;
}

void imprimirIntArray (int* _array, int* tamano) {
	for (int i=0; i<*(tamano) ; i++) {
		cout << "elemento n" << i+1 << ": " << _array[i] <<endl;
	}
}
		
void imprimirCharArray (char* _array, int* tamano) {
	for (int i=0; i<*(tamano) ; i++) {
		cout << "elemento n" << i+1 << ": " << _array[i] <<endl;
	}
}
	
int main() {
	float resultado;
	float distancia;
	int numero1, numero2 = 0;
	int valor = 0;
	int total = 0;
	cout << "ingrese la distancia en metros: "; cin >> distancia;
	metrosToMilimetros(&distancia);
	cout << "la distancia en milimetros es: " << distancia <<endl;

	cout << "ingrese dos numeros enteros: "; cin >> numero1 >> numero2;
	resultado = sumarEnteros(&numero1, &numero2);
	cout << "Se sumaron los numeros " << numero1 << " y " << numero2 << " --> " 
		<< resultado << endl;

	cout << "ingrese el valor y el total: "; cin >> valor >> total;
	resultado = averiguarPorcentaje(valor, total);
	cout << "el porcentaje es: " << resultado <<"%" <<endl;

	int tamano = 5;
	int myIntArray [tamano] = {1,3,7,2,-1};
	imprimirIntArray(myIntArray, &tamano);

	char myCharArray [tamano] = {'a','2','6','b','a'};
	imprimirCharArray(myCharArray, &tamano);

	return 0;}
