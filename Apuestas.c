#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float apuesta;
    int dado1, dado2, n, i, sum, op;
    n=0;
    apuesta=0;
    sum = 0;
    dado1=0;
    dado2=0;
    op=0;
    while (apuesta<=0)
    {
        printf("Cuanto varo pa?\n");
        scanf("%f" ,&apuesta);   
    }
    if (apuesta<=100)
    {
        n=5;
    }
    else
    {
        n=7;
    }
    for (i = 1; i < n+1; i++)
    {
        dado1 = rand() %6+1;
        dado2 = rand() %6+1;
        sum = dado1 + dado2;
        printf("Numero de tiros totales: %d\n" ,n);
        printf("Numero de tiro: %d\n" ,i);
        printf("Tu dinero es de: %f\n" ,apuesta);
        printf("Tus dados fueron de: %d y %d\n" ,dado1 ,dado2);
        if (i%2==0)
        {
            switch (sum)
            {
            case 7:
                apuesta=apuesta*2;
                break;
            case 3 || 6 || 9 || 12:
                apuesta=apuesta/2;
                break;
            default:
                apuesta=(apuesta*0.1) +apuesta;
                break;
            }
        }
        else
        {
            if (sum%5==0)
            {
                apuesta=(apuesta*0.5) + apuesta;
            }
            else
            {
                apuesta=apuesta-(apuesta*0.1);
            }
        }
        if (apuesta==0)
        {
            break;
        }
        printf("Su dinero ahora es de: %f\n" ,apuesta);
        printf("Desea seguir jugando?\n");
        printf("0 - Si\n");
        printf("1 - No\n");
        scanf("%d" ,&op);
        if (op==1)
        {
            break;
        }
    }
    printf("Usted sale con: $%f" ,apuesta);
    return 0;
}