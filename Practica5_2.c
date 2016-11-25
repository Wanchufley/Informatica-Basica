#include <stdio.h>

typedef struct {
    int num_cuenta;
    float saldo;
} TCuenta;

typedef struct {
    char nombre[20];
    TCuenta cuenta[2];
} TDatos;

    TDatos cliente[3];
    
int main() {
    printf("Nombre de la Persona %d: ", 1);
    scanf("%[^\n]%*c", cliente[0].nombre);
    printf("Introduzca 4 digitos de la Cuenta %d: ", 1);
    scanf("%d", &cliente[0].cuenta[0].num_cuenta);
    printf("Introduzca el saldo de la Cuenta %d: ", 1);
    scanf("%f", &cliente[0].cuenta[0].saldo);
    printf("Introduzca 4 digitos de la Cuenta %d: ", 2);
    scanf("%d", &cliente[0].cuenta[1].num_cuenta);
    printf("Introduzca el saldo de la Cuenta %d: ", 2);
    scanf("%f", &cliente[0].cuenta[1].saldo);
    getchar();
    printf("Nombre de la Persona %d: ", 2);
    scanf("%[^\n]%*c", cliente[1].nombre);
    printf("Introduzca 4 digitos de la Cuenta %d: ", 1);
    scanf("%d", &cliente[1].cuenta[0].num_cuenta);
    printf("Introduzca el saldo de la Cuenta %d: ", 1);
    scanf("%f", &cliente[1].cuenta[0].saldo);
    printf("Introduzca 4 digitos de la Cuenta %d: ", 2);
    scanf("%d", &cliente[1].cuenta[1].num_cuenta);
    printf("Introduzca el saldo de la Cuenta %d: ", 2);
    scanf("%f", &cliente[1].cuenta[1].saldo);
    getchar();
    printf("Nombre de la Persona %d: ", 3);
    scanf("%[^\n]%*c", cliente[2].nombre);
    printf("Introduzca 4 digitos de la Cuenta %d: ", 1);
    scanf("%d", &cliente[2].cuenta[0].num_cuenta);
    printf("Introduzca el saldo de la Cuenta %d: ", 1);
    scanf("%f", &cliente[2].cuenta[0].saldo);
    printf("Introduzca 4 digitos de la Cuenta %d: ", 2);
    scanf("%d", &cliente[2].cuenta[1].num_cuenta);
    printf("Introduzca el saldo de la Cuenta %d: ", 2);
    scanf("%f", &cliente[2].cuenta[1].saldo);
    getchar();
    
    printf("Nombre:%s \tCuenta 1:%d \tCuenta 2:%d \tBalance Total:%.2f\n", cliente[0].nombre, cliente[0].cuenta[0].num_cuenta, cliente[0].cuenta[1].num_cuenta, cliente[0].cuenta[0].saldo + cliente[0].cuenta[1].saldo);
    printf("Nombre:%s \tCuenta 1:%d \tCuenta 2:%d \tBalance Total:%.2f\n", cliente[1].nombre, cliente[1].cuenta[0].num_cuenta, cliente[1].cuenta[1].num_cuenta, cliente[1].cuenta[0].saldo + cliente[1].cuenta[1].saldo);
    printf("Nombre:%s \tCuenta 1:%d \tCuenta 2:%d \tBalance Total:%.2f\n", cliente[2].nombre, cliente[2].cuenta[0].num_cuenta, cliente[2].cuenta[1].num_cuenta, cliente[2].cuenta[0].saldo + cliente[2].cuenta[1].saldo);
}

