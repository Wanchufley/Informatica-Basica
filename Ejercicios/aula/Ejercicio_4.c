// Contar numeros impares en un arhivo de texto
#include <stdio.h>



int main () {
	FILE *arch;
        int tmp;
	int impares = 0;

   	arch = fopen ("datos.txt", "r");
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
		fclose(arch);
	 }			
}
