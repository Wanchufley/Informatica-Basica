#include <stdio.h>

int main () {
	char palabra[20];
	int i,j,capicua = 0;
	printf ("Introduzca una palabra\n");
	scanf ("%s", palabra);
	getchar();
	while (palabra[i] != '\0') { i++; } // Determinar cantidad de caracteres 	
	for (j;j<i;j++) {
		if (palabra[j] != palabra[i-j-1]) { 
			printf ("La palabra %s no es capicua\n", palabra);
			break; // Si los caracteres no son iguales ya sabemos no es capicua y salimos del bucle
		} else {
			capicua++; // Aumentar por cada caracter igual que encuentre
		} 
	}	
	capicua == i ? printf ("La palabra %s es capicua\n", palabra) : (0); // Si todos los caracteres son iguales el numero de capicua tiene que ser igual a la cantidad de caracteres de la cadena que es i
}
