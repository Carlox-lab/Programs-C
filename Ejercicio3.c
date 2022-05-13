#include <stdio.h>
int main ()
{
    int x;
    
    //Pedir limite
    printf("Limit\n");
    scanf("%d" ,&x);
    printf("\n\n");
    if (x<0)
    {
        x*=-1;
        int r[x];
        for ( int i = x; i >= 0; i--)
        {
            r[i]= -i;
            printf("%d\n" ,r[i]);
        }
    
    }
    else
    {
        int r[x];
        for ( int i = x; i >= 0; i--)
        {
            r[i]= i;
            printf("%d\n" ,r[i]);
        }
    
    }
    
    return 0;
}