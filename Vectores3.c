#include <stdio.h>

int main(void)
{
    float r[6] = {3,5,9,15,1,1};

    for (int i = 0; i < 6; i++)
    {
        printf("Original: %.2f\n" ,r[i]);
    }

    r[0]+=2;
    r[2]-=4;
    r[4]*=r[1];
    r[3]=(r[3]*r[5])+r[2];
    r[5]=r[0]/r[5];

    for (int i = 0; i < 6; i++)
    {
        printf("Finalizado: %.2f\n" ,r[i]);
    }
    
}