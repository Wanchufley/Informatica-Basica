// Encontrar los 3 minimos y 3 maximos e imprimir
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
	srand(time(NULL));
	FILE *fp;
	int buff;
	int max1,max2,max3=0;
	int min1,min2,min3=1000;
	
	fp = fopen ("datos.txt", "w+");
	if (fp != NULL) {
		for (int i=0;i<=1000;i++) {
			fprintf (fp, "%d\n", rand() % 1000 );
		}
	}
	fclose(fp);
	fp = fopen ("datos.txt", "r");
	if (fp != NULL) {
		while (!feof(fp)) {
			fscanf (fp, "%d\n", &buff);
			if (buff >= max1) {
				max1 = buff;
			} else if (buff >= max2) {
				max2 = buff;
			} else if (buff >= max3) {
				max3 = buff;
			}
			if (buff <= min1) {
				min1 = buff;
			} else if (buff <= min2) {	
				min2 = buff;
			} else if (buff <= min3) {
				min3 = buff;
			}
		} 
		printf ("Los valores minimos son %d %d %d y los maximos %d %d %d\n",min1,min2,min3,max1,max2,max3);
	}
	fclose(fp);
}

