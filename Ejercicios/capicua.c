#include <stdio.h>

int main () {
	char palabra[20];
	int i,lon,capicua = 0;
	printf ("Introduzca una palabra\n");
	scanf ("%s", palabra);
	getchar();

	while (palabra[i] != '\0') {
		lon++;
		i++;
	}	
	for (int i=0;i<lon;i++) {
		palabra[i] == palabra[lon-i-1] ? (capicua++) : (0);
	}	
	capicua == lon ?  printf ("La palabra %s es capicua\n", palabra) : printf ("La palabra %s no es capicua\n", palabra);
}
