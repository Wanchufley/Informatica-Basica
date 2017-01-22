#include <stdio.h>
#include <string.h>

int contar (char a[], char b[]) {
	//int i,j,len,rep = 0; Lo puse de esta forma y da error durante la ejecucion 
	int i = 0;
	int j = 0;
	int rep = 0;
 	int len = strlen(a); // Ver commits anteriores
	while (b[j] != '\0') {
		// Esto no lo hice asi, lo hice como la version anterior
		if (a[i] == b[j]) {
			i == len-1 ? rep++ : (0) ; 
			i++; j++;
		} else {
			j++; i=0;
		}
	}
	return rep;
}
// Esto no habia que ponerlo en el examen
int main () {
	char a[] = "Dixan";
	char b[] = "Dixan Daniel Dixan Yoan Divan Dicsan Lisander Hector Dixan";
	int repetido = contar (a,b);
	printf ("El nombre se encuentra %d en la segunda cadena\n", repetido);
}
