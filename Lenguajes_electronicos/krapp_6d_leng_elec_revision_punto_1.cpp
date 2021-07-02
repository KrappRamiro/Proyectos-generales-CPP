//Krapp 6D Lenguajes electronicos
#include <iostream>
using namespace std;

//Aqui armo las funciones que voy a utilizar:

/*Declaro la funcion con la que voy a hacer descuento, aplicable a otros codigos,
tambien permite modificar la cantidad de descuento, retorna el valor final despues del calculo*/
float hacerDescuento(float valor, float descuento){
	float valorConDescuento;
	valorConDescuento=valor*(descuento/100);
	return valorConDescuento;
	}

//una simple funcion para ingresar que día es, con dia como funcion global para poder usarla más tarde
string dia;
void preguntarDia(){
	cout<<"Ingrese el dia (todo en minusculas): ";
	cin>>dia;
	cout<<"El dia ingresado es "<<dia<<"\n";
	}



int main ()	{
	float montoAbonado=0;
	preguntarDia(); //aqui llamo a la funcion para preguntar el día
	cout<<"Ingrese el monto abonado: ";
	cin>>montoAbonado;
	cout<<"El monto abonado es "<<montoAbonado<<"\n"; //aqui le confirmo al usuario que cantidad ingresó, más util para mí que para el usuario
	
	if (montoAbonado>5000 and dia=="miercoles")
		{		//si se cumple esto, aplica el descuento, en otro caso va a al else
		cout<<"Se le va a aplicar un descuento.\n";
		float precioFinal = hacerDescuento(montoAbonado,50);
		cout<<"El precio final con descuento es "<<precioFinal;
		}
	else 
		{
		cout<<"No se cumple con los requisitos para ningun descuento, por lo tanto abonara "<<montoAbonado;
		}
	
return 0;	}
