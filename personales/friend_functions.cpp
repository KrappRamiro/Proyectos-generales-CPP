// friend functions allow you to play with the private data members outside of the class definition

#include <iostream>
#include <vector>
#include <string>

class User { //dentro de una class, todo es private por default
	std::string status = "Gold";
	public:
		std::string name;
		std::string surname;
		std::string getStatus() {
			return status;
		}
		User(std::string name, std::string surname) /* This is another constructor */ {
			this -> name = name; //class name = parameter name
			this -> surname = surname;
			this -> status = status;
		}
		friend void outputStatus(User user); //in a friend function, you dont have access to the
		//things inside the class, and you have to make a prototipe first inside the class
		//definition
		
		// if i put the cout << implementation i did in operator overloading here as a
		// friend prototype, i can output the the private data members
		friend std::ostream & operator << (std::ostream& output, User user);
};

// Here you define friend functions
// Friend functions can access private values
void outputStatus(User user) {
	std::cout << user.status;
}


std::ostream & operator << (std::ostream& output, User user) {
	output << "User name: " << user.name << "\nUser surname: " << user.surname << "\nUser status: "
		<< user.status <<std::endl;
	
	return output;
}

std::istream & operator >> (std::istream& input, User & user) {
	//cuando hago el cin tengo que pasar el objeto como referencia
	std::cout << "\nEnter your name: "; input >> user.name ;
	std::cout << "\nEnter your surname: "; input >> user.surname;
	return input;
}


int main(){
	User user("Juan", "Perez");
	std::cout << user ;
}
