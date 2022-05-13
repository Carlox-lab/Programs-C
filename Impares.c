//Impares
#include <stdio.h>
int main ()
{
    int x;
    
    //Pedir limite
    printf("Limit\n");
    scanf("%d" ,&x);
    printf("\n\n");
    //impresion
    while (x!=0)
    {
        if (x%2!=0)
        {
            printf("%d\n" ,x);
        }
        x=x-1;
    }
    return 0;
}