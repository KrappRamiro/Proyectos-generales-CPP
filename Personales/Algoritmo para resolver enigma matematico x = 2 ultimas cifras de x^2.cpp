#include <iostream>
using namespace std;
int main ()
{
	cout << "programa iniciado\n";
	for (int i=30; i<100; i++)
	{
		cout << "Para xy = " << i << ":\t" << i*i;
		if (i*i%100==i)
		{
			cout << "\tNumero Indicado!!!!\n";
		}
		else 
		{
			cout <<'\n';
		}
	}
return 0;
}
