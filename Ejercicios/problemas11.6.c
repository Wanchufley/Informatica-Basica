// Imprimir numeros que estan en posiciones pares
#include <stdio.h>

int main () {
	FILE *fp;
	int buff;
	char nombre[100];

	printf ("Introduzca el nombre de archivo\n");
	scanf ("%s", nombre);	
	fp = fopen (nombre, "r");
	fp == NULL ? printf ("El archivo %s no existe\n", nombre) : printf("El archivo %s si existe\n", nombre);		
	fp != NULL ? fclose(fp) : (0);
}
