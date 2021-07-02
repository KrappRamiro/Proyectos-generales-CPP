#ifndef MIHEADER
#define MIHEADER

#include <iostream>
using namespace std;

void llenarVector(int miVector[],int n)
{
    for (int i=0 ; i<n ; i++)
    {
        miVector[i]= rand()%10;
    }
}

void mostrarVector(int miVector[],int n)
{
    cout<<"--------------------------------------------------------------"<<endl;
    cout<<"Los numeros de mi vector son: ";
    for (int i=0 ; i<n ; i++){
        cout << miVector[i] << " | ";
    }
    cout<<"\n--------------------------------------------------------------"<<endl;
}

void seleccionSort (int miVector[], int n)
{
    int min, aux;
    for (int i=0; i<n-1; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
        {
            if(miVector[min] > miVector[j])
            min=j;
        }
    aux = miVector[min];
    miVector[min] = miVector[i];
    miVector[i]=aux ;
    }
}

#endif

