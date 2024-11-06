#include <stdio.h>
#include <stdlib.h>
#include <time>
/**
 *
 *	Autor: Victor de Juan
 *
 */

int main (){
	int r;
	//srand (10);
	srand(time(NULL));//Cada segundo de la hora, esto se pone para que srand cambie siempre de valor
	//srand(getpid()); //Indentificador del proceso osea lo base  
	for (int i = 0;i<4;i++){
		r = (rand()%5)+1;
//Hacer modulo 8 da numeros aleatorios entre 0 y 7
		printf("%d\n",r);
	}


}
