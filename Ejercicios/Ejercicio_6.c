#include <stdio.h>



int main () {
	char nombre[10];
	FILE *arch;
	FILE *imp;
	FILE *par;
        char tmp[255];
	char aux = 'a';
	int palabras = 0;
 
	printf ("Introduzca el nombre del fichero\n");
	scanf ("%s", nombre);
   	arch = fopen (nombre, "r");
	if (arch == NULL) {
		printf ("No se puede abrir el archivo\n");
	} else {
		while (!feof (arch)) {
			fscanf (arch, "%c", tmp);
				if (tmp == " ") {
					if (aux != " ") { 
						palabras++;
						printf ("%s ", tmp);
						aux = tmp;
					}
				} else {
					aux = tmp;
				}
			}
			palabras++;
			printf ("Archivo contiene: %d palabras\n", palabras);
		}
}			
