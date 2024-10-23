#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *
 */
int main (){  
	int i;
	int suma = 0;
	for (i = 1; i <= 10 ; i+=1){
		printf("%d + %d = ",suma,i);
		suma=suma+i;
		printf("%d\n",suma);
		
	}
return 0;
}
