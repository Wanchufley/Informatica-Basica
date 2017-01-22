#include <stdio.h>

int size = 0,sizer = 0;
int nums[100];
int res[100];

void swap (int *num1, int *num2) {
	int temp = *num2;
	*num2 = *num1;
	*num1 = temp;	
}

void inicio () {
	FILE *numeros;
	FILE *final;
	int buff,tmp;

	numeros = fopen ("numeros.txt", "r");
	final = fopen ("final.txt", "w+");
	if (numeros != NULL) {
		while (!feof(numeros)) {
			fscanf (numeros, "%d\n", &buff);			
			nums[size++] = buff;
		}
	} else {
		printf ("No se puede abrir el archivo\n");
	} fclose(numeros);
	for (int i=0; i<size; i++) {
		for (int j=0;j<size;j++) {
			nums[i] < nums[j] ? swap (&nums[i], &nums[j]) : (0); 
		}
	}
	for (int i=0; i<size; i++) {
		nums[i] != nums[i+1] && nums[i] != res[sizer] ? res[sizer++] = nums[i] : (0);
	}
	for (int i=0;i<sizer;i++) {
		fprintf (final,"%d\n", res[i]);
	} fclose(final);
}

int main () {
	inicio();
}
