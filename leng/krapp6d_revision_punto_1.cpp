#include <iostream>
using namespace std;
int main () {
	int var = 5;
	int * miPuntero = &var;
	int dato = *miPuntero;
	cout << "Valor de int * miPuntero = &var:\t" << miPuntero <<endl;
	cout << "valor de var\t\t\t\t" << var << endl;
	cout << "dato = *miPuntero:\t\t\t" << dato <<endl;
	int *segundoPuntero = (int*) malloc(sizeof(int));
	/*malloc recorre la memoria hasta que encuentra un espacio libre de tamaño de memoria int,
	 o sea, hasta que encuentra 4 bytes, entonces cuando lo hace le asigna un espacio de memoria de 4 bytes a mi puntero
	 Adentro de sizeof() le podria mandar char, struct, long etc...
	 malloc me devuelve una direccion de memoria, y eso se lo asigno a mi puntero segundoPuntero
	 Entonces estaria haciendo algo parecido a como hago int * miPuntero = &var;
	*/
	//Cuando termino de usar la variable, tengo que usar esto:
	free(segundoPuntero);
	//asi me libera esto de la memoria RAM

// -------------------------------------------------------------------------------
	// el asterisco es para obtener EL VALOR que hay en la direccion de memoria
	// printear puntero me tira la direccion de memoria			!!!
	// printear *puntero me tira el valor que hay						!!!
// -------------------------------------------------------------------------------


int tam = 4;
char * puntero = (char*) (malloc (sizeof(char)));
puntero = (char*) (realloc (puntero, sizeof(char)*4));
// se podria hacer 			puntero = (char*) (realloc (puntero, tam));			y seria lo mismo porque me reservaria 4 espacios de memoria.
*puntero = 'c';
/*
realloc me relocaliza el puntero en otro lado de la memoria
Se usa realloc (elPuntero, laCantidadDeMemoria)
*/
return 0;

// Avanzar en la direccion de memoria:
// puntero ++;
// puntero* = 'a';
}



