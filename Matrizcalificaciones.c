/*Actividad
- Hacer un algoritmo para llevar un control de calificaciones de 10 estudiantes.
- Guardar los nombres en un arreglo
- Guardas las calificaciones en otro arreglo
- Mostrar los estudiantes con sus calificaciones*/

#include <stdio.h>

int main (void)
{
    int n=10;
    float s;

    char nombres[10][20]={{"Pedro"},{"Luis"},{"Abraham"},{"Daniel"},{"Susana"},{"Cristina"},{"Soledad"},{"Evelynn"},{"David"},{"Takeo"}};
    float calif[n];

    //ciclo para que introduzcan calificaiones
    for (int i = 0; i < n; i++)
    {
        printf("Introduzca la calificacion del estudiante con numero de lista %d: \n" ,i+1);
        scanf("%f" ,&s);

        calif[i]=s;
    }

    //empieza la tabla
    printf("Nombre\tcalificacion\n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; nombres[i][j]!='\0'; j++)
        {
            printf(" %c" ,nombres[i][j]);
        }
        printf("\t%.2f\n" ,calif[i]);
    }
    return 0;
}