#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int horas[10][5], horas_por_becario[10], horas_por_dia[5], horas_ord[10]; 
    float promedio_por_becario[10], promedio_por_dia[5];
    int becario, dia; 
    float sumas_horas, total, promedio;

    //recibir horas
   for ( becario = 0; becario < 10; becario++)
   {
       for ( dia = 0; dia < 5; dia++)
       {
           	horas[becario][dia] = rand () % 8+1;
       }   
   }

    //Horas por becario
    for ( becario = 0; becario < 10; becario++)
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
        for ( becario = 0; becario < 10; becario++)
        {
            sumas_horas+=horas[becario][dia];   
        }
        promedio_por_dia[dia]=sumas_horas/10;
        horas_por_dia[dia]=sumas_horas;
    }

    total=0;
    for ( becario = 0; becario < 10; becario++)
    {
        total+=horas_por_becario[becario];
    }
    
    promedio=total/10;
    
    //HACER COPIA DE HORAS_POR_BECARIO
    int horas_por_becario_copia[10];
    for (int i = 0; i < 10; i++)
    {
        horas_por_becario_copia[i]=horas_por_becario[i];
    }

    int minima;
    for (int i = 0; i < 10; i++)
    {
        minima=0;
        
        for ( becario = 0; becario < 10; becario++)
        {
            if (horas_por_becario_copia[becario] < horas_por_becario_copia[minima])
            {
                minima=becario;
            }
        }
        horas_ord[i] = horas_por_becario[minima];
        horas_por_becario_copia[minima] = (8*5)+1;                 //Se le sobreescribe un valor mayor a todos para que no sea contado la próxima vez
    }

    //Comparacion de arreglos para saber cuales son los becarios premiados

    int index[10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (horas_ord[i]==horas_por_becario[j])
            {
                index[i]=j+1;
                break;
            }
        }
    }

    //impresion

    //general
    printf("Tabla:\t\tDia 1\tDia2\tDia3\tDia4\tDia5\tPromedio\n\n");

    for (int i = 0; i < 10; i++)
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

    //Ordenado
    printf("\n\nBecario \tHoras totales\n\n");

    for (int i = 0; i < 10; i++)
    {
        if (i==9 || i==8 || i==7)
        {
            printf("Becario %d\t%d hrs incentivo\n" ,index[i] ,horas_ord[i]);   
        }
        else
        {
            printf("Becario %d\t%d hrs\n" ,index[i] ,horas_ord[i]);   
        }        
    }
    return 0;
}