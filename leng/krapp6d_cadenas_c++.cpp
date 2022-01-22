#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstring>
using namespace std;
int buscar_en_archivo(char *fileName, char *string_buscado) {
	FILE *fp;
	int resultados_encontrados = 0;
	char temp[512];

	if((fp = fopen(fileName, "r")) == NULL) {
		return(-1);
	}

	while(fgets(temp, 512, fp)) {
		if( (strstr(temp, string_buscado)) != NULL) {
			cout << temp <<endl;
			resultados_encontrados++;
		}


	if(resultados_encontrados == 0) {
		cout << "no se encontro el String" <<endl;
		fclose(fp);
	}

	fclose(fp);
	return(resultados_encontrados);
}

int main () {
struct datos
{
    char ubicacion[15]={0};
    int temperatura=-100;
    int humedad;
};
	char str[3000];
	int cantidad;
	FILE * fp;
	fp = fopen("datos_leidos.txt","r"); //abrir el archivo	//se abre en r para solo lectura
	cantidad = buscar_en_archivo("datos_leidos.txt", "COCINA");
	cout << cantidad;
	fclose(fp);
	return (0);
}
