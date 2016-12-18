//Crear un archivo con numeros en rango de 1 a 1000 y luego leerlos e imprimirlos
#include <stdio.h>

int main () {
	FILE *fp;
	int buff;
	
	fp = fopen ("datos.txt", "w+");
	if (fp != NULL) {
		for (int i=0;i<=1000;i++) {
			fprintf (fp, "%d\n", i);
		}
	}
	fclose(fp);
	fp = fopen ("datos.txt", "r");
	if (fp != NULL) {
		while (!feof(fp)) {
			fscanf (fp, "%d\n", &buff);
			printf ("%d\n", buff);
		} 
	}
	fclose(fp);
}
