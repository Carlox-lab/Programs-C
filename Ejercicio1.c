//Ejercicio 1 Diseñar e implementar un programa que cuente el número de sus entradas que son positivos, negativos y cero.
//Por: Elizabeth Irene Tello Vera, Carlos Juárez Luna.

#include <stdio.h>

int main (void)
{
    int tam, i, dato, positivos, negativos, cero;
    
    printf("Tamaño: \n");
    scanf("%d" ,&tam);
    int r[tam];

    positivos=0;
    negativos=0;
    cero=0;

    for (i = 0; i <= tam; i++)
    {
        printf("Valor para la casilla %d\n" ,i);
        scanf("%d" ,&dato);

        if (dato<0)
        {
            negativos++;
        }
        else
        {
            if (dato==0)
            {
                cero++;
            }
            else
            {
                positivos++;   
            }
        }
        
        r[i]=dato;
    }
    
    printf("Positivos: %d, negativos: %d, ceros: %d\n" ,positivos ,negativos ,cero);

    return (0);
}