#include <stdio.h>

char cadena[100];

void convertir (char cadena[], int oper) {
	int i = 0;
	while (cadena[i] != '\0') {
		if (oper == 0 && (cadena[i] >= 'A' && cadena[i] <= 'Z')) { 
			cadena[i] = cadena[i] + 32;
		}
		else if (oper == 1 && (cadena[i] >= 'a' && cadena[i] <= 'z')) {
			cadena[i] = cadena[i] - 32;
		}
		i++;
	} 
	printf ("%s\n", cadena);
}

int main () {
	int oper;
	printf ("Introduzca Cadena de texto\n");
	scanf ("%s", cadena);	
	getchar();
	printf ("Introduzca 0 para convertir a miniscula o 1 para convertir a mayuscula\n");
	scanf ("%d", &oper);
	convertir(cadena, oper);
}
