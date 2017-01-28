#include <stdio.h>

void contar (char cadena[]) {
	int longitud = 0; int espacio = 0; int i=0;
	while (cadena[i] != '\0') {	
		longitud++;
		(int)cadena[i] == 32 ?  espacio++ : (0);
		i++;
	}	
	printf ("Cadena contiene %d espacios y %d caracteres:\n", espacio, longitud-espacio);
}

int main () {
	char cadena[] = {"Cuantos sobreviviran informatica basica?"};
	contar (cadena);
}
