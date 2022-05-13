#include <stdio.h>
#include <stdlib.h>
int main()
{
 int num;
 FILE *fptr;
 // usa la ubicación apropiada si estás usando MacOS, Windows o Linux
 //fptr = fopen("C:\\programa.txt","w"); //Windows
 fptr = fopen
("E:\\Programing\\Programs\\C, C++\\archivo.txt","w");
 if(fptr == NULL)
 {
 printf("Error!");
 exit(1);
 }
printf("Ingresa un numero: ");
 scanf("%d",&num);
 fprintf(fptr,"%d",num);
 fclose(fptr);
 return 0;
}
