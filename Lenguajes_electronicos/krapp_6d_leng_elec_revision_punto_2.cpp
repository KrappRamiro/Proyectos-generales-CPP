#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3, menor, mayor;

    cout<<"Ingrese 3 numeros :\n";
    cin >> n1 >> n2 >> n3;

	/*Aqui se asigna que n1 y n2 son menor y mayor, aunque sean un valor aleatorio.
	Esto es porque despues se van a usar para comparar, y si no llegan a ser menores o mayores
	se va a correjir automaticamente por la naturaleza del programa*/
    menor = n1;
    mayor = n2;

    //La parte más importante del programa
    
	if (n2 < menor)
    {
        menor = n2;
    }

    if (n3 < menor)
    {
        menor = n3;
    }
    if (n3 > mayor)
    {
        mayor = n3;
    }

    if (n2 > mayor)
    {
        mayor = n2;
    }
	//Ahora que finalizo el calculo, procedo a mostrar los valores en pantalla
    cout << "\n\n El menor numero entre: [ "<< n1 << ", " << n2 << ", " << n3 << " ] es : "<< menor;
    cout << "\n\n El mayor numero entre: [ "<< n1 << ", " << n2 << ", " << n3 << " ] es : "<< mayor;
    return 0;
}

