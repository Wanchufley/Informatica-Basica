#include <stdio.h>

int Numeros[20];
int temp;

void ordenar (int pos, int a[pos]) {
	for (int i=0;i<pos-1;i++) {
		for (int j=0;j<pos-1;j++) {
			if (a[j] > a[j+1]) {
				printf ("Actual: %d Siguiente: %d\n", a[j], a[j+1]);
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
}
void imprimir (int pos, int a[pos]) {
	for (int i=0;i<pos;i++){ 
		printf ("%d\t", Numeros[i]); 
	}
	printf ("\n");
}
void duplicados (int pos, int a[pos]) {
	for (int i=0;i<pos;i++) {
		for (int j=0;j<pos;j++) {
			if (a[j] < a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];	
			}				
		}
	}
}
int main() {
	FILE *arch1;
	FILE *arch2;
	int pos = 0;
	int buff1,buff2;
		
	for (int i=0;i<20;i++){ Numeros[i] = 0;	}
	arch1 = fopen ("archivo1.txt", "r");
	arch2 = fopen ("archivo2.txt", "r");
	if (arch1 != NULL) {
		while (!feof(arch1)) {
			fscanf (arch1, "%d", &buff1);
			Numeros[pos] = buff1;	
			pos++;
		}
		fclose(arch1);
		while (!feof(arch2)) {
			fscanf (arch2, "%d", &buff2);
			Numeros[pos] = buff2;
			pos++;
			}			
		fclose(arch2);
		for (int i=0;i<pos;i++){ printf ("%d\t", Numeros[i]); }
		printf ("\n");
	} else {
		printf ("No se pudo abrir uno de los archivos\n");	
	}
	ordenar (pos,Numeros);
	duplicados (pos,Numeros);
	imprimir (pos,Numeros);
}

