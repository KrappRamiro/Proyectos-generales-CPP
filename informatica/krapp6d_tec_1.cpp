//Krapp 6D Informatica
		//Ingresar 10 numeros y hallar el mayor y cuantas veces aparece en ese vector
	#include <iostream>
	using namespace std;
	int main()
	{
		//declaracion de variables
		const int maximoDeNumeros=10;
		float miVector[maximoDeNumeros];
		float numeroMayor=0;
		int i=0,contador=0;
		numeroMayor=miVector[0]; //aca esto es auxiliar, si no llega a ser el valor [0] va a cambiar automaticamente
		
		//Aca un for para el ingreso de los numeros del vector
		for (i=0; i<maximoDeNumeros; i++)
		{
			cout<<"ingrese el numero "<<i<<"\n";
			cin>>miVector[i];
			//Reviso si el numero ingresado es el numero mayor
			if (miVector[i]>=numeroMayor)
			{
				numeroMayor=miVector[i];
			}
		}
		
		//Aca un for para ver cuantas veces se repite el mayor
		for (i=0; i<maximoDeNumeros; i++)
		{
			if (miVector[i]>=numeroMayor)
			{
				contador++;
			}
		}
		
		//Una vez que todo termino, queda printear los valores en pantalla
	cout<<"El numero mayor es: "<<numeroMayor<<"\nAparecio "<< contador <<" veces en el vector\n";
	return 0;
	}
