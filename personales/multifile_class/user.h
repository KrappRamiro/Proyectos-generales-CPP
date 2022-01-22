#ifndef USER_H
#define USER_H
class User {
	static int userCount;
	std::string status = "Bronze";

	public:
		static int getUserCount();
		std::string name;
		std::string surname;
		std::string getStatus();
		void setStatus(std::string status);
		User();
		User(std::string name, std::string surname, std::string status);
		~User();
		friend std::ostream& operator << (std::ostream& output, const User user);
		friend std::istream& operator >> (std::istream& input, User &user);
};

#endif
