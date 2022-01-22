#include <iostream>
#include <string>
using namespace std;

struct Persona {
	private:
	string nombre;
	string apellido;
	string dni;

	public:
	void getNombre() {
		cout << nombre <<endl;
	}
	void setNombre(string arg_nombre) {
		nombre =  arg_nombre;
	}

	void setDNI(string dni) {
		if (dni.length() == 8) {
			this -> dni = dni;
			cout << "ese DNI es correcto" << endl;
		}
		else
			cout << "ese DNI es incorrecto!!!" << endl;
	}
	void getDNI () {
		cout << dni << endl;
	}
	
};

int main() {
	Persona cliente;
	cliente.setDNI("45984325");
	cliente.getDNI();

	Persona cliente2;
	cliente2.setDNI("111");
	cliente2.getDNI();
}
