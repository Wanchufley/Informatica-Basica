#include <stdio.h>
#define PERSONAS 6 
typedef struct {
	char nombre[20];
	char apellidos[20];
	int edad;
} dPersona;
dPersona persona [PERSONAS];
int main() {
	for (int i=0;i<PERSONAS;i++) {
		printf("Introduzca el nombre de la persona %d: ",i+1);
  		scanf("%[^\n]*%c", persona[i].nombre);
		getchar();
		printf("Introduzca los apellidos de la persona %d: ", i+1);
		scanf("%[^\n]*%c", persona[i].apellidos);
		getchar();
		printf("Introduzca la edad de la persona %d: ", i+1);
		scanf("%d", &persona[i].edad);
		getchar();
	}
	for (int i=0;i<PERSONAS;i++) {
		if (persona[i].edad > 0 && persona[i].edad <= 6){printf("%s %s tiene %d años, esta en su Infancia\n", persona[i].nombre, persona[i].apellidos, persona[i].edad);}			
		else if (persona[i].edad >= 7 && persona[i].edad <= 11){ printf("%s %s tiene %d años, esta en su Niñez\n", persona[i].nombre, persona[i].apellidos, persona[i].edad);}
		else if (persona[i].edad >= 12 && persona[i].edad <= 16){ printf("%s %s tiene %d años, esta en su Adolescencia\n", persona[i].nombre, persona[i].apellidos, persona[i].edad);}
		else if (persona[i].edad >= 17 && persona[i].edad <= 25){ printf("%s %s tiene %d años, esta en su Juventud\n", persona[i].nombre, persona[i].apellidos, persona[i].edad);}
		else if (persona[i].edad >= 26 && persona[i].edad <= 65){ printf("%s %s tiene %d años, esta en su Adultez\n", persona[i].nombre, persona[i].apellidos, persona[i].edad);}
		else if (persona[i].edad > 65){printf("%s %s tiene %d años, esta en su Ancienidad\n", persona[i].nombre, persona[i].apellidos, persona[i].edad);}
	}
}
