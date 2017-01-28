#include <stdio.h>
#include <string.h>

int contar (char a[], char b[]) {
	int i = 0, j = 0, rep = 0, len = strlen(a);
	while (b[j] != '\0') {
		if (a[i] == b[j]) {
			if(i == len-1)
				rep++; 
			i++; j++;
		} else {
			i=0; j++; 		
		}
	}
	return rep;
}
int main () {
	char a[] = "Dixan";
	char b[] = "Dixan Daniel Dixan Yoan Divan Dicsan Lisander Hector Dixan";
	int repetido = contar (a,b);
	printf ("El nombre se encuentra %d en la segunda cadena\n", repetido);
}
