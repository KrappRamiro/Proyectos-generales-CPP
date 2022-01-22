#include <iostream>
using namespace std;
void mostrarArray(int tamano, int* miArray) {
	for (int i=0 ; i < tamano ; i++) {
		cout << miArray[i] << endl;
	}
}

int main() {	
	int tamano = 10;
	int miArray[tamano] = {10,2,3,45,3,1,0,7,-1,2};
	mostrarArray(tamano, miArray);
}
