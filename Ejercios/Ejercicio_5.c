// Leer archivo con numeros guardar pares en arhivo par y impares en arhivo impar
#include <stdio.h>



int main () {
	char nombre[10];
	FILE *arch;
	FILE *imp;
	FILE *par;
        int tmp;
	int impares = 0;
 
	printf ("Introduzca el nombre del fichero\n");
	scanf ("%s", nombre);
   	arch = fopen (nombre, "r");
   	imp = fopen ("impares.txt", "w+");
   	par = fopen ("pares.txt", "w+");
	if (arch == NULL) {
		printf ("No se puede abrir el archivo\n");
	} else {
		while (!feof (arch)) {
			fscanf (arch, "%d\n", &tmp);
			if (tmp % 2 != 0) {
				imp == NULL ? printf("No se puede abrir el archivo impares\n") : fprintf (imp, "%d\n", tmp);
			} else {
				par == NULL ? printf("No se puede abrir el archivo pares\n") :  fprintf (par,"%d\n", tmp );
			}
		}
	 }			
}
