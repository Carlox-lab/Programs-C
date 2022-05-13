#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	int horas[10][5], i, j, x=0, y=1, h=0, hd=0, ht=0;
	float p=0, pd=0, pt=0;
	srand(time(NULL));
	//Llenar la matriz
	for (i=0;i<10;i++)
	{
		x++;
		for (j=0;j<5;j++)
		{
			horas[i][j] = rand () % 7+3;
		}
	}
	//Mostrar la matriz
	x=1;
	printf("             Dia 1   Dia 2   Dia 3   Dia 4   Dia 5   Horas t.   Promedio t.\n");
	for (i=0;i<10;i++)
	{
		if (x<10)
		{
			printf("Becario %d      ", x++);
		}
		else
		{
			printf("Becario %d     ", x++);
		}
		for (j=0;j<5;j++)
		{
			//h es igual a la suma de las horas trabajadas de un solo becario
			//p es igual al promedio de horas por becario
			h+=horas[i][j];
			p=p+horas[i][j];
			printf("%d       ", horas[i][j]);
		}
		printf("%d         %1.1f\n", h, p/5);
		p=0;
	}
	printf("Horas/dia");
	for (j=0;j<5;j++)
	{
		//hd es igual a horas al d�a
		//ht es igual a horas totales
		for (i=0;i<10;i++)
		{
			hd=hd+horas[i][j];
		}
		printf("      %d", hd);
		ht=ht+hd;
		hd=0;
	}
	printf("      %d", ht);
	printf("\n");
	printf("Promedio       ");
	for (j=0;j<5;j++)
	{
		//pd es igual a promedio al d�a
		//pt es igual a promedio total
		for (i=0;i<10;i++)
		{
			pd=pd+horas[i][j];
		}
		printf("%1.1f    ", pd/4);
		pt=pt+pd/4;
		pd=0;
	}
	printf("           %1.1f", pt/5);
	printf("\n");
	printf("\n");
	printf("\n");
	
	//Los m�s trabajadores
	int recoleccion[10], pro=0, rec;
	printf("Comparacion de horas trabajadas\n");
	for (i=0;i<10;i++)
	{
		for (j=0;j<5;j++)
		{
			pro=pro+horas[i][j];
		}
		recoleccion[rec]=recoleccion[rec]+pro;
		rec++;
		pro=0;
	}
	for (rec=0;rec<10;rec++)
	{
		printf("%d\n", recoleccion[rec]);
	}
return 0;
}
