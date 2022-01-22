//Es algo asi:
//-->	int *puntero; 			//declaro mi puntero.
//-->	puntero = &variable;	//declaro que mi puntero es igual a una variable.
//-->	cout << *puntero 		//printeo mi puntero con algun valor, si pusiera 
								//cout << puntero sin el * me apareceria la direccion de memoria.

/*
#include <iostream>
using namespace std;
int main () {

int variable = 20;
int *testeo;

testeo = &variable;

   cout << "Value of variable variable: ";
   cout << variable << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in testeo variable: ";
   cout << testeo << endl;

   // access the value at the address available in pointer
   cout << "Value of *testeo variable: ";
   cout << *testeo << endl;

   return 0;

	
}
*/

/*
#include <iostream>
using namespace std;
 
int main ()
{
	const int MAXIMO = 3;
	int  miVector[MAXIMO] = {5, 3, 20};
 
	for (int i=0; i<MAXIMO ; i++) 
	{
		cout << "Value of miVector[" << i << "] = ";
		cout << miVector[i] << endl;
	}

return 0;
}
*/



/*
#include <iostream>
using namespace std;
int main() 
{
	const int MAXIMO = 3;
	int  miVector[MAXIMO] = {2, 7, 300};
	int *vectorPuntero[MAXIMO];

	for (int i = 0; i < MAXIMO; i++) 
	{
		vectorPuntero[i] = &miVector[i]; // assign the address of integer.
	}

	for (int i = 0; i < MAXIMO; i++) 
	{
		cout << "Value of miVector[" << i << "] = ";
		cout << *vectorPuntero[i] << endl;
	}

return 0;
}
*/
#include <iostream>
 
using namespace std;
const int MAX = 4;
 
int main () {
const char *names[MAX] = { "Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali" };

   for (int i = 0; i < MAX; i++) {
      cout << "Value of names[" << i << "] = ";
      cout << (names+i) << endl;
   }
   
   return 0;
}












