//Krapp y Barlasina 6D Informatica
#include <iostream>
using namespace std;

void calcularCuadrado(){
	    float numero, numeroCuadrado;
		cout<<"ingrese el numero del cual desea saber el cuadrado \n";
        cin >> numero;
        numeroCuadrado = numero*numero;
        cout << "El cuadrado de "<< numero << " es " << numeroCuadrado;
}

void mostrarHistoriaEnPantalla (){
		string nombre, apellido, domicilio;
		cout << "Ingrese su nombre: ";
		getline(cin, nombre);
		cout << "Ingrese su apellido: ";
		getline(cin, apellido);
		cout << "Ingrese su domicilio: ";
		getline(cin, domicilio);
		cout << "\nAqui va la historia:\nUn dia " << nombre << " estaba caminando tranquilo por la calle, cuando aparecio el senor Johnson. \n Este senor le pregunto su apellido, a lo que "<< nombre << " respondio que su apellido es " << apellido <<"\nPor lo tanto su nombre completo es "<<nombre<< " " << apellido << ". \nLuego, el protagonista de esta historia se dirigio a su domicilio con direccion en "<< domicilio << " y se tomo una taza de cafe.\n";
}

int main()
{
int punto;
    cout << "Que punto desea probar ?"<<endl;
    cin >> punto;
    cin.ignore(1, '\n'); // Salteamos el \n despues del punto
    switch(punto)
	{
	case 1: {
		mostrarHistoriaEnPantalla();
		break;
			}
            
    case 2:	{
    	calcularCuadrado();
        break;
        	}
        	
    default:{
    	cout<< "El numero introducido es incorrecto";
		break;
        	}
	}
}
