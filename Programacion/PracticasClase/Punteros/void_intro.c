#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 	Autor: SAMUEL CARIAS RAMOS
 *  
 */

void printValor(void * ptr, char tipo){
	switch(tipo){
		case 'd':
			//printf("Double %lf\n," (double *)ptr); esto no es correcto porque no estamos accediendo al contenido del puntero 
			printf("Double %lf\n", *((double *)ptr));
			break;
		case 'i':
			printf("Enteros: %d\n", *((int *)ptr));
			break;
		defaut:
			printf("Error");
	}
}

int main(){
	double num = 10;
	void * dir = &num;
	printValor(dir, 'd');
	printValor(dir, 'i');
	return 0;
}
