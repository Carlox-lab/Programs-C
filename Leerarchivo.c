#include <stdio.h>
#include <stdlib.h>
int main() {
 int num;
 FILE *fptr;
 // "C:\\programa.txt","r" // windows
 if ((fptr =
fopen("E:\\Programing\\Programs\\C, C++\\archivo.txt","r")) == NULL){
 printf("Error al abrir el archivo");
 // El programa sale si el puntero del archivo devuelve NULL
 exit(1);
 }
 fscanf(fptr,"%d", &num);
 printf("Valor de n=%d \n", num);
 fclose(fptr);

 return 0;
}
