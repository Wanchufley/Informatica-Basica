#include <stdio.h>

int contar (char a[], char b[]) {
	//int i,j,len,rep = 0; Lo puse de esta forma y da error durante la ejecucion 
	int i = 0;
	int j = 0;
	int len = 0;
	int rep = 0;
	while (a[i] != '\0') {
		i++; len++;
	}		
	i = 0;
	while (b[j] != '\0') {
		if (a[i] == b[j]) {
			i++; j++;
		} else {
			j++;
		}
		if (i == len) {
			i = 0;
			rep++;
		}
	}
	return rep;
}
// Esto no habia que ponerlo en el examen
int main () {
	char a[7] = {"Dixan"};
	char b[40] = {"Dixan Rivas Dixan Drg Dixan Gonzalez"};
	int repetido = contar (a,b);
	printf ("El nombre se encuentra %d en la segunda cadena\n", repetido);
}
