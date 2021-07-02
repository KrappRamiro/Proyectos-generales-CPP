#include<iostream>
using namespace std;
void mostrarArray (int *array, int tamano) {
    for(int i=0; i < tamano; i++){
        cout << array[i] << " ";
    }
    cout <<endl;
}
void insertionSort(int *array, int tamano) {
   int key, j;
   for(int i = 1; i<tamano; i++) {
      key = array[i];//key va a tener el valor de i, esto va a ser fundamental para el sort
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;
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
    insertionSort(arr, n);
    cout << "Array despues de ordenar: ";
    mostrarArray(arr, n);
    averiguarMinMaxArrayOrdenado(arr, n);
return 0;
}
