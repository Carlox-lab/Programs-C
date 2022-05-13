#include <stdio.h>
void muestra_lista(int lista[])
{
    int posicion;
    for (posicion=0;posicion<10;posicion++)
    {
    printf("%d \n", lista[posicion]);
    }
}

void main() 
{
    int edad[]={17,20,22,18,19,20,20,18,19,17};

    printf("La lista es \n");
    muestra_lista(edad);
}
