#include <iostream>
#include <vector>
#include <string>

using namespace std;

void swap (int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap (string &a, string &b) {
	string temp = a;
	a = b;
	b = temp;
}

struct Rectangle {
	double length;
	double width;
};

double area(double length, double width) {
	return length * width;
}

double area(double length) {
	return length * length;
}

double area (Rectangle rectangle) {
	return rectangle.width * rectangle.length;
}

int main() {
	int num1 = 5;
	int num2 = 7;
	swap(num1, num2);
	cout << num1 << "   " << num2 <<endl;


	string name1 = "Juan";
	string name2 = "Pedro";
	swap (name1, name2);
	cout << name1 << "   " << name2 <<endl;

	Rectangle rectangle;
	rectangle.width = 10;
	rectangle.length = 3;
	cout << area (rectangle.width, rectangle.length) << "\n";
	cout << area(rectangle.length) << "\n";
	cout << area(rectangle) << "\n";
}
