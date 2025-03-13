#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *
 */
int main (){
	int i = 0;// La variable int tambien se puede declarar dentro del for 
	for (/*Valor inicial*/ i = 0; i<5 /*Condicion*/ ; i = i + 1 /*Codigo entre vueltas*/){
		printf("%d,",i);
	}
	
	printf("Terminado el for\n");

	// La variable int tambien se puede declarar dentro del for 
	while (i<5){//condicion
		printf("%d,",i);//el interior del for
		i = i + 1;//Codigo entre vueltas
	}
	printf("Terminado el while\n");

// Nivel avanzado printf("nivel avanzado");
// printf("%d\n",i++); es 0 porque incrementa despues de leer el valor.
// printf("%d\n",i); es 1
// printf("%d\n",++i); es 2 porque primero incrementa y despues devuelve el valor
// analogicamente ocurre con i--; --i 

return 0;
}
