// Contar letras y espacios en un archivo
#include <stdio.h>


int main () {
	FILE *fl;
	char buff;
	int espacios = 0;
	int caracter = 0;	

	fl = fopen ("datos.txt", "r");
	if (fl != NULL) {
		while (!feof(fl)) {
			fscanf (fl, "%c", &buff);
			buff == ' ' ? espacios++ : caracter++;
			buff == ' ' ? printf("%c Espacio\n", buff) : printf ("%c Caracter\n", buff);
		}
		fclose(fl);
		printf ("El archivo contiene %d espacios y %d caracteres\n", espacios, caracter-2);
	} 

}
