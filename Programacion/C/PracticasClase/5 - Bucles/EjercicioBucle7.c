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
		printf("Introduce en un lado de un cuadrado: ");
		scanf(" %d",&num);
		for (i = 0; i < num; i++){
			for(j = 0; j < num;j++){
			printf("* ");
			}
			printf("\n");
		}
return 0;
}
