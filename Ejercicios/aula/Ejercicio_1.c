#include <stdio.h>

int main () {
	FILE *fl;
	char tmp;
	fl = fopen ("datos.txt", "r");	
	if (fl == NULL ) {
		printf ("No se puedo abrir el archivo\n");
	}else {
		while (!feof(fl)){
			fscanf (fl, "%c", &tmp);
			printf ("%c", tmp);
		}	
	}	
	

}
