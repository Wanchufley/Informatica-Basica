// Contar palabras en un archivo de texto
#include <stdio.h>

int main () {
	FILE *arch;
        char tmp,aux;
	int palabras = 1;

   	arch = fopen ("datos.txt", "r");
	if (arch == NULL) {
		printf ("No se puede abrir el archivo\n");
	} else {
		while (!feof (arch)) {
			fscanf (arch, "%c", &tmp);
			printf ("%c", tmp);
			if (tmp == ' ') { 
				aux != ' ' ?  palabras++ : printf ("Espacio doble\n"); 
			} 
			aux = tmp;
			}
		} 			
	printf ("Archivo contiene: %d palabras\n", palabras);
}
