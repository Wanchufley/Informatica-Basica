#include <stdio.h>

int contar (char p[]) {
	int i = 0;
	int palabras = 0;
	// int i, palabras = 0; Esto fue lo que puse y compila pero luego da error
	while (*(p+i) != '\0') {
		if (*(p+i) == ' ' && *(p+(i-1)) != ' ') {
			palabras++;
		}
	i++; // Creo puse el incremento fuera del while
	}
	/* p[0] == '\0' ? return 0 : (0);
	i != 0 && p[i] == '\0' ? return palabras+1 : (0);
	Lo puse asi y esta mal porque ? es un operador no un control de flujo la forma correcta es el if de abajo */
	if (*p == '\0') {
		return 0;
	}
	if (i != 0 && *(p+i) == '\0') {
		return palabras+1;
	}
}
// Esto no habia que hacerlo en el examen
int main () {
	char cadena[] = {"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc elit."};
	int palabras = contar (cadena);
	printf ("Numero de Palabras %d\n", palabras);
}
