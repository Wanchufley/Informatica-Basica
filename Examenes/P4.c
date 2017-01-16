#include <stdio.h>

int contar (char p[]) {
	int i = 0;
	int palabras = 0;
	while (p[i] != '\0') {
		if (p[i] == ' ' && p[i-1] != ' ') {
			palabras++;
		}
	i++;
	}
	if (p[0] == '\0') {
		return 0;
	}
	if (i != 0 && p[i] == '\0') {
		return palabras+1;
	}
}

int main () {
	char cadena[] = {"Descanse en paz informatica basica"};
	int palabras = contar (cadena);
	printf ("Numero de Palabras %d\n", palabras);
}
