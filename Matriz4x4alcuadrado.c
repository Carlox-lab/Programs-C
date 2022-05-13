//Por Carlos Juárez

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int array[4][4];
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j]= rand () %10 +1;
        }        
    }

    printf("\n\nMatriz\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d \t" ,array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j]=(array[i][j])*(array[i][j]);
        }
    }

    printf("\n\nMatriz al cuadrado\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d \t" ,array[i][j]);
        }
        printf("\n");
    }

    return 0;
}