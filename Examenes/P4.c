#include <stdio.h>

int contar (char p[]) {
	int i = 0,palabras = 0;
	while (p[i] != '\0') {
		p[i] == ' ' && p[i-1] != ' ' ? palabras++ : 0 ;
		i++;
	}
	return (p[0] == '\0' ? 0 : palabras+1);
}

int main () {
	char cadena[] = {"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc elit."};
	int palabras = contar (cadena);
	printf ("Numero de Palabras %d\n", palabras);
}
