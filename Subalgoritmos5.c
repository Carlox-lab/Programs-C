#include <stdio.h>
void mat(int a[2][2]);

int main()
{
 int a[2][2]={{2,4},{3,6}};
 mat(a);
 return 0;
}

void mat(int b[2][2])
{
    for (int i=0; i<2;i++)
    {
        for (int j=0; j<2;j++)
        {
            printf("%d ", b[i][j]);
        }
    printf( "\n");
    }
}
