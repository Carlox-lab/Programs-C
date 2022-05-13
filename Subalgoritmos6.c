#include <stdio.h>
void intercambiar(int *n1, int *n2);
int main()
{
 int num1 = 5, num2 = 10;
 intercambiar( &num1, &num2);// Pasar la dirección de num1 y num2
 printf("num1 = %d \n", num1);
 printf("num2 = %d \n", num2);
 return 0;
}
void intercambiar(int *n1, int *n2)
{
 int temp;
 temp = *n1;
 *n1 = *n2;
 *n2 = temp;
}