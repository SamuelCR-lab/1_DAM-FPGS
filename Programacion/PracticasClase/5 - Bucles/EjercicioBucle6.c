#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *
 */
int main (){  
	int num, i, serie;
		printf("Introduce en un numero: ");
		scanf(" %d",&num);
		for (i = 1; i <= num; i++){ 
			serie = serie + i;  
		}
		printf("Suma de la serie de numeros antes y hasta el %d es = %d\n",num,serie);
return 0;
}
