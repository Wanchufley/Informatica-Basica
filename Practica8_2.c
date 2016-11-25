#include <stdio.h>


#define MAXIMO_NUMERO_LUGARES 10
#define MAXIMO_NUMERO_FECHAS 50

typedef struct { int dia; int mes; int year; } Fechas;
typedef struct { float temp; int preci; int velViento; } ObservacionMeteorologica; 

ObservacionMeteorologica ob[MAXIMO_NUMERO_LUGARES][MAXIMO_NUMERO_FECHAS]; 
Fechas f[MAXIMO_NUMERO_FECHAS];
char nombreLugares[MAXIMO_NUMERO_LUGARES][30];
float tdif[MAXIMO_NUMERO_LUGARES];
float tmin[MAXIMO_NUMERO_LUGARES];
float tmax[MAXIMO_NUMERO_LUGARES];
int seguir;
int numeroLugares;
int numeroFechas;


void pedirLugaresyFechas () {
	do {
		printf("Introduzca el numero de lugares menor o igual a %d:\n", MAXIMO_NUMERO_LUGARES);
		scanf ("%d", &numeroLugares);
		getchar();
	}
	while (numeroLugares == 0 || numeroLugares > MAXIMO_NUMERO_LUGARES); 
	
	for (int i=0; i<numeroLugares;i++) {
		printf("Introduzca el nombre del lugar %d:\n", i+1);
		scanf ("%[^\n]", nombreLugares[i]);
		getchar();
	}

	do {	
		printf("Introduzca el numero de fechas que desea almacenar por cada ubicacion, menor o igual a %d:\n", MAXIMO_NUMERO_FECHAS);
		scanf ("%d", &numeroFechas);
		getchar();
	} while (numeroFechas == 0 || numeroFechas > MAXIMO_NUMERO_FECHAS);
}
void  pedirFechayObservaciones() {
	int i=0;
	do {
		printf("Introduzca la fecha en formato DD/MM/YY:\n");
		scanf ("%d/%d/%d", &f[i].dia, &f[i].mes, &f[i].year);		
			for (int j=0;j<numeroLugares;j++) {
				printf("Introduzca los datos observados de %s en formato Temperatura Precipitacion y Velocidad del Viento separados por Espacio:\n", nombreLugares[j]);
				scanf("%f %d %d", &ob[j][i].temp, &ob[j][i].preci, &ob[j][i].velViento);
        		}
		i++;
		if (i < numeroFechas) {
			printf("Introduzca 0 si desea continuar o 1 para terminar la aplicacion y ver los datos:\n");
			scanf ("%d", &seguir);
		}
	} while (i < numeroFechas && seguir == 0); 
}
void  imprimirTodo() {
	for (int i=0;i<numeroFechas;i++) {
		printf("\nDatos obervados en fecha: %d/%d/%d\n",f[i].dia,f[i].mes,f[i].year);
		for (int j=0;j<numeroLugares;j++) {
			printf("Lugar: %s \t Temperatura: %.1f \t Precipitacion: %d \t Velocidad del Viento: %d\n", nombreLugares[j],ob[j][i].temp,ob[j][i].preci,ob[j][i].velViento);
		}
	}	
}
void datosMes() {
	do {
		int mes;
		printf ("Introduzca el numero del mes del cual desea ver los datos:\n");
		scanf("%d", &mes);
		if (mes > 0 || mes <= 12) {
			for (int i=0;i<numeroLugares;i++) {
				for (int j=0;j<numeroFechas;j++) {
					if (f[i].mes == mes) {
						printf("Lugar: %s \t Fecha: %d/%d/%d \t Temperatura: %.1f \t Precipitacion: %d \t Velocidad del Viento: %d\n", nombreLugares[i],f[j].dia,f[j].mes,f[j].year,ob[i][j].temp,ob[i][j].preci,ob[i][j].velViento);
					}
				}
			}
		seguir = 1;
		}
		else {
			printf("Mes invalido, valor tiene que ser mayor que 0 y menor o igual a 12");		
			seguir = 0;
		}
	} while (seguir == 0); 
}
void datosRangoMes() {
	int mesi,mesf,pmax,lu,fe;
	pmax = -1;
	do {		
		printf("Introduzca rango de Meses separado por espacio\n");
		scanf("%d %d", &mesi, &mesf);
			if (mesi > 0 && mesi <= mesf && mesf <= 12) {
				for (mesi;mesi<=mesf;mesi++) {
					for (int i=0; i<numeroLugares;i++) {
						for (int j=0;j<numeroFechas;j++) {
							if (f[j].mes == mesi && ob[i][j].preci > pmax) {
								pmax = ob[i][j].preci;	
								lu = i;
								fe = j;
							}	
						}
					}
				}
				if (pmax != -1) {
					printf("Lugar: %s \t Fecha: %d/%d/%d \t Precipitacion Maxima: %d\n",nombreLugares[lu],f[fe].dia,f[fe].mes,f[fe].year,pmax);
					seguir = 1;
				}
				else {
					printf ("No existen datos en el rango de fecha solicitado\n");
					seguir == 0;
				}
			}
			else { 
				printf("Rango de Mes invalido\n");	
				seguir = 0;
			}
	} while (seguir == 0);	
}

int main () {
	pedirLugaresyFechas();
	pedirFechayObservaciones();
	int opcion;
	do {
		printf("\nSeleccione que desea hacer entre las siguientes opciones:\n\n");
		printf("1: Imprimir todos los datos\n");
		printf("2: Imprimir datos de mes especifico\n");
		printf("3: Imprimir datos de la ubicacion con mayor precipitacion en rango de meses\n");
		printf("4: Salir del programa\n");
		scanf("%d", &opcion);
			switch(opcion) {
				case 1: 
					imprimirTodo();
					break;
				case 2:
					datosMes();
					break;
				case 3:
					datosRangoMes();
					break;
				case 4:					
					opcion = 4;
					break;
				default:
					printf("%d Opcion invalida", opcion);
		}
	} while (opcion != 4); 
}	

