//sumar todos los numeros que se encuentran en el archivo
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
	srand(time(NULL));
	FILE *fp;
	int buff;
	int tmp;
	int sumag = 0;
	int sumal = 0;

	fp = fopen ("datos.txt", "w+");
	if (fp != NULL) {
		for (int i=0;i<=1000;i++) {
			tmp = rand() % 1000;
			fprintf (fp, "%d\n", tmp);
			sumag += tmp;
		}
	}
	fclose(fp);
	fp = fopen ("datos.txt", "r");
	if (fp != NULL) {
		while (!feof(fp)) {
			fscanf (fp, "%d\n", &buff);
			sumal += buff;
		} 
	}
	fclose(fp);
	if (sumag == sumal) {
		printf ("El resultado de la suma de los numeros generados y leidos son iguales %d\n", sumal);
	}
}

