//Ordena ascendentemente 100 calificaciones

#include <stdio.h>

int main (void)
{
    int n=10;
    float calif[n], calif_ord[n];
    int i, estudiante, minima;
    
    //recibir calificaciones
    for ( estudiante = 1; estudiante <= n; estudiante++)
    {
        calif[estudiante]=8.8;
    }
    
    for ( i = 0; i < n; i++)
    {
        minima=1;
        
        for ( estudiante = 2; estudiante <= n; estudiante++)
        {
            if (calif[estudiante] < calif[minima])
            {
                minima=estudiante;
            }
        }
        calif_ord[i] = calif[minima];
        calif[minima] = 11;                 //Se le sobreescribe un valor mayor a todos para que no sea contado la próxima vez
    }
    
    for (estudiante = 1; estudiante <= n; estudiante++)
    {
        printf("%d" ,calif_ord[estudiante]);
    }
    
    return 0;
}