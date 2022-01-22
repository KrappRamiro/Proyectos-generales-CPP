/*
Dada una matriz de 3 filas y 5 columnas de números enteros, se ingresen desde el teclado los valores y se guarden en la matriz. 
Luego calcular el promedio de los valores ingresados y calcular cuántos están sobre dicho valor. 
Por último mostrar el contenido en orden inverso a como se ingresaron
*/
//	Krapp Ramiro 6D
#include <iostream>
using namespace std;
int main()
{
	int f,c,cantidadNumerosIngresados,cantidadNumerosSobrePromedio,sumaNumerosIngresados =0;
	float promedioNumerosIngresados =0;
	int miMatriz[3][5]; //matriz de 3 filas y 5 columnas de numeros enteros
	cout << "Ingrese los numeros:\n";
	
	//ingreso todos los numeros en la matriz
	for (f=0;f<=2;f++)
	{
		cout<<"Fila " << f+1 << "\n"; //es f+1 porque f empieza en 0
		for (c=0;c<=4;c++)
		{
			cin>>miMatriz[f][c];
			cantidadNumerosIngresados++;
			sumaNumerosIngresados = sumaNumerosIngresados + miMatriz[f][c];
		}
	}
	
	promedioNumerosIngresados = (float) sumaNumerosIngresados/cantidadNumerosIngresados;
	cout << "La suma de los numeros ingresados es: "<< sumaNumerosIngresados << "\nLa cantidad de numeros ingresados es " << cantidadNumerosIngresados << "\nEso significa que el promedio es igual a " <<promedioNumerosIngresados << "\n\n";
	
	//recorro la matriz buscando la cantidad de numeros sobre el promedio
	for (f=0;f<=2;f++)
	{
		for (c=0;c<=4;c++)
		{
			if (miMatriz[f][c]<promedioNumerosIngresados)
			{
				cantidadNumerosSobrePromedio++;
			}
		}
	}
	
	//muestro los numeros en orden inverso
	for (f=2;f>=0;f--)
	{
		cout<< "\t\t\tFila Numero " << f+1 << "\n";
		for (c=4;c>=0;c--)
		{
			cout <<"numero"<< c+1 << ": " << miMatriz[f][c] << "\t";
		}
		cout << "\n\n";
	}
}
