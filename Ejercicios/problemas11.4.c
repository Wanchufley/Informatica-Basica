// Leer numeros pares de un archivo
#include <stdio.h>

int main () {
	FILE *fp;
	int buff;
	
	fp = fopen ("datos.txt", "r");
	if (fp != NULL) {
		while (!feof(fp)) {
			fscanf (fp, "%d\n", &buff);
			buff % 2 == 0 ? printf ("El numero %d es par\n",buff) : (0);
		}
	}
}
