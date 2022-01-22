#include <iostream>
#include <vector>
#include <string>
#include "user.h"

		int User::getUserCount() {
			return userCount;
		}
		std::string User::getStatus() {
			return status;
		}
		void User::setStatus(std::string status) {
			this -> status = status;
		}
		User::User() {
			userCount++;
		}
		User::User(std::string name, std::string surname, std::string status) {
			this -> name = name;
			this -> surname = surname;
			this -> status = status;
			userCount++;
		}
		User::~User() {
			userCount--;
		}
		std::ostream& operator << (std::ostream& output, const User user);
		std::istream& operator >> (std::istream& input, User &user);

int User::userCount = 0;

std::ostream& operator << (std::ostream& output, const User user) {
	output <<
		"Name: " << user.name <<
		"\nSurname: " << user.surname <<
		"\nStatus: " << user.status
		<<std::endl;
	return output;
}
std::istream& operator >> (std::istream& input, User &user) {
	std::cout << "Enter your name: ";	input >> user.name;
	std::cout << "Enter your surname: ";	input >> user.surname;
	std::cout << "Enter your status: ";	input >> user.status;
	return input;
}


