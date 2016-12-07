#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void leerDimensiones (int *x, int *y) {
	printf("Introduzca el tamaño de la Matriz ej: 2x2\n");
	scanf("%dx%d", x, y);
}
void llenarMatriz (int x, int y,int M[x][y]) {
	for (int i = 0;i<x;i++){
		for (int j = 0;j<y;j++) {
			M[i][j] = rand() % 10;			
		}
	}
}
void introDatos (int x, int y,int M[x][y]) {
	for (int i = 0;i<x;i++){
		for (int j = 0;j<y;j++) {
			printf("Introduzca el numero para la posicion %d:%d de la Matriz\n",i+1,j+1);			
			scanf ("%d", &M[i][j]);
		}
	}
}
void imprimirMatriz (int x, int y,int M[x][y]) {
	for (int i = 0;i<x;i++){
		for (int j = 0;j<y;j++) {
			printf("%d ", M[i][j]);
		}
	printf("\n");
	}
printf("\n");
}
void sumarMatriz (int x1,int y1, int Ma[x1][y1],int x2, int y2,int Mb[x2][y2]){
	if (x1 == x2 && y1 == y2) {
		int RES[x1][y1];
        	for (int i=0; i<x1; i++) {
                	for (int j=0;j<y1; j++) {
                        	RES[i][j] = Ma[i][j] + Mb[i][j];
	                        printf("%d+%d ", Ma[i][j], Mb[i][j]);
    
                	}
			printf("\n");
		}
		printf("\n");
	imprimirMatriz (x1,y1,RES);
	}
	else {
		printf("Las matrices tienen que ser de la misma dimension para realizar la suma\n");
	}
	printf("\n");
}	
void minimaDiagonal (int x, int y, int M[x][y]){
	int min = M[0][y-1];
	if (x == y) {
		for (int i=0;i<x;i++) {
			if (M[i][y-i-1] < min) {
				min = M[i][y-i-1];
			}
		}
		printf("El valor minimo de la diagonal secunadaria es: %d\n", min);
		printf("\n");
	}
	else {
	printf("Matriz no es cuadrada\n");
	}
}
void multiplicarMatriz (int x1,int y1, int Ma[x1][y1],int x2, int y2,int Mb[x2][y2]){
	int RES[x1][y2];
	if (y1 == x2) {
		for (int i=0; i<x1; i++) {
               		for (int j=0;j<y2; j++) {
                       		RES[i][j] = 0; 
			}
	        }
		for (int i=0;i<x1;i++) {
			for (int j=0;j<y2;j++) {
				for (int k=0;k<y1;k++) {
					RES[i][j] += Ma[i][k] * Mb[k][j];
				}
			}
		}
	imprimirMatriz(x1,y2,RES);
	}
	else {
		printf("No se pueden multiplicar\n");
	}
}
void opciones (){
	int a,b,c,d;
	leerDimensiones(&a,&b);
 	int M1[a][b];
	leerDimensiones(&c,&d);
	int M2[c][d];	
	printf("Introduzca los numeros de la Matriz 1\n");
	introDatos(a,b,M1);
	printf("Introduzca los numeros de la Matriz 2\n");
	introDatos(c,d,M2);
//	llenarMatriz(a,b,M1); 	
//	llenarMatriz(c,d,M2); 	
	int w; int z;
	INICIO:	
	do {
		printf ("Seleccione una opcion\n");		
		printf ("1 - Imprimir Matriz\n");
		printf ("2 - Sumar Matrices\n");
		printf ("3 - Minimo de la Diagonal Secundaria de las Matrices\n");
		printf ("4 - Multiplicar Matrices\n");
		printf ("5 - Salir\n");
		scanf("%d", &z);
		switch (z) {
			case 1:
				do {
					printf("1 - Imprimir Matriz 1\n");
					printf("2 - Imprimir Matriz 2\n");	
					printf("3 - Imprimir las 2 Matrices\n");
					printf("4 - Ir Atras\n");
					scanf ("%d", &w);	
					switch (w) {
						case 1:
							imprimirMatriz(a,b,M1);
							break;
						case 2:
							imprimirMatriz(c,d,M2);
							break;
						case 3:
							imprimirMatriz(a,b,M1);
							imprimirMatriz(c,d,M2);
							break;
						case 4:
							z = 4;
							break;
						default:
							printf ("Opcion no implementada\n");
							break;
					} 
				} while (z != 4);
				goto INICIO;
			break;
			case 2:
				sumarMatriz(a,b,M1,c,d,M2);
				break;
			case 3:
				do {
					printf("1 - Imprimir Minimo De la Diagonal Secundaria de la Matriz 1\n");
					printf("2 - Imprimir Minimo De la Diagonal Secundaria de la Matriz 2\n");	
					printf("3  - Imprimir Minimo de la Diagonal Secundaria de las 2 Matrices\n");
					printf("4 - Ir Atras\n");
					scanf ("%d", &w);	
						switch (w){
							case 1:	
			 					minimaDiagonal(a,b,M1);
								break;
							case 2:
			 					minimaDiagonal(c,d,M2);
								break;
							case 3: 
								printf("Matriz 1\n");
								minimaDiagonal(a,b,M1);
								printf("Matriz 2\n");
							 	minimaDiagonal(c,d,M2);
								break;
							case 4:
								w = 4;
								break;
							default:
								printf("Opcion no implementada\n");
								break;
						}
				}while (w != 4);
				goto INICIO;
				break;
			case 4:
				multiplicarMatriz(a,b,M1,c,d,M2);
				break;
			case 5:
				break;
			default:
				printf("Opcion no Implementada\n");
				break;
		}
	}while (z != 5);
}
int main () {
	srand(time(NULL));
	opciones();
}
