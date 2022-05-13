
#include <stdio.h>
void dibujaLineas(const int n)
{
    int contador=0;
    while (contador < n)
    {
        printf("---------------\n");
        contador=contador+1;
    }
}

void main()
{
    dibujaLineas(7);
}