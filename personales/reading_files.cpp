#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
	ifstream myFile ("tacos.txt"); //abro el archivo tacos.txt
	vector<string> names;
	string input;
	while(myFile >> input) { //this reads through the file until is nothing left
		names.push_back(input); //guardo lo que hay en myFile dentro del vector names
	}

	for ( string x : names ) {
		cout << "name: " << x <<endl; //printea todo lo que hay en el vector names
	}

	myFile.close();
	cout << "--------------\n\n";
	// ese codigo tiene un problema, y es que si yo tengo juan augusto me lo toma como 2 nombres,
	// juan y agusto.

	// si tenes cosas como "Juan Cruz" se hace asi
	myFile.open("tacos.txt");

	if (myFile.is_open()) 
		cout << "file was opened" <<endl;
	else
		cout << "file was not opened :( "<<endl;
	string linea;
	getline(myFile, linea);
	cout << linea <<endl;

}
