#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *
 */
int main (){  
	int num, i, divisor = 0;
		printf("Introduce un número cualquiera: ");
		scanf(" %d",&num);
		for (i = 1; i <= num; i++){ 
			if (num % i == 0){ 
			divisor++;
			}
		}
		printf("El numero %d tiene %d divisores\n",num,divisor);
return 0;
}
