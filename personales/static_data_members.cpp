// when you create a member that is static, its no longer going to be associated
// with an object, instead, it will be associated with the whole class.
//
// What data should be static? usually data that describes the whole class.
// For example, in a class User, a static data member would be numberOfUsers
#include <iostream>
#include <string>
#include <vector>

class User { //dentro de una class, todo es private por default
	std::string status = "Gold";
	static int userCount;

	public:
		static int getUserCount() {
			return userCount;
		}
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
			userCount++;
		}
		User(std::string name, std::string surname) /* This is another constructor */ {
			userCount++;
			this -> name = name; //class name = parameter name
			this -> surname = surname;
		}
		~User() {
			userCount--;
		}
};
// HERE YOU ASSIGN STATIC VALUES, YOU CANT ASSIGN STATIC VALUES INSIDE THE CLASS DECLARATION
int User::userCount = 0; //this is important, you have to declare the static userCount here 

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
	User user1, user2, user3, user4;
	std::cout << User::getUserCount() << std::endl;
	user1.~User();
	std::cout << User::getUserCount() << std::endl;

}

