#include <stdio.h>

#define FIL 4
#define COL 4

int M1[FIL][COL];
int M2[FIL][COL];
int RES[FIL][COL];

void leerMatriz () {
	for (int i=0;i<FIL;i++) {
		for (int j=0;j<COL;j++) {
			printf("Introduzca el numero correspondiente a %d:%d de la matriz M1:", i+1,j+1);
			scanf("%d", &M1[i][j]);
			getchar();
		}
	}	
	for (int i=0;i<FIL;i++) {
		for (int j=0;j<COL;j++) {
			printf("Introduzca el numero correspondiente a %d:%d de la matriz M2:", i+1,j+1);
			scanf("%d", &M2[i][j]);
			getchar();
		}
	}
}

void sumaMatriz (int A[FIL][COL], int B[FIL][COL]) {
	printf("\nSumar Matrices:\n");
	for (int i = 0; i < FIL; i++) {
		for (int j=0;j < COL; j++) {
			RES[i][j] = A[i][j] + B[i][j];
			printf("%d+%d ", A[i][j], B[i][j]);
	
		}
		printf("\t\t");
		for (int j=0;j < COL; j++){ 
			printf("%2d ", RES[i][j]);	
		}
		printf("\n");
	}
}

void restarMatriz (int A[FIL][COL], int B[FIL][COL]) {
	printf("\nRestar Matrices:\n");
	for (int i = 0; i < FIL; i++) {
		for (int j=0;j < COL; j++) {
			RES[i][j] = A[i][j] - B[i][j];
			printf("%d-%d ", A[i][j], B[i][j]);
	
		}
		printf("\t\t");
		for (int j=0;j < COL; j++){ 
			printf("%2d ", RES[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
} 

void traspuestaMatriz (int A[FIL][COL]) {
	printf("Traspuesta de la Matriz:\n");
	int tmp = 0;
	for (int i = 0; i < FIL; i++) {
		for (int j = 0;j < COL; j++) {
			RES[i][j] = A[j][i];
			printf("%2d ", A[i][j]);	
		}
		printf("\t\t");
		for (int j = 0;j < COL; j++) {
			printf("%2d ", RES[i][j]);				
		}
	printf("\n");
	}
}

int main () {
	leerMatriz();	
	sumaMatriz(M1,M2);
	restarMatriz(M1,M2);
	traspuestaMatriz(M1);
	traspuestaMatriz(M2);
}

