#include "iostream"
#include "cstring"
using namespace std;
/*
Actividad de desarrollo
Generar un producto( software ) y su diagrama l�gico  que realice lo siguiente 
Ingrese tres cadenas 
C1.20 caracteres
C2.10 caracteres
C3. 6 caracteres 
    a) Muestre por pantalla , en ese orden 
C2
C1

C1+C3

C2 espacio C1
    b) C2 de atr�s para adelante ( si c2 = casa , asac)
    c) Los primeros 4 caracteres de C3 + los dos �ltimos de C1 + el 5 y 8 de C2 
*/
int main()
{
    int len, i=0;
    char cadena1[21], cadena2[11], cadena3[7], varAux1[50];
    cout << "Introduce una primera cadena de maximo 20 caracteres: \t";
    cin >>  cadena1;
    cout << "Introduce una segunda cadena de maximo 10 caracteres: \t";
    cin >> cadena2;
    cout << "Introduce una tercera cadena de maximo 06 caracteres: \t";
    cin >> cadena3;
   
    //C2 y C1
    /*------------------------------*/
    cout << "\nLa cadena 2 es: " << cadena2 << "\nLa cadena 1 es: " << cadena1 << "\n";
    /*------------------------------*/

	//C1+C3
	/*------------------------------*/
    strcpy(varAux1, cadena1);  //Aqui uso variables auxiliares para no modificar las cadenas originales
	strcat(varAux1, cadena3);
	cout << "La Cadena 1 + Cadena 3 es: " << varAux1 << "\n";
	/*------------------------------*/

	//C2 espacio C1
	/*------------------------------*/
	strcpy(varAux1, cadena2);
	strcat(varAux1, " ");
	strcat(varAux1, cadena1);
	cout << "La cadena 2 espacio cadena 1 es: " << varAux1 << "\n";
	/*------------------------------*/

	//C2 de atr�s para adelante
	/*------------------------------*/
	cout<< "La cadena 2 de atras para adelante es: ";
	strcpy(varAux1, cadena2);
    len=strlen(varAux1);
    for (i=len-1; i >=0 ; i--) 
	{
        cout<<varAux1[i];
	}
	cout<<"\n";
	/*------------------------------*/
	
	//Los primeros 4 caracteres de C3 + los dos �ltimos de C1 + el 5 y 8 de C2
	/*------------------------------*/
	cout<< "Los primeros 4 caracteres de C3 + los dos ultimos de C1 + el 5 y 8 de C2: ";
	//Los primeros 4 caracteres de C3
	strncpy(varAux1, cadena3, 4);
	cout<<varAux1;
	
	//los dos �ltimos de C1
	strcpy(varAux1, cadena1);
    for (i=2; i >=0 ; i--) 
	{
        cout<<varAux1[i];
	}
	
	//El 5 y 8 de C2
	strcpy(varAux1, cadena2);
	cout<< varAux1[5] << varAux1[8];
	/*------------------------------*/
	return 0;
}
