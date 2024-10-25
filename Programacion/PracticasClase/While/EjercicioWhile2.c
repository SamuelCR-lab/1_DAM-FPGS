#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *
 */
int main (){ 
	int num = 123;
	int resto = 0; 
	int resultado = 0;
	while (num != 0){	
		resultado = num%10;
		resto = num/10;
		printf("%d\n",resultado);
		resto = num;
		
	}
	printf("Hemos terminado la suma de los digitos\n");
return 0;
}
