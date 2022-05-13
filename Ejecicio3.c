#include <stdio.h>

int main ()
{
    int n, op ,machos ,hembras;
    float porcentaje;

    //se pide informacion

    printf("Cuantas mascotas son?\n");
    scanf("%d" ,&n);

    //se declara el arreglo despues de pedir la informacion
    int mascotas[n];

    //se inicializan estas variables en 0
    machos=0;
    hembras=0;

    printf("1 para macho 0 para hembra\n");

    for (int i = 1; i <= n; i++)
    {
        printf("Mascota %d. \n" ,i);
        scanf("%d" ,&op);

        //se necesita saber si es macho y hembra, y ese valor se ira sumando para el contador y luego hacer el porcentaje
        if (op==0)
        {
            hembras++;
        }
        else
        {
            machos++;
        }

    //se escribe en el arreglo el genero
    mascotas[i]=op;
    }

    //se saca el porcentaje de machos , se convierte a float para que no ocurra el error de tipo y no de cero.
    porcentaje = ((float) machos/(float) n)*100;

    //se imprime el resultado, el porcentaje de hembras se pone como el 100-porcentaje ya que es el sobrante o el faltante del 100 porciento.
    printf("Porcentajes \nmachos \t hembras \n");
    printf("%.2f\t%.2f " ,porcentaje ,100-porcentaje);
    return 0;
}