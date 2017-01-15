#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int size,sizer = 0;
int nums[100];
int res[100];

void numAleatorios() {
	FILE *fp;
	int buff;
	
	fp = fopen ("numeros.txt", "w+");
	for (int i=0;i<100;i++) {
		fprintf (fp, "%d\n", rand() % 101);
	}
	fclose(fp);
}
void leerNumeros () {
	FILE *fp;
	int buff;
	fp = fopen ("numeros.txt", "r");
	if (fp != NULL) {
		while (!feof(fp)) {
			fscanf (fp, "%d\n", &buff);			
			nums[size] = buff;
			size++;	
		}
	} else {
		printf ("No se puede abrir el archivo\n");
	}
	fclose(fp);
}
void ordenar () {
	int tmp;
	for (int i=0; i<size-1; i++) {
		for (int j=0;j<size-1;j++) {
			if (nums[j] > nums[j+1]){
				tmp = nums[j+1];
				nums[j+1] = nums[j];
				nums[j] = tmp;
			}		
		}
	}
}
void duplicados () {
	int count = 0;
	for (int i=0; i<size-1; i++) {
		if (nums[i] == nums[i+1] && nums[i] != res[sizer-1]) {
			count++;	
		}	
		if (count > 0) {
			res[sizer] = nums[i];
			sizer++;
			count = 0;
		}	
	}
}
void guardar () {
	FILE *fp;
	fp = fopen ("final.txt", "w+");
	for (int i=0;i<sizer;i++) {
		fprintf (fp,"%d\n", res[i]);
	}
	fclose(fp);
}
int main () {
	srand(time(NULL));
	numAleatorios();
	leerNumeros();
	ordenar();
	duplicados();
	guardar();
}
