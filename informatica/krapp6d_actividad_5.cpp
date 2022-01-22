// Escribir un programa que llene un arreglo con los veinte primeros números pares y calcule su suma. 
// Que muestre los números y la suma
//	Krapp Ramiro 6D

#include<iostream>
using namespace std;
int main(){
	
int miVector[20];
int i,sumaDePares=0;

for(i=0;i<=20;i++)
{
	miVector[i]=i*2;	//el *2 es para mostrar los numeros pares, porque todos los numeros impares multiplicados por un numero par van a dar un numero par.
	cout <<"El numero "<< i << " es: \t" << miVector[i] << "\n";
	sumaDePares = sumaDePares + miVector[i];
}

cout<<"La suma de los primeros numeros pares es: "<<sumaDePares;
return 0;
}
