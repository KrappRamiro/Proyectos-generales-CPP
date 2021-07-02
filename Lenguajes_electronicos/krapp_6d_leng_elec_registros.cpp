/*
Crear un producto para ingresar
los 25 registros tomados en una estación de trenes,
con los siguients datos:

    • Numero tren
    • Hora salida
    • Hola llegada
    • Destino
    • Maquinista
    • Cantidad pasajeros

    --> Imprimir por patalla la totalidad de los viajes efectuados
    --> Y en el caso de no salir completo informarlo
Nota: capacidad de cada tren 640 pasajeros
*/
#include <iostream>
#include <string>
using namespace std;

unsigned const int capacidadTren = 640;

int main()
{
    struct estacionTren /* Armo la estructura de mi tren */
    {
		int numero;
		int horaSalida; 	//en formato militar, por ejemplo las 15:30 serian las 1530
		int horaLlegada;	//idem
		string destino;
		int maquinista;		//IDEA: Hacer un diccionario para los maquinistas, el maquinista = 1 seria juan, el maquinista = 2 seria pepe, y asi, lo mismo con numeroTren
		unsigned int cantidadPasajeros;
		bool lleno;
    };

    estacionTren *tren = new estacionTren[2];


    for (int i=0; i<2; i++) /* Ingreso los datos de mis trenes */
    {
    	cout << "\n\t\t\t TREN " << i+1 << "\n-------------------------------------------------------" << endl;
        cout << "Dime el numero del tren de la estacion " << i+1 << endl;
        cin >> tren[i].numero;
        cout << "Dime la hora de salida de la estacion " << i+1 << endl;
        cin >> tren[i].horaSalida;
        cout << "Dime  la hora de llegada de la estacion " << i+1 << endl;
        cin >> tren[i].horaLlegada;
        cin.ignore(); // esto es para no tener problemas con la mezcla de cin y getline(cin, variable)
        cout << "Dime el destino del tren " << i+1 << endl;
        getline(cin,tren[i].destino);
        cout << "Dime el maquinista del tren de la estacion " << i+1 << endl;
        cin >> tren[i].maquinista;
        cout << "Dime la cantidad de pasajeros del tren "<< i+1 << endl;
        cin >> tren[i].cantidadPasajeros;
        cout << "-------------------------------------------------------\n\n";
    }

	for (int i=0; i<2; i++) /* Muestro los datos de mis trenes */
	{
		cout << "\n\n\n\t\t INFORMACION DEL TREN " << i+1 << "\n-------------------------------------------------------" << endl;
		cout << "El numero del tren " << i+1 << " es " << tren[i].numero << endl;
		cout << "La hora de salida del tren " << i+1 << " es " << tren[i].horaSalida << endl;
		cout << "La hora de llegada del tren " << i+1 << " es " << tren[i].horaLlegada << endl;
		cout << "El destino del tren " << i+1 << " es " << tren[i].destino << endl;
		cout << "El maquinista del tren " << i+1 << " es " << tren[i].maquinista << endl;
		cout << "La cantidad de pasajeros del tren " << i+1 << " es " << tren[i].cantidadPasajeros << " por lo tanto ";
		if (tren[i].cantidadPasajeros >= capacidadTren)
		{
			tren[i].lleno = true;
			cout << "el tren salio lleno \n";
		}
		else
		{
			tren[i].lleno = false;
			cout << "el tren no salio lleno \n";
		}
		cout << "-------------------------------------------------------\n";
	}
return 0;
}
