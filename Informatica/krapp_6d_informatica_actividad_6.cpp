#include <iostream>
using namespace std;

void swappear(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void mostrarArray (int *array, int tamano) {
    for(int i=0; i < tamano; i++){
        cout << array[i] << " ";
    }
    cout <<endl;
}
void selectionSort (int *array, int tamano) {
    int i, j, imin;
    for (i = 0; i < tamano-1; i++) {
        imin = i;
        for (j = i+1; j<tamano; j++) {
            if (array[j] < array[imin]) {
                imin=j;
            }
            swappear(array[i], array[imin]);
        }
    }
}
void averiguarMinMaxArrayOrdenado(int *array, int tamano) {
    cout << "el menor es: " << array[0]      << endl;
    cout << "el mayor es: " << array[tamano-1] <<endl;
}

int main(){
    int n=10;
    int arr[n];
    for (int i=0 ; i<n ; i++) {
        arr[i] = rand() % 11; //rand() %11 toma un valor aleatorio entre 0 y 10, entonces lleno cada posicion del array
    }
    cout << "Array antes de ordenar: ";
    mostrarArray(arr, n);
    selectionSort(arr, n);
    cout << "Array despues de ordenar: ";
    mostrarArray(arr, n);
    averiguarMinMaxArrayOrdenado(arr, n);
return 0;
}
