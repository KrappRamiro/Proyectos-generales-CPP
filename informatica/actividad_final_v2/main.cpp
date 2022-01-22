//Se desea guardar los datos de hasta 10 clientes.
//De cada cliente se sabe nombre, apellido , cuit y CBU.
//Imprimir búsqueda por nombre.
//Imprimir búsqueda por cuit.
//Se debe poder buscar un cliente por nombre y apellido, y poder cambiar cualquiera de sus
//datos personales.
#include <iostream>
#include <vector>
#include <string>
#include "user.h"
#include "client.h"
#include "utils.h"


using std::cout;
using std::endl;
using std::vector;
using std::copy;
using std::string;

std::vector<Client> clients;
int main(){
	clients.reserve(20); //reservo espacio en memoria para 20 clientes
	// por razones de ver si anda el programa, hice estos 3 usuarios de ejemplo:
	Client ejemplo1;
	ejemplo1.setName("Juan");
	ejemplo1.setSurname("Perez");
	ejemplo1.setCuit("20324569877");
	ejemplo1.setCbu("1234567890123456789012");

	Client ejemplo2;
	ejemplo2.setName("Diego");
	ejemplo2.setSurname("Lopez");
	ejemplo2.setCuit("20451237897");
	ejemplo2.setCbu("0987654321098765432123");

	Client ejemplo3;
	ejemplo3.setName("Juan");
	ejemplo3.setSurname("Perez");
	ejemplo3.setCuit("20324569877");
	ejemplo3.setCbu("1112223334445556667778");

	clients.push_back(ejemplo1);
	clients.push_back(ejemplo2);
	clients.push_back(ejemplo3);

	// el main de verdad empieza aca
	mostrarMenu(clients);
}
