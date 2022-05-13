//Búsqueda Binaria

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n=10;
    int nums[n];
    int encontrado, buscado, minima, temp;

    for (int i = 0; i < n; i++)
    {
        nums[i]= rand () %10;
    }

    printf("\nVector: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t" ,nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        minima=i;
        for (int j = i; j < n; j++)
        {
            if (nums[j] < nums[minima])
            {
                minima = j;
            }
            temp = nums[i];
            nums[i] = nums[minima];
            nums[minima] = temp;
        }
    }

    printf("\nVector: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t" ,nums[i]);
    }    

    return 0;
}