#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *
 */
int main (){//1 SOLUCION  
	for (int i = 0; i < 21 ; i+=2){
		printf("%d",i);
		if (i<20)
		printf(", ");
		
	}
	//total de lineas ejecutadas: 32 + el bucle
	printf(".\n");
//2ª SOLUCION
	int i;
	for (i = 0;i < 19; i += 2){//10 veces
		printf("%d, ",i);// 10 veces
	
	//Totla de lineas ejecutadas:10 + bucle
	//Al salir del bucle, i vale 20
	}
	printf("%d.\n",i);
return 0;
}
