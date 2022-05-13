//Picas y fijas 

#include <stdio.h>
#include <stdlib.h>

int arr(void)
{
	// inicio de declaración de variables
	int A_0[4];  
	
	for(int i = 0; i < 4; i++)
	{
		A_0[i]= rand () %10;
		switch (i)
		case 0:
			break;
		default:
			if (A_0[i]== A_0[i--] )
			{
				while (A_0[i]== A_0[i--])
				{
					A_0[i]= rand () %10;
				}
			}
			break;
	}
	return A_0;
}

int input(void)
{
	int A_f[4];
		
	for(int i = 0; i < 12; i++)
	{
		printf("Ingrese cada digito seguido de un enter\n");
		
		for( int i = 0; i < 4; i++)
		{
			printf("%d.- ",i+1);
			scanf("%d",&A_f[i]);
		}
	}
	return A_f;
}


int fij(int A[4], int U[4])
{
	int fijas = 0;
	//fijas
	for( int i=0;i<4;i++)
	{
		if (A[i]==U[i])
		{
   			fijas++;
		}
	}
	return fijas;
}


int pic(int A[4], int U[4], int fijas)
{
	//picas
	
	int picas=0;
	
	for( int i=0;i<4;i++)
	{
		for( int j=0;j<4;j++)
		{
			if (A[i]==U[j])
			{
     				picas++;
    		}
		}
	}
	picas-= fijas;
	
	return picas;
}

int exit(void)
{
	return 0;
}

int main(void)
{
	int A_0[4] = arr(void);
	
	printf("JUEGO PICAS Y FIJAS\n\n");
	
	for (int intentos = 0; intentos< 13; intentos++)
	{
		int A_f[4] = input(void);
		fijas = fij(int A_0[4], int A_f[4]);
		picas = pic(int A_0[4], int A_f[4]);
		
		
	}
	
	return 0;
}