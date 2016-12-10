#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 50
#define M 50

void dimensionmatriz(int *fil,int *col){
    printf ("Introducir dimension de matriz\n");
    scanf("%dx%d",fil,col);
    if (*fil>N || *col > M) {
        printf("Tamaño no admitido\n");
    }
}
void pedirmatriz(int fil, int col, int matx[fil][col]){
     for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            printf ("Introducir el parametro %d:%d de la matriz\t", i,j);    
            scanf ("%d",&matx[i][j]);
        }
    }
}   
void llenarmatriz(int fil, int col, int matx[fil][col]){
    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            matx[i][j] = rand() % 10;
        }
    }
}
void mostrarmatriz(int fil, int col, int matx[fil][col]){
    printf ("\n");
    for (int i=0;i<fil;i++){
        for (int j=0;j<col;j++){
            printf("%d\t", matx[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void sumamatriz(int fil1, int col1, int matx1[fil1][col1], int fil2, int col2, int matx2[fil2][col2]) {
    int Res[fil1][col1];
        if (fil1==fil2 && col1==col2){
            for (int i=0; i<fil1; i++) {
                for (int j=0;j<col1;j++){
                    Res[i][j] = matx1[i][j] + matx2[i][j];
                }
                 printf("\n");
            }
            mostrarmatriz(fil1,col1,Res);
        } else {
            printf("No se pueden sumar porque no son de igual tamaño");
            }
        }
void diagonalsecundaria(int fil, int col, int matx[fil][col]) {
    int min = matx[0][col-1];
    printf("\n");
    for (int i=0;i<fil;i++) {
            if (matx[i][col-1-i] < min) {
                min = matx[i][col-1-i];
            }
    }
    printf("El valor minimo de la diagonal secundaria es: %d\n\n", min);
}
void multiplicacion (int fil1,int col1,int fil2,int col2,int matx1[fil1][col1],int matx2[fil2][col2]){
    int Resmul[fil1][col1];
    for (int i=0;i<fil1;i++){
        for (int j=0;j<col1;j++){
            Resmul[i][j] = 0;
        }
    }
    if (col1 == fil2){
        for(int i=0;i<fil1;i++){
            for(int j=0;j<col2;j++){
                for(int k=0;k<col1;k++){
                    Resmul[i][j] += matx1[i][k] * matx2[k][j];
                }
            }
        }
    mostrarmatriz(fil1,col2,Resmul);
    }
}
void opciones () {
    srand(time(NULL));
    int fil1,col1,fil2,col2;
    dimensionmatriz(&fil1,&col1);
    int matx1[fil1][col1];
//  pedirmatriz(fil1,col1,matx1); // Pedir matriz a usuario 
    llenarmatriz(fil1,col1,matx1);// llenar matriz con valores aleatorios entre 0 - 9
    dimensionmatriz(&fil2,&col2);
    int matx2[fil2][col2];
//  pedirmatriz(fil2,col2,matx2);
    llenarmatriz(fil2,col2,matx2);
    int opcion=0;
    do {
        printf ("0 - Salir\n");
        printf ("1 - Imprimir Matriz 1\n");
        printf ("2 - Imprimir Matriz 2\n");
        printf ("3 - Imprimir Suma de la Matrices\n");
        printf ("4 - Imprimir Diagonal de la Matriz 1\n");
        printf ("5 - Imprimir Diagonal de la Matriz 2\n");
        printf ("6 - Multiplicacion de las matrices \n");
        scanf ("%d", &opcion);
            switch(opcion){
                case 0:
                    opcion = 0;
                    break;
                case 1:
                    mostrarmatriz(fil1,col1,matx1);
                    break;
                case 2:
                    mostrarmatriz(fil2,col2,matx2);
                    break;
                case 3:
                    sumamatriz(fil1,col1,matx1,fil2,col2,matx2);
                    break;
                case 4:
                    diagonalsecundaria(fil1,col1,matx1);
                    break;
                case 5:
                    diagonalsecundaria(fil2,col2,matx2);
                    break;
                case 6:
                    multiplicacion(fil1,col1,fil2,col2,matx1,matx2);
                    break;
                default:
                    printf ("Opcion no definida\n");
                    break;
        }
    } while (opcion!=0);
}

int main (){
    opciones();
}

