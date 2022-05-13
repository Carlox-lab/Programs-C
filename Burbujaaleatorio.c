//Array aleatorio ordenado con método de la burbuja

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n;

    printf("Tamano del array: \n");
    scanf("%d" ,&n);

    int array[n];

    //Llenado al azar

    for ( int i = 0; i < n; i++)
    {
        array[i] = rand () % 10+1;
    }

    //otro arreglo igual

    int array_ord[n]; 

    for ( int i = 0; i < n; i++)
    {
        array_ord[i] = array[i];
    }

    //Método de la burbuja

    int cambio, temp;

    temp=0;

    do
    {
        cambio=0;
        for (int i = 0; i < n-1; i++)
        {
            if (array_ord[i]>array_ord[i+1])
            {
                temp=array_ord[i];
                array_ord[i]=array_ord[i+1];
                array_ord[i+1]=temp;
                cambio=1;
            }
        }
        
    } while (cambio==1);
    

    printf("Ordenado:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t" ,array_ord[i]);
    }

    printf("\nDesordenado:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t" ,array[i]);
    }

    return 0;
}