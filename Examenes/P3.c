#include <stdio.h>

typedef struct { 
	int mayor;
	int menor;
	int suma;
} datos_t;

datos_t valores (int N, int O[N]) {
	datos_t dat;
	dat.mayor = O[0];
	dat.menor = O[0];
	dat.suma = 0;
	for (int i=0;i<N;i++) {
		dat.suma += O[i];
		if (dat.mayor < O[i]) 
			dat.mayor = O[i];
		else if (dat.menor > O[i])
			dat.menor = O[i];
	}
	return dat;
}
int main () {
	datos_t res;
	int N = 8;
	int O[] = {5,10,15,6,7,8,9,12};
	res = valores(N,O);	
	printf ("Menor: %d\n", res.menor);
	printf ("Mayor: %d\n", res.mayor);
	printf ("Suma: %d\n", res.suma);
}
