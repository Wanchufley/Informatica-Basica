#include <stdio.h>


int main () {

	FILE *datos;
	int buff;
	datos = fopen ("datos.txt", "r");
 		while (!feof (datos)) {
			fscanf (datos, "%d\n", &buff);
			printf ("%d\n", buff);
		}	
		fclose (datos);
}
