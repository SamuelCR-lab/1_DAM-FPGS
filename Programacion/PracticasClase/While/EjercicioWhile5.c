#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *
 */
int main (){ 
	int num;
	int resto = 0; 
	int resultado = 0;
	int suma = 0;
	while (num == 0){

		(num >= '1') && (num <= '100');
		resto = num/10;
		printf("%d\n",resultado);
		num = resto;
		suma += resultado;


	}
	printf("La suma de cada uno de los digitos es = %d\n",suma);
return 0;
}
