#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *
 */
int main (){  
	int num1, i;
	double factorial = 1;
		printf("Introduce en un numero: ");
		scanf(" %d",&num1);
		if(num1 <= 0){
		printf("El factorial no esta definido para numeros negativos ni para %d",num1);
		}else{
		for (i = num1; i > 1; i--){//para hacerlo en un decreciente 
			factorial = factorial * i;  
		}
	 	}
		printf("El factorial de %d es = %lf",num1,factorial);
return 0;
}
