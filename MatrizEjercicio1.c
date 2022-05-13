#include <stdio.h>

int main (void)
{
    int a[10][10];
    int j, i, k;

    k=0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            a[i][j]= k+1;
            k++;
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d\t" ,a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}