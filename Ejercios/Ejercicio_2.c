#include <stdio.h>

int main() {
   FILE *fp;
   fp = fopen("datos.txt", "w+");
   fprintf(fp, "Prueba de escribir cadena de texto a archivo\n");
   fclose(fp);
}






	

