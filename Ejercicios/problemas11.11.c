#include <stdio.h>

int main() {
	FILE *arch1;
	FILE *arch2;
	int pos = 0;
	int buff1,buff2;
	int Numeros[20];
	int temp;
		
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
	for (int i=0;i<pos;i++) {
		for (int j=0;j<pos-1;j++) {
			if (Numeros[j] > Numeros[j+1]) {
				temp = Numeros[j+1];
				Numeros[j+1] = Numeros[j];
				Numeros[j] = temp;
			}
		}
	}	
	for (int i=0;i<pos;i++){ 
		if (Numeros[i] != Numeros[i-1]) {
			printf ("%d\t", Numeros[i]); 
		}
	}
	printf ("\n");
}
