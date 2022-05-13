#include <stdio.h>

int mostrar(float calif)
{
    if (calif>=9.1 && calif<=10)
    {
        printf("Su clave es A, felicidades!\n");
    }
    else
    {
        if (calif>=8.1 && calif<=9)
        {
            printf("Su clave es B\n");
        }
        else
        {
            if (calif>=6.1 && calif<=8)
            {
                printf("Su calve es C tiene riesgo\n");
            }
            else
            {
                if (calif<6.1)
                {
                    printf("Su clave es E has reprobado\n");
                }
                
            }
            
            
        }
        
    }
    return 0;
}

int main (void)
{
    int a=10;
    float x;

    for (int i = 0; i < a; i++)
    {
        printf("Calificacion:\n");
        scanf("%f" ,&x);

        mostrar(x);
    } 

    return 0;
}