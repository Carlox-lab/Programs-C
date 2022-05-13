//Actividad llenar y mostrar una matriz 5x5 con números aleatorios.

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int array[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j]=0;
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j]= rand () %10 +1;
        }        
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d \t" ,array[i][j]);
        }
        printf("\n");
    }
    return 0;
}