#ifndef CLIENT_H
#define CLIENT_H
#include "user.h"
#include <vector>
#include <string>


class Client : public User { // THIS IS LITERALLY INHERITANCE !!!
	private:
		std::string name;
		std::string surname;
		std::string cuit;
		std::string cbu;
	public:
		Client(); //default constructor
		~Client();
		void setName(std::string name);
		void setSurname(std::string surname);
		void setCuit(std::string cuit);
		void setCbu(std::string cbu);
		std::string getName();
		std::string getSurname();
		std::string getCuit();
		std::string getCbu();
};
#endif

