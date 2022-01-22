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

int main() {
	User me; //i create an object called "me" from the class User
	me.name = "Ramiro";
	me.surname = "Krapp";
	me.giveStatus("happy");
	std::cout << "\n" << me.get_status() <<std::endl;

	User user;
	user.name = "Juan";
	
	std::cout << user.name << std::endl;
}
