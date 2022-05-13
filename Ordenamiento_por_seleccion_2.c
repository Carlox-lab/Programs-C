//Ordena ascendentemente 100 calificaciones

#include <stdio.h>

int main (void)
{
    int n=10;
    float calif[n];
    int i, estudiante, minima, temp;
    
    //recibir calificaciones
    for ( estudiante = 1; estudiante <= n; estudiante++)
    {
        calif[estudiante]=8.8;
    }
    
    for ( i = 0; i < n; i++)
    {
        minima=i;
        
        for ( estudiante = i+1; estudiante <= n; estudiante++)
        {
            if (calif[estudiante] < calif[minima])
            {
                minima = estudiante;
            }
            temp = calif[i];
            calif[i] = calif[minima];
            calif[minima] = temp;
        }
    }
    
    for (estudiante = 1; estudiante <= n; estudiante++)
    {
        printf("%d" ,calif[estudiante]);
    }
    
    return 0;
}