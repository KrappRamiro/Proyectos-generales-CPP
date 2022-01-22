// a constructor is a special method that is called when a class is instantiated into an object
// so, when i do User user, a constructor is called
//
// The constructor is automatically created, its implicit.
// Sadly, it does the bare minimum by default if we dont define it ourselves
//
// The constructor:
// 1- It has the same name as the class
// 2- It has no return


// A destructor is called when the object is destructed, we usually have to worry
// less about the destructor.
// When you want to define it, you have to define it with ~classNameHere

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
		User() /* <-- THE CONSTRUCTOR! This is called default constructor because it takes no parameters */ {
			// if you want to get rid of the default constructor, DELETE THIS!!
			std::cout << "Constructor\n";
		}
		User(std::string name, std::string surname) /* This is another constructor */ {
			//we have a problem here, name from the function and name from the class are called
			//the same. Here is a thing, we can specify we are referring to the class variable
			//using this:			this->name = name;
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
	std::cout << user.name << std::endl;
}

