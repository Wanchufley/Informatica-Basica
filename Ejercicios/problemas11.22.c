#include <stdio.h>

int size,sizer = 0;
int nums[100];
int res[100];

void inicio () {
	FILE *numeros;
	FILE *final;
	int buff,tmp;
	int count = 0;

	numeros = fopen ("numeros.txt", "r");
	final = fopen ("final.txt", "w+");
	if (numeros != NULL) {
		while (!feof(numeros)) {
			fscanf (numeros, "%d\n", &buff);			
			nums[size] = buff;
			size++;	
		}
	} else {
		printf ("No se puede abrir el archivo\n");
	}
	fclose(numeros);
	for (int i=0; i<size-1; i++) {
		for (int j=0;j<size-1;j++) {
			if (nums[j] > nums[j+1]){
				tmp = nums[j+1];
				nums[j+1] = nums[j];
				nums[j] = tmp;
			}		
		}
	}
	for (int i=0; i<size-1; i++) {
		if (nums[i] == nums[i+1] && nums[i] != res[sizer-1]) 
			count++;	
		if (count > 0) {
			res[sizer] = nums[i];
			sizer++;
			count = 0;
		}	
	}
	for (int i=0;i<sizer;i++) {
		fprintf (final,"%d\n", res[i]);
	}
	fclose(final);
}
int main () {
	inicio();
}
