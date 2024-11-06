#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Victor de Juan
 *
 */

int main (){
	int r;
	while(1){//WHILE 1 ES una condicional que se cumple siempre
		r = rand()%8;
//Hacer modulo 8 da numeros aleatorios entre 0 y 7
		printf("%d\n",r);
	}


}
