#include <iostream>
#include <vector>
#include <string>
#include "utils.h"
#include "client.h"

using std::cout;
using std::endl;
using std::vector;
using std::copy;
using std::string;

void mostrarMenu(std::vector<Client> & clients) {
	std::string aux;
	int eleccion;
	Client cliente_aux;
	bool flagSalida = false;
	while(!flagSalida) {
	std::cout << "\nElige que quieres hacer: " << std::endl;
	std::cout << "1- Agregar usuario\n";
	std::cout << "2- Eliminar usuario\n";
	std::cout << "3- Buscar usuario\n";
	std::cout << "4- Ver lista de usuarios\n";
	std::cout << "5- Salir del programa\n";
		std::cin >> eleccion;
		switch (eleccion) {
			case 1:
				std::cout << "Usted ha seleccionado la opcion de agregar usuario\n";

				std::cout << "Ingrese el nombre del usuario: ";
				std::cin.ignore();
				getline(std::cin,aux);	cliente_aux.setName(aux);

				std::cout << "Ingrese el apellido del usuario: ";
				getline(std::cin,aux);	cliente_aux.setSurname(aux);

				std::cout << "Ingrese el cuit del usuario: (11 caracteres)";
				getline(std::cin,aux);	cliente_aux.setCuit(aux);

				std::cout << "Ingrese el CBU del usuario: (22 caracteres)";
				getline(std::cin,aux);	cliente_aux.setCbu(aux);

				clients.push_back(cliente_aux);
				break;

			case 2:
				std::cout << "Usted ha seleccionado la opcion de eliminar usuario\n";
				std::cout << "Ingrese el indice de usuario que quiere eliminar (-1 para cancelar la operacion): ";
				int index;
				std::cin >> index;
				if (index != -1) {
					cout << "Esta a punto de eliminar al usuario con los siguienes datos:\n";
					std::cout << "\tNombre: " 	<< clients[index-1].getName() << std::endl;
					std::cout << "\tApellido: " << clients[index-1].getSurname() << std::endl;
					std::cout << "\tCUIT: " 	<< clients[index-1].getCuit() << std::endl;
					std::cout << "\tCBU: " 		<< clients[index-1].getCbu() <<std::endl;
					std::cout << "Seguro que quiere continuar? (Y/n): ";
					char confirmacion;
					std::cin >> confirmacion;
					if (confirmacion == 'Y') {
						clients.erase(clients.begin() + index);
						cout << "Usuario eliminado\n";
						break;
					}
				}
				std::cout << "Operacion cancelada\n";
				break;

			case 3: {
				std::cout << "Usted ha seleccionado la opcion de buscar usuario\n";
				std::cout << "Elija por que parametro buscar:\n";
				std::cout << "1- Nombre\n2- Apellido\n3- CUIT\n4- CBU\n";
				int opcion;
				std::string busqueda;
				std::cin >> opcion;
				switch (opcion) {
					case 1: {
						std::cout << "Ingrese el nombre por el que quiere buscar: ";
						std::cin.ignore();
						std::getline(std::cin, busqueda);
						for (int i=0 ; i<clients.size() ; i++) {
							if(busqueda == clients[i].getName()) {
								std::cout << "Eureka! Se ha encontrado el usuario con el indice " << i+1 <<"\n";
							}
						}
						break;
					}
					case 2: {
						std::cout << "Ingrese el apellido por el que quiere buscar: ";
						std::cin.ignore();
						std::getline(std::cin, busqueda);
						for (int i=0 ; i<clients.size() ; i++) {
							if(busqueda == clients[i].getSurname()) {
								std::cout << "Eureka! Se ha encontrado el usuario con el indice " << i+1 <<"\n";
							}
						}
						break;
					}
					case 3: {
						std::cout << "Ingrese el CUIT por el que quiere buscar: ";
						std::cin.ignore();
						std::getline(std::cin, busqueda);
						for (int i=0 ; i<clients.size() ; i++) {
							if(busqueda == clients[i].getCuit()) {
								std::cout << "Eureka! Se ha encontrado el usuario con el indice " << i+1 <<"\n";
							}
						}
						break;
					}
					case 4: {
						std::cout << "Ingrese el CBU por el que quiere buscar: ";
						std::cin.ignore();
						std::getline(std::cin, busqueda);
						for (int i=0 ; i<clients.size() ; i++) {
							if(busqueda == clients[i].getCbu()) {
								std::cout << "Eureka! Se ha encontrado el usuario con el indice " << i+1 <<"\n";
							}
						}
						break;
					}
				}
				break;
			}
			case 4:
				std::cout << "Usted ha seleccionado la opcion de ver todos los usuarios\n";
				std::cout << "Cantidad de clientes: " << clients.size() <<"\n";
				for (int i=0 ; i<clients.size() ; i++) {
					std::cout << "Cliente numero " << i+1 << ":\n";
					std::cout << "\tNombre: " 	<< clients[i].getName() << std::endl;
					std::cout << "\tApellido: " << clients[i].getSurname() << std::endl;
					std::cout << "\tCUIT: " 	<< clients[i].getCuit() << std::endl;
					std::cout << "\tCBU: " 		<< clients[i].getCbu() <<std::endl;
				}
				break;

			case 5:
				std::cout << "Saliendo del programa\n";
				flagSalida = true;
				break;

			default:
				std::cout << "Ingrese una opcion valida!\n";
				break;
		}
	}
}
