// Imprimir numeros que estan en posiciones pares
#include <stdio.h>

int main () {
	FILE *fp;
	int buff;
	int pos = 0;
	
	fp = fopen ("datos.txt", "r");
	if (fp != NULL) {
		while (!feof(fp)) {
			fscanf (fp, "%d\n", &buff);
			pos++;
			pos % 2 == 0 ? printf ("El numero %d esta en una posicion par\n",buff) : (0);
		}
	}
}
