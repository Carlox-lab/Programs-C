#include <stdio.h>

int main()
{
    int j, i;

    scanf("%d" ,&j);
    int r[j];

    for (i = 0; i <= j; i++)
    {
        r[i]= i;
        printf("%d\n" ,r[i]);
    }
    
    return (0);
}