#include <iostream>
#include <string>
#include <vector>

class User { //dentro de una class, todo es private por default
	std::string status = "Gold";

	public:
		std::string name;
		std::string surname;
		std::string get_status() {
			return status;
		}
		void giveStatus(std::string _status) {
			status = _status;
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

	User user1, user2, user3;

	user1.name = "Juan";
	user1.surname = "Perez";

	user2.name = "Pedro";
	user2.surname = "Diaz";
	
	user3.name = "Agustin";
	user3.surname = "Lopez";

	usuarios.push_back(user1);
	usuarios.push_back(user2);
	usuarios.push_back(user3);

	User user;
	user.name = "Diego";
	user.surname = "Lopez";

	std::cout << addUserIfNotExist(usuarios, user2) << std::endl; //this returns the index
	//of the user in the vector. If it doesnt find it, the function add its to the vector and
	//returns it index
	return 0;
}
