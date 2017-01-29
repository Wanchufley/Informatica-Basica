#include <stdio.h> 

int main () {
	int n,m,fila;
	float maxF=0,maxT=0;
	printf ("Introduzca la dimension de la matriz\n");
	scanf ("%dx%d", &n, &m);
	int mat[n][m];
	//Leer Matriz
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++){
			printf ("Introduzca el valor del elemento %d:%d de la matriz: ", i+1,j+1);
			scanf ("%d", &mat[i][j]); 
		}
	}
	//Imprimir Matriz
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++){
			printf ("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	//Calcular Media
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++){
			maxF += mat[i][j];
		}
		if (maxF > maxT) {
			maxT = maxF;
			fila = i;
		}
		maxF = 0;
	}
	printf ("La media maxima es %.2f en la fila %d\n", maxT/n, fila);
}


