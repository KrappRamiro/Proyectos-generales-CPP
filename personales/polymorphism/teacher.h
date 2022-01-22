#ifndef TEACHER_H
#define TEACHER_H
#include "user.h"
#include <vector>
#include <string>
class Teacher : public User { // THIS IS LITERALLY INHERITANCE !!!
	public:
		std::vector<std::string> classes_teaching;
		void output();
};
#endif

