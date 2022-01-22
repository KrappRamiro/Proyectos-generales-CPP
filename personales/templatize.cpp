#include <iostream>
#include <string>

template <typename T> //we use T because it is generic
void swap(T &a, T&b) {
	int temp=a;
	a = b;
	b = temp;
}

template<typename T>
void swap(T a[], T b[], int size) {
	for (int i=0 ; i<size ; i++) {
		T temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

int main () {
	int n1=3;
	int n2=5;
	swap(n1, n2);
	std::string name1="Pepe";
	std::string name2="Argento";
	swap(name1, name2);
	std::cout << "numero1: " << n1 << "\t\tnumero2: " << n2 <<std::endl;
	std::cout << "name1: " << name1 << "\tname2: " << name2 <<std::endl;

	int nines[] = {9,9,9,9,9,9};
	int ones[] =  {1,1,1,1,1,1};

	for (int i=0 ; i<6 ; i++) {
		std::cout << ones[i] << " " << nines[i] << "\t";
	}
	std::cout << "\n\n";
	swap(nines,ones,6);
	for (int i=0 ; i<6 ; i++) {
		std::cout << ones[i] << " " << nines[i] << "\t";
	}
}
