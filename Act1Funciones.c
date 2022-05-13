#include <stdio.h>

int fun(int x)
{
    int r;

    r=((x)*(x)*(x))-(4*(x))+3;

    return r;
}

int main (void)
{
    int a=1;

    printf("f(x)=x^3 -4x + 3\n Primeros 100 números");

    for (int i = 0; i <= 100; i++)
    {
        printf("x = %d:\t%d\n" ,i ,fun(i));
    }
    
    return 0;
}