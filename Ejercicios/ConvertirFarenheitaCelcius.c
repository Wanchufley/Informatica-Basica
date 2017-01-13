#include <stdio.h>

void convert () {
	// C = (F - 32) / 1.8
	int tempf,tempc;
	printf ("Introduzca temperatura en farenheit\n");
	scanf ("%d", &tempf);	
	tempc = (tempf - 32)/1.8;	
	printf ("La temperatura en Celsius es %d\n", tempc);
}

int main () {
	convert();	
}
