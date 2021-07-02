/*#include <iostream>
using namespace std;
 
int main()
{	
	struct datosPersona
	{
		string nombre;
		char 	inicial;
		int 	edad;
		float 	nota;
	};
	
	datosPersona persona;	
	
	persona.nombre = "Juan";
    persona.inicial = 'J';
    persona.edad = 20;
    persona.nota = 7.5;
    cout << "La edad es " << persona.edad;
 
    return 0;
}
*/
/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
    struct datosPersona
    {
        string nombre;
        char  inicial;
        int   edad;
        float nota;
    };
 
    datosPersona *persona = new datosPersona[6];
 
    for (int i=0; i<5; i++)
    {
        cout << "Dime el nombre de la persona " << i+1 << endl;
        getline(cin,persona[i].nombre);
    }
    cout << "La persona 3 es " << persona[2].nombre << endl;
 
    return 0;
}
*/
