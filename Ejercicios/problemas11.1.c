// Copiar caracteres de un archivo a otro
#include <stdio.h>

int main () {
	FILE *arcorigen;
	FILE *arcdestino;
	char buffer;
	arcorigen = fopen ("datos.txt", "r");
	arcdestino = fopen ("destino.txt", "w+");
	if (arcorigen == NULL) {
		printf ("No se pudo abrir el archivo de origen\n");
	} else {
		while (!feof(arcorigen)) {
			fscanf (arcorigen, "%c", &buffer);
			if (arcdestino == NULL) {
				printf ("No se pudo abrir el archivo de destino\n");
			} else {
				fprintf (arcdestino, "%c", buffer);
			}
		}	
		fclose (arcorigen);
		fclose (arcdestino);
	}
}
