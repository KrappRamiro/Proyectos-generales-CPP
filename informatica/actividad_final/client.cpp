#include <iostream>
#include <string>
#include <vector>
#include "client.h"

//in Client.cpp i have to define the functions and the static variables without the static
//keyword

void Client::setName(std::string name) {
	if (name.length() != 0) {
		this->name = name;
	}
	else
		std::cout << "Invalid name" << std::endl;
}

void Client::setSurname(std::string surname) {
	this -> surname = surname;
}
void Client::setCUIT(std::string CUIT) {
	this -> CUIT = CUIT;
}
void Client::setCBU(std::string CBU) {
	this -> CBU = CBU;
}
int Client::getClientCount() {
	return clientCount;
}

Client::Client() { //default constructor
	clientCount++;
	std::cout << "Client number "<< clientCount << " created\n";
}

Client::Client(std::string name, std::string surname, std::string CUIT, std::string CBU) {
	this -> name = name;
	this -> surname = surname;
	this -> CUIT = CUIT;
	this -> CBU = CBU;
	clientCount++;
	std::cout << "Client number "<< clientCount << " created\n";
}

Client::~Client() { //default destructor
	clientCount--;
	std::cout << "Client number " << clientCount << " destructed\n";
}


//static declaration:
int Client::clientCount = 0;


//operator overloading:
//std::ostream& operator << (std::ostream& output, const Client client) {
//	output <<
//		"Name: " << client.name <<
//		"\nSurname: " << client.surname <<
//		"\nCUIT: " << client.CUIT;
//		"\nCBU: " << client.CBU;
//		<<std::endl;
//	return output;
//}

