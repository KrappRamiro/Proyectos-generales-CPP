#include <iostream>
#include <string>
#include <vector>

class User { //dentro de una class, todo es private por default
	std::string status = "Gold";

	public:
		std::string name;
		std::string surname;
		std::string getStatus() {
			return status;
		}
		void setStatus(std::string status) {
			if(status == "Gold" || status == "Silver" || status == "Bronze") {
				this -> status = status;
		}
			else
				this->status = "Invalid Status";
		}

		User() /* <-- THE CONSTRUCTOR! This is called default constructor because it takes no parameters */ {
			std::cout << "Constructor\n";
		}
		User(std::string name, std::string surname) /* This is another constructor */ {
			this -> name = name; //class name = parameter name
			this -> surname = surname;
			}
};

int addUserIfNotExist(std::vector<User> &usuarios, User user) {
	for (int i=0 ; i<usuarios.size() ; i++) {
		if (usuarios[i].name == user.name &&
			usuarios[i].surname == user.surname ) {
			std::cout << "Se encontró el usuario en el vector" << std::endl;
			return i;
		}
	}
	std::cout << "No se encontro el usuario en el vector, agregandolo..." <<std::endl;
	usuarios.push_back(user);
	return usuarios.size() -1;
}

int main() {
	std::vector <User> usuarios;
	User user("Ramiro", "Krapp");
	user.setStatus("Silver");
	std::cout << user.getStatus() << std::endl;
	user.setStatus("Tacos");
	std::cout << user.getStatus() << std::endl;
}

