// Contar numeros impares en un arhivo de texto
#include <stdio.h>



int main () {
	char nombre[10];
	FILE *arch;
        int tmp;
	int impares = 0;
 
	printf ("Introduzca el nombre del fichero\n");
	scanf ("%s", nombre);
   	arch = fopen (nombre, "r");
	if (arch == NULL) {
		printf ("no se pudo abrir\n");
	} else {
		while (!feof (arch)) {
			fscanf (arch, "%d\n", &tmp);
			if (tmp % 2 != 0) {
				impares++;
				printf ("El numero %d es impar\n", tmp);		
			}	
		}
	 }			
}
