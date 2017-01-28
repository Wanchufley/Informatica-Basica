#include <stdio.h>

int fil,col;

void pedirDimensiones () {
	printf ("Introduzca las filas y columnas de la matriz ej: 2x2: ");
	scanf ("%dx%d", &fil, &col);
}

void introValores (int fil, int col, int M[][col]) {
	for (int i=0;i<fil;i++) 
		for (int j=0;j<col;j++) {
			printf ("Introduzca el Valor Para el elemento %d:%d ", i+1,j+1);
			scanf ("%d", &M[i][j]);
		} 
}

void imprimirMatriz (int fil, int col, int M[][col]) {
	for (int i=0;i<fil;i++) { 
		printf ("\n");
		for (int j=0;j<col;j++) {
			printf ("%d\t", M[i][j]);
		} 
	}
	printf ("\n");
}

int main () {
	pedirDimensiones();
	int M1[fil][col];
	introValores (fil,col,M1);	
	imprimirMatriz(fil,col,M1);	
}



