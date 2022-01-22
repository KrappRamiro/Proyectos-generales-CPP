#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	ofstream myFile; //we create the object myFile from the class ofstream
	myFile.open("hello.txt"); // we open the file hello.txt
	//shorter version:	ofstream myFile ("hello.txt")

	if (myFile.is_open())
		cout << "success opening the file\n";
	else
		cout << "could not open the file :(\n";

	myFile << "hey!\n"; // here we write "hey!" to the file
	
	//Por razones de practica, armo un vector que tenga varios nombres
	vector<string> nombres = {"Juan", "Agustin", "Pedro"};

	// con un for range, itero por el vector, y outputeo los valores del vector a mi archivo
	for (string name : nombres) {
		myFile << name << endl;
	}

	myFile.close(); //close the file
	return 0;


	// Si yo quisiera que cada vez que corra el codigo me appendee las cosas en vez de 
	// reemplazarlas, debería hacer myFile.open("hello.txt", ios::app);
}
