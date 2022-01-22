#define cantClientes 20
#include <iostream>
using namespace std;

struct persona{
	string nombre = "no_name";
	string apellido = "no_surname";
	string CUIT = "no_CUIT";
	string CBU = "no_CBU";
};

bool buscarPersona(persona* cliente, string indicador, string stringBuscado);

int main() {
	persona cliente[20];
	string nombreIngresado, apellidoIngresado;
	cout << "ingrese el nombre a buscar:\t";	getline(cin, nombreIngresado);
	cout << "ingrese el apellido a buscar:\t";	getline(cin, apellidoIngresado);
	buscarPersona(cliente, "nombre", nombreIngresado);
	buscarPersona(cliente, "apellido",  apellidoIngresado);
}

bool buscarPersona(persona* cliente, string indicador, string stringBuscado) {
	
	if (indicador == "nombre"){
		for (int i=0; i<cantClientes ; i++) {
			if (cliente -> nombre == stringBuscado) {
				cout << "se encontró el nombre! Es el usuario número " << i+1 <<"\n";
				return true;
			}
		cliente++;
		}
		cout << "no se encontro	:(\n";
		return false;
	}
	else if (indicador == "apellido") {
		for (int i=0; i<cantClientes ; i++) {
			if (cliente -> apellido == stringBuscado) {
				cout << "se encontró el apellido! Es el usuario número " << i+1 <<"\n";
				return true;
			}
		cliente++;
		}
		cout << "no se encontro	:(\n";
		return false;
	}
	else {
		cout << "No se encontro nada!";
		return false;
	}
}
//
//void cambiarDato(persona* cliente, int indiceUsuario, string datoACambiar) {
//	string aux;
//	getline(cin, aux);
//	cliente[indiceUsuario] -> nombre = aux;
//}
