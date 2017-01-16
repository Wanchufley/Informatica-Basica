#include <stdio.h>
<<<<<<< HEAD
=======
#include <time.h>
#include <stdlib.h>
>>>>>>> b8a495626e6b051cc31196f2c0f4d7e921fb78d1

int main () {
	FILE *origen;		
	FILE *pares;
	FILE *impares;
	int buff;
	
	origen = fopen ("datos.txt", "r"); pares = fopen ("par.txt", "w+"); impares = fopen ("impar.txt", "w+");
	if (origen != NULL) {
		while (!feof(origen)) {
			fscanf (origen, "%d\n", &buff);
			if (pares != NULL && impares != NULL) {
				if (buff % 2 == 0) {
					fprintf (pares, "%d\n", buff);
				} else {
					fprintf (impares, "%d\n", buff);
				}
			} else {
				printf ("%s", "No se puedo abrir uno de los archivos de destino\n");
			}
		}
	} else {
		printf ("%s", "No se puedo encuentra el archivo datos.txt o no tiene permisos para leerlo\n");
	} fclose(origen); fclose(pares); fclose(impares);
}
