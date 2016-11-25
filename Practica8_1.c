#include <stdio.h>

#define MAXIMO_NUMERO_LUGARES 2 
#define MAXIMO_NUMERO_FECHAS 5 

typedef struct { int dia; int mes; int year; } Fechas;
typedef struct { float temp; int preci; int velViento; } ObservacionMeteorologica; 

ObservacionMeteorologica ob[MAXIMO_NUMERO_LUGARES][MAXIMO_NUMERO_FECHAS]; 
Fechas f[MAXIMO_NUMERO_FECHAS];
char nombreLugares[2][15] = {"La Laguna","Los Cristianos"};
float tdif[MAXIMO_NUMERO_LUGARES];
float tmin[MAXIMO_NUMERO_LUGARES];
float tmax[MAXIMO_NUMERO_LUGARES];

int main () {
	for (int i=0;i<MAXIMO_NUMERO_FECHAS;i++){
		printf("Introduzca la fecha en formato DD/MM/YY:\n");
		scanf ("%d/%d/%d", &f[i].dia, &f[i].mes, &f[i].year);		
		for (int j=0;j<MAXIMO_NUMERO_LUGARES;j++) {
			printf("Introduzca los datos observados de %s en formato Temperatura Precipitacion y Velocidad del Viento separados por Espacio:\n", nombreLugares[j]);
			scanf("%f %d %d", &ob[j][i].temp, &ob[j][i].preci, &ob[j][i].velViento);
        	}
	}
 	for (int i=0;i<MAXIMO_NUMERO_LUGARES;i++) {
		int fmax = 0, fmin = 0;
		tmin[i] = ob[0][0].temp;
		tmax[i] = ob[0][0].temp;
		for (int j=0;j<MAXIMO_NUMERO_FECHAS;j++) {
			if (ob[i][j].temp > tmax[i]) {
				tmax[i] = ob[i][j].temp;	
				fmax = j;	
			}
			else if (ob[i][j].temp < tmin[i]) {
				tmin[i] = ob[i][j].temp;
				fmin = j;				
			}
		}
		printf("Lugar: %s \t Fecha: %d/%d/%d \t Maxima: %.1f\n", nombreLugares[i],f[fmax].dia,f[fmax].mes,f[fmax].year, tmax[i]);
		tdif[i] = tmax[i] - tmin[i];
	}
	float tmdif = 0; // Lugar Maxima Diferencia de Temperatura 
	int lmdf = 0; // Lugar Maxima Diferencia de Temperatura 
	for (int i=0; i<MAXIMO_NUMERO_LUGARES;i++) {
		if (tdif[i] > tmdif) {
			tmdif = tdif[i];
			lmdf = i;
		}
	}
	printf ("Lugar: %s \t Maxima: %.1f \t Minima: %.1f \t Diferencia de Temperatura: %.1f\n",nombreLugares[lmdf],tmax[lmdf],tmin[lmdf],tmdif);
}	
