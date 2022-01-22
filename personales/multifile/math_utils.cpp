#include "math_utils.h"

double area (double length, double width) {
	return length * width;
}

double pow (double number, int pow) {
	int total = 1;
	for (int i=0 ; i<pow ; i++) {
		total *= number;
	}
	return total;
}

double sum (double num1, double num2) {
	return num1+num2;
}
