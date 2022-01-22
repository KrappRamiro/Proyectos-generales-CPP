#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>
#include <vector>
//
//in the header file, i have to put the function prototypes and the variables declarations
class Client {

	static int clientCount;
	std::string name;
	std::string surname;
	std::string CUIT;
	std::string CBU;

	public:
		void setName(std::string name); //setter
		void setSurname(std::string surname); //setter
		void setCUIT(std::string CUIT); //setter
		void setCBU(std::string CBU); //setter
		int getClientCount();
		Client(); //default constructor
		Client(std::string name, std::string surname, std::string CUIT, std::string CBU);
		~Client(); //default destructor 
		// necesito esta friend function para acceder a los valores de client que son privados
		//friend std::ostream& operator << (std::ostream& output, const Client client);
};

#endif

