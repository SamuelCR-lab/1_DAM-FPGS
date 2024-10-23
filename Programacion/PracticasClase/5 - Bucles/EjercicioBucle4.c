#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *
 */
int main (){  
	int i;
	int multiplicar = 5;
	int tabla;
	for (i = 1; i <= 10 ; i+=1){
		printf("%d x %d = ",multiplicar,i);
		tabla=multiplicar*i;
		printf("%d\n",tabla);
		
	}
return 0;
}
