#include <iostream>
#include <vector>
using namespace std;
void printVector(vector <int> datos) {
	for (int i=0 ; i<datos.size() ; i++) {
		cout << datos[i] << " ";
	}
}

void printVectorReferencia(vector <int> &datos) {
	for (int i=0 ; i<datos.size() ; i++) {
		cout << datos[i] << " ";
	}
}

int main() {
	vector<int> items; //creo un vector de tipo int llamado items
	items = {12,13};		// lo inicializo con dos valores nuevos, igual que un array
	items.push_back(100);	// le agrego un 100 a mi vector, ahora seria {12,13,100}
	cout << "tengo un vector de tamaño " << items.size() <<endl;
	cout << "los items son los siguientes: " <<endl;	printVector(items);
	cout << "\nel primer item es " << items[0] << endl;			// imprimo el primer item, igual que un array
	cout << "el último item es " << items[items.size() -1] <<endl;


	cout << "ahora vamos a eliminar el último elemento con un pop_back()" <<endl;
	items.pop_back();
	cout << "ahora el último item es " << items[items.size() -1] <<endl;


	cout <<"otra forma de mostrar el primer y ultimo elemento es con .front() y .back()\n";
	cout << "primer item: " << items.front() <<endl;
	cout << "ultimo item: " << items.back() <<endl;
}
