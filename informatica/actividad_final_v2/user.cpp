#include <iostream>
#include <vector>
#include <string>
#include "user.h"


using std::cout;
using std::endl;
using std::vector;
using std::copy;
using std::string;

		int User::getUserCount() {
			return userCount;
		}
		User::User() {
			//std::cout << "User created\n";
			userCount++;
		}
		User::User(std::string name, std::string surname) {
			//std::cout << "User created\n";
			this -> name = name;
			this -> surname = surname;
			userCount++;
		}
		User::~User() {
			//std::cout << "User destructed\n";
			userCount--;
		}
		std::ostream& operator << (std::ostream& output, const User user);
		std::istream& operator >> (std::istream& input, User &user);

int User::userCount = 0;

std::ostream& operator << (std::ostream& output, const User user) {
	output <<
		"Name: " << user.name <<
		"\nSurname: " << user.surname << std::endl;
	return output;
}
std::istream& operator >> (std::istream& input, User &user) {
	std::cout << "Enter your name: ";	input >> user.name;
	std::cout << "Enter your surname: ";	input >> user.surname;
	return input;
}
