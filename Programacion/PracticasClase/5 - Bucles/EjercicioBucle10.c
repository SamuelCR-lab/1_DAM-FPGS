#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *
 */
int main (){  
	int num;
	int i;
	int j;
	printf("Introduce un numero cualquiera para hacer una piramide de numeros: ");
	scanf("%d",&num);
		for (i = 1; i <= num; i++){//Al declarar la variable i =1 que es igual al numero que se va a imprimir de forma redundante, debido a que explicado en la siguiente 
			for(j = 1; j <= i;j++){//al declarar la j =1 y decir que tiene que ser menor o igual a i esto hace que con el posterior print se muestre la j hasta que llegue a ser num que es el numero que se compara i.
			printf("%d",j);
			}
			printf("\n");
		}
return 0;
}
