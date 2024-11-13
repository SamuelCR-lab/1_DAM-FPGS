#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 	Autor: SAMUEL CARIAS RAMOS
 *  
 */
int main(){
	float h = 5.4;
	int *p;	
	p = &h;
	printf("Valor de la variable %f\n",h);	
	printf("Direccion de la variable %p\n",&h);	
	printf("El valor apuntado por el puntero %d\n",*p);	



return 0;
}
