#include <stdio.h>

void convertir (char *palabra, int operacion) {
	int i = 0;
	while (palabra[i] != '\0') {
		if (operacion == 0 && (palabra[i] >= 'A' || palabra[i] <= 'Z'))
				palabra[i] = palabra[i] + 32;
		else if (operacion == 1 && (palabra[i] >= 'a' || palabra[i] <= 'z')) 
				palabra[i] = palabra[i] - 32;
		i++;
	}
}


int main () {
	char palabra [] = {""}; int opcion;
	printf ("Introduzca Palabra\n");
	scanf ("%s", palabra);
	getchar();
	printf ("Introduzca 0 para convertir a Minuscula o 1 para Convertir a Mayuscula\n");
	scanf ("%d", &opcion);
	convertir (palabra,opcion);
 	printf ("%s\n", palabra);	
}
