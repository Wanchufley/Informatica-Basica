// Escribir una funcion para concatenar dos archivos del mismo tipo.
#include <stdio.h>

int main(){
  FILE *file1;
  FILE *file2;
  FILE *finalfile;
  char a;
  char b;

  file1 = fopen ("impar.txt", "r");
  file2 = fopen ("par.txt", "r");
  finalfile = fopen ("parimpar.txt", "w+");
  while (!feof(file1)){
    a = fgetc(file1);
    fputc(a, finalfile);
  }fclose(file1);
  while (!feof(file2)){
    b = fgetc(file2);
    fputc(b, finalfile);
  }fclose(file2);
}
