//Ejercicio 4 Llene dos matrices de tamaño n x m y con ellas realice las operaciones de suma y resta de matrices.

#include <stdio.h>

int creamatriz1(int n, int m)
{
    int array[n][m];
    int num;

    printf("Primer matriz \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Casilla: %d, %d \n" ,i+1 ,j+1);
            scanf("%d" ,&num);

            array[i][j]=num;
        }
    }
    return array;
}

int restamatriz(int array1, int array2, int n, int m)
{
    int array3[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array3[i][j]= array1[i][j]-array2[i][j];
        }
    }
    return array3;
}

int sumamatriz(int array1, int array2, int n, int m)
{
    int array3[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array3[i][j]= array1[i][j]+array2[i][j];
        }
    }
    return array3;
}

int main (void)
{
    int n,m;
    int t1,t2;
    int op;

    printf("Numero de filas: \n");
    scanf("%d" ,&n);
    
    printf("Numero de columnas: \n");
    scanf("%d" ,&m);

    t1=creamatriz(n,m);
    t2=creamatriz(n,m);

    printf("%d" ,t1);

    /*printf("(1) para suma, (0) para resta\n");
    scanf("%d" ,&op);

    switch (op)
    {
    case 0:
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d" ,restamatriz(t1, t2, n, m);
            }
        }
        break;
    case 1:
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d" ,sumamatriz(t1, t2, n, m);
            }
        }
        break;
    default:
        printf("No poseo la informacion\n");
        break;
    }*/
    return 0;
}