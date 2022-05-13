//Vectores pares e impares por Carlos Juárez

#include <stdio.h>

int main (void)
{
    int todo[10], n, i ,cpar ,cimpar;

    cpar=0;
    cimpar=0;

    for (i = 0; i < 10; i++)
    {
        printf("Numero %d \n" ,i+1);
        scanf("%d" ,&n);
        
        if (n%2==0)
        {
            cpar++;
        }
        else
        {
            cimpar++;
        }
        
        todo[i]=n;
    }
    
    int pares[cpar], impares[cimpar], k, j;

    j=0;
    k=0;

    for (i = 0; i < 10 ; i++)
    {
        if (todo[i]%2==0)
        {
            pares[j]=todo[i];
            j++;
        }
        else
        {
            impares[k]=todo[i];
            k++;
        }
    }

    printf("Arreglo todo:\n");
    for ( i = 0; i < 10; i++)
    {
        printf("Casilla %d: %d\n" ,i+1 ,todo[i]);
    }

    printf("Arreglo pares:\n");
    for ( i = 0; i < cpar; i++)
    {
        printf("Casilla %d: %d\n" ,i+1 ,pares[i]);
    }

    printf("Arreglo impares:\n");
    for ( i = 0; i < cimpar; i++)
    {
        printf("Casilla %d: %d\n" ,i+1 ,impares[i]);
    }

    return 0;
}