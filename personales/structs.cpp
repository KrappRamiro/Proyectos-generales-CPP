#include <iostream>
#include <string>

struct User {
	std::string name;
	std::string surname;
	std::string get_status() {
		return status;
	}
	private: //private significa que solamente puede ser accedido por dentro de la funcion.
		std::string status = "Gold";
};


