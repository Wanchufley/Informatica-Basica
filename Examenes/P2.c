#include <stdio.h>

typedef struct {
	int codigo;
	char nombre[20];
	char direccion[50];
} proveedor_t;

typedef struct { 
	char descripcion;
	int cantidad;
	float precio;
	proveedor_t prov;
} datos_t;

datos_t dato[5];

int main () {


}
