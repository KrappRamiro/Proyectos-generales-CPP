#ifndef USER_H
#define USER_H
#include <string>

class User {
	static int userCount;
	std::string name;
	std::string surname;

	public:
		static int getUserCount();
		User();
		User(std::string name, std::string surname);
		~User();
		friend std::ostream& operator << (std::ostream& output, const User user);
		friend std::istream& operator >> (std::istream& input, User &user);
};

#endif

