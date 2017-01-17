#include <stdio.h>
#include <string.h>

// "%[^\n]%*c Leer espacios en Blanco

typedef struct {
        char nombre[10];
        char apellidos[30];
        int edad;
    } TDatos;
    
    TDatos cliente[5];
    
int main()
{
    printf("Nombre de la Persona %d: ", 1);
    scanf("%[^\n]%*c",cliente[0].nombre);
    printf("Apellidos de la Persona %d: ",1);
    scanf("%[^\n]%*c",cliente[0].apellidos);
    printf("Edad de la Persona %d: ",1);
    scanf("\n%d", &cliente[0].edad);
    getchar();
    printf("Nombre de la Persona %d: ", 2);
    scanf("%[^\n]%*c",cliente[1].nombre);
    printf("Apellidos de la Persona %d: ",2);
    scanf("%[^\n]%*c",cliente[1].apellidos);
    printf("Edad de la Persona %d: ",2);
    scanf("\n%d", &cliente[1].edad);
    getchar();
    printf("Nombre de la Persona %d: ", 3);
    scanf("%[^\n]%*c",cliente[2].nombre);
    printf("Apellidos de la Persona %d: ",3);
    scanf("%[^\n]%*c",cliente[2].apellidos);
    printf("Edad de la Persona %d: ",3);
    scanf("\n%d", &cliente[2].edad);
    getchar();
    printf("Nombre de la Persona %d: ", 4);
    scanf("%[^\n]%*c",cliente[3].nombre);
    printf("Apellidos de la Persona %d: ",4);
    scanf("%[^\n]%*c",cliente[3].apellidos);
    printf("Edad de la Persona %d: ",4);
    scanf("\n%d", &cliente[3].edad);
    getchar();
    printf("Nombre de la Persona %d: ", 5);
    scanf("%[^\n]%*c",cliente[4].nombre);
    printf("Apellidos de la Persona %d: ",5);
    scanf("%[^\n]%*c",cliente[4].apellidos);
    printf("Edad de la Persona %d: ",5);
    scanf("\n%d", &cliente[4].edad);
    getchar();
    
    if(cliente[0].edad >= 18 && cliente[0].edad <= 22){
        printf("Nombre:%s \tApellidos:%s \tEdad:%d\n", cliente[0].nombre,cliente[0].apellidos, cliente[0].edad);
    }
    if(cliente[1].edad >= 18 && cliente[1].edad <= 22){
        printf("Nombre:%s \tApellidos:%s \tEdad:%d\n", cliente[1].nombre,cliente[1].apellidos, cliente[1].edad);
    }
    if(cliente[2].edad >= 18 && cliente[2].edad <= 22){
        printf("Nombre:%s \tApellidos:%s \tEdad:%d\n", cliente[2].nombre,cliente[2].apellidos, cliente[2].edad);
    }
    if(cliente[3].edad >= 18 && cliente[3].edad <= 22){
        printf("Nombre:%s \tApellidos:%s \tEdad:%d\n", cliente[3].nombre,cliente[3].apellidos, cliente[3].edad);
    }
    if(cliente[4].edad >= 18 && cliente[4].edad <= 22){
        printf("Nombre:%s \tApellidos:%s \tEdad:%d\n", cliente[4].nombre,cliente[4].apellidos, cliente[4].edad);
    }
}

