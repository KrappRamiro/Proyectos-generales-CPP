#include <iostream>
#include <array>

using namespace std;

void printSTLArray(array<int, 20> &data) {
	data[3]++;
	for (int i=0 ; i< data.size() ; i++) {
		cout <<data[i] <<" ";
	}
	cout <<"\n";
}

int main() {
	array<int, 20> datos = {1,2,3};
	printSTLArray(datos);
	printSTLArray(datos);
	printSTLArray(datos);
	printSTLArray(datos);
	printSTLArray(datos);
}
