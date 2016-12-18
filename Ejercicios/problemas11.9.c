// Buscar en archivo si se encuentra el numero dado por el usuario 
#include <stdio.h>

int main () {
	FILE *fp;
	int buff,num;
	int found=0;
    	int linea=0;
	
	printf ("Introduzca un numero para buscar en el archivo\n");
	scanf ("%d", &num);	
	fp = fopen ("datos.txt", "r");
	if (fp != NULL) {
		while (!feof(fp)) {
			fscanf (fp, "%d\n", &buff);
			linea++;
			if (num == buff) {
				printf ("El numero %d ha sido encontrado en la linea %d\n", num, linea);	
				found = 1;
			}	
		}
		fclose(fp);
		found == 0 ? printf ("El numero no fue encontrado\n") : (0); 
	}
}
