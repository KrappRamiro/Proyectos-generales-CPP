#include "client.h"
#include <iostream>

using std::cout;
using std::endl;
using std::vector;
using std::copy;
using std::string;

Client::Client() {
	//std::cout << "Client created\n";
}
Client::~Client() {
	//std::cout << "Client destructed\n";
}
void Client::setName(std::string name){
	if (name.length() > 0) {
		this->name = name;
	}
	else {
		std::cout << "El nombre no puede estar vacio";
		return;
	}
}
void Client::setSurname(std::string surname){
	if (surname.length() > 0) {
		this->surname = surname;
	}
	else {
		std::cout << "El apellido no puede estar vacio";
		return;
	}
}

void Client::setCuit(std::string cuit){
	if (cuit.length() == 0) {
		cout << "El cuit no puede estar vacio\n";
		return;
	}
	if (cuit.length() < 11) {
		cout << "A este cuit le faltan numeros (tiene " << cuit.length() << ")\n";
		return;
	}
	if (cuit.length() > 11) {
		cout << "A este cuit le sobran numeros (tiene " << cuit.length() << ")\n";
		return;
	}
	this->cuit = cuit;
}
void Client::setCbu(std::string cbu){
	if (cbu.length() == 0) {
		cout << "El CBU no puede estar vacio\n";
		return;
	}
	if (cbu.length() < 22) {
		cout << "A este cbu le faltan numeros (tiene " << cbu.length() << ")\n";
		return;
	}
	if (cbu.length() > 22) {
		cout << "A este CBU le sobran numeros (tiene " << cbu.length() << ")\n";
		return;
	}
	this->cbu = cbu;
}

std::string Client::getName() {
	return name;
}
std::string Client::getSurname() {
	return surname;
}
std::string Client::getCuit() {
	return cuit;
}
std::string Client::getCbu() {
	return cbu;
}
