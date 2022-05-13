#include <iostream>
#include <ctime> 
#include <stdlib.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// inicio de declaración de variables
	int numa[4];  // arreglo de enteros donde se guarda el numero inicial
	int nume[4];  // arreglo de enteros donde se guarda el numero ingresado por el usuario
	int fijas,picas,num,i;  // num numero de intentos 
	// fin de declaración de variables
	
	//inicio llenar vector aleatorio
    	srand (time(NULL));
    	for( i = 0; i < 4; i++){
    		int b = rand()%10;
    		int c = 0;
    		for( int j = 0; j < i; j++){
    			if (numa[j]== b) c = 1;
		}
    		if(c==0){
    			numa[i] = b;
		} else {
			i--;
		}
	}
    	//fin llenar vector aleatorio
 	
	//inicio del juego
    	printf("JUEGO PICAS Y FIJAS\n\n");
    	for( i = 0; i < 12; i++){
    		printf("Ingrese cada digito seguido de un enter\n");
    		for( int j = 0; j < 4; j++){
    			printf("%d.- ",j+1);
    			scanf("%d",&nume[j]);
    		}
    	
    		picas = 0; fijas = 0;
    	
    		//inicio hallar fijas
    		for( int l=0;l<4;l++){
            		if (numa[l]==nume[l]){
               			fijas++;
            		}
		}
		//fin hallar fijas
		
		//inicio hallar picas
    		for( int l=0;l<4;l++){
            		for( int m=0;m<4;m++){
            			if (numa[l]==nume[m]){
                 				picas++;
                			}
            		}
		}
		picas-= fijas;
		//inicio hallar picas
    		
if(fijas == 4) break;
		num++;
	
		printf("intentos: %d, fijas: %d, picas: %d\n",num,fijas,picas);
	}
	//fin del juego
	//inicio mensaje de salida
	if(num < 4) printf("Bien, Excelente\n");
	else if(num < 8) printf("Bien, Aceptable\n");
	else if(num < 12) printf("Bien, Regular\n");
	else printf("Mal, este juego como que no es para ti\n");
	
    	for( i = 0; i < 4; i++){
    		printf("%d\n",numa[i]);
	}
	//fin mensaje de salida
	return 0;
}
