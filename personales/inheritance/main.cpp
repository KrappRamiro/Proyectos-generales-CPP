#include <iostream>
#include <vector>
#include <string>
#include "user.h"
#include "teacher.h"
int main(){
	User user;
	std::cin >> user;
	std::cout << user << std::endl;

	Teacher teacher;
	teacher.name = "Juana";
	std::cout << "Teacher name: " << teacher.name << std::endl;
	teacher.output();
}

