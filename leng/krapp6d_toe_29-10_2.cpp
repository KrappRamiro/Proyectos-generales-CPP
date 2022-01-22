#include <iostream>
#include <string>
using namespace std;

struct entidad { 
	// defino una estructura a la que llame entidad,
	// todas las estructuras entidad van a tener los siguientes atributos:

	string nombre = "no_name";
	string apellido= "no_surname";
	string fechaNacimiento= "no_birth_date"; //en DD-MM-YYYY
	int DNI = -1;
	string serie = "no_serial";
};

string generarSerie(int* DNI, string* apellido) {
	/* Funcion con la que mediante los ultimos 3 caracteres del DNI, y los
	 * ultimos 2 caracteres del apellido, genero un numero de serie:
	 *
	 * Args:
	 *		int* DNI
	 *		string* apellido
	 *	Returns:
	 *		El slice de los siguienes argumentos
	 *		DNI[-3:] + apellido[:2]
	 */

	string combinacion;
	string str_DNI = to_string(*DNI);
	string a= str_DNI.substr(str_DNI.length()- 3);	// consigue ultimos 3 chars del DNI
	string b= (*apellido).substr(0, 2);					// consigue primeros dos chars del apellido
	combinacion = a.append(b);								// junta lo extraido de arriba
	return combinacion;
}

void ingresarDatos(entidad* persona) {
	/* Pide en consola un ingreso de datos de todos los ___ de una entidad persona
	 *
	 * Args:
	 *		entidad* persona
	 *	Returns:
	 *		nothing
	 */
	cout << "Ingrese los Datos de la persona:"	<<endl;		
	cout << "Ingrese el Nombre: "						<<endl;	cin >> persona->nombre;
	cout << "Ingrese el Apellido: "					<<endl;	cin >>persona->apellido;
	cout << "Ingrese la Fecha de nacimiento: "	<<endl;	cin >>persona->fechaNacimiento;
	cout << "Ingrese el DNI: "							<<endl;	cin >>persona->DNI;
}

void mostrarDatos(entidad* persona) {
	/* Funcion que imprime en pantalla los datos de una entidad persona
	 *
	 * Args:
	 *		entidad* persona
	 *	Returns:
	 *		nothing
	 */
	cout << "\n\nDatos de la persona:" << endl;
	cout << "Nombre: "					<< persona->nombre				<<endl;
	cout << "Apellido: "					<< persona->apellido				<<endl;
	cout << "DNI: "						<< persona->DNI					<<endl;
	cout << "Fecha de nacimiento: "	<< persona->fechaNacimiento	<<endl;
	cout << "Numero de serie: "		<< persona->serie					<<endl;
}

int main () {
	cout << "\n------------------------ \n";
	entidad persona; //define una persona de tipo entidad
	ingresarDatos(&persona); // muestra el menu de ingresar los datos de una persona
	persona.serie = generarSerie(&persona.DNI, &persona.apellido); // genera el Serial Number
	mostrarDatos(&persona); //muestra los datos de la persona
	cout << "\n------------------------ \n";
}

