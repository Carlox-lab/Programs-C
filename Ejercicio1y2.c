#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int horas[4][5], horas_por_becario[4], horas_por_dia[5]; 
    float promedio_por_becario[4], promedio_por_dia[5];
    int becario, dia; 
    float sumas_horas, total, promedio;

    //recibir horas
   for ( becario = 0; becario < 4; becario++)
   {
       for ( dia = 0; dia < 5; dia++)
       {
           	horas[becario][dia] = rand () % 7+3;
       }   
   }

    //Horas por becario
    for ( becario = 0; becario < 4; becario++)
    {
        sumas_horas=0;
        for ( dia = 0; dia < 5; dia++)
        {
            sumas_horas+=horas[becario][dia];  
        }
        promedio_por_becario[becario]=sumas_horas/5;
        horas_por_becario[becario]=sumas_horas;
    }
    
    //Horas por dia
    for ( dia = 0; dia < 5; dia++)
    {
        sumas_horas=0;
        for ( becario = 0; becario < 4; becario++)
        {
            sumas_horas+=horas[becario][dia];   
        }
        promedio_por_dia[dia]=sumas_horas/4;
        horas_por_dia[dia]=sumas_horas;
    }

    total=0;
    for ( becario = 0; becario < 4; becario++)
    {
        total+=horas_por_becario[becario];
    }
    
    promedio=total/4;

    //impresion

    //general
    printf("Tabla:\t\tDia 1\tDia2\tDia3\tDia4\tDia5\tPromedio\n\n");

    for (int i = 0; i < 4; i++)
    {
        printf("Becario %d:\t" ,i+1);
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t" ,horas[i][j]);
        }
        printf("%.1f" ,promedio_por_becario[i]);
        printf("\n");
    }

    //Horas por dia
    printf("Horas por dia:\t");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t" ,horas_por_dia[i]);
    }
    
    //Promedio por dia
    printf("\nProm hrs/dia:\t");
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f\t" ,promedio_por_dia[i]);
    }

    //Promedio total
    printf("%.1f" ,promedio);

    return 0;
}