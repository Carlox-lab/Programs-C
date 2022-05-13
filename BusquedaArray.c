//Búsqueda secuencial

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n=10;
    int nums[n];
    int menor, mayor, op, encontrado, buscado;

    for (int i = 0; i < n; i++)
    {
        nums[i]= rand () %10;
    }
    
    printf("Menor (0), Mayor (1), especifico (2)\n");
    scanf("%d" ,&op);

    printf("\nVector: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t" ,nums[i]);
    }

    switch (op)
    {
    case 0:
        //Menor

        menor = nums[0];

        for (int i = 0; i < 10; i++)
        {
            if (nums[i]<menor)
            {
                menor = nums[i];
            }
        }

        printf("\nMenor: %d" ,menor);

        break;
    case 1:
        //Mayor

        mayor = nums[n-1];

        for (int i = 0; i < n-1; i++)
        {
            if (nums[i]>mayor)
            {
                mayor = nums[i];
            }
        }

        printf("\nMayor: %d" ,mayor);

        break;
    case 2:
        //Específico

        printf("Introduzca el número a buscar\n");
        scanf("%d" ,&buscado);

        encontrado=-1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i]==buscado)
            {
                encontrado=i;
            }
        }

        printf("\nSu elemento está en la casilla: %d\n" ,encontrado+1);
        break;
    default:
        printf("Opcion no valida\n");
        break;
    }

    return 0;
}