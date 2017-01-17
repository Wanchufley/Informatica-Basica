#include <stdio.h>
#define CL 1 
#define CU 3
#define BMIN 140
#define CMIN 20 
typedef struct {
	int ncuenta;
	float saldo;
} DCuenta;

typedef struct {
	char nombre[20];
	DCuenta c[CU];
} DCliente;	

DCliente dc[CL];

int main () {	
	int i=0;
	do { 
		printf("Nombre de Cliente %d: ", i+1);
		scanf("%s", dc[i].nombre);
		for (int j=0; j<CU;j++) {
			printf("Introduzca el numero de la Cuenta %d: ", j+1);
			scanf("%d",&dc[i].c[j].ncuenta);
			printf("Introduzca el saldo de la Cuenta %d: ", j+1); 
			scanf("%f", &dc[i].c[j].saldo);
		} 
		i++;
	} while (i > 0 && i < CL);

	for(int i=0;i<CL;i++) { 
		int j = 0;
		int estado = 0;
		float balance = 0; 
		while (j<CU){ balance += dc[i].c[j].saldo; j++; }  
		for (j=0;j<CU;j++){ (dc[i].c[j].saldo < CMIN || balance < BMIN) ? (estado = 1) : (0); }
		if (estado) { 
			printf("Nombre: %s \t", dc[i].nombre); 
			for (j=0;j<CU;j++){ (dc[i].c[j].saldo < CMIN) ? printf("Cuenta %d: %.2f \t", dc[i].c[j].ncuenta, dc[i].c[j].saldo) : (0); } 
			(balance < BMIN) ? printf ("Balance: %.2f\n", balance) : printf("\n"); 
		}
	}	
}	
