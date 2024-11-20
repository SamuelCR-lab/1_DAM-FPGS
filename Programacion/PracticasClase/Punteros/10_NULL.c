#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 	Autor: SAMUEL CARIAS RAMOS
 *  
 */

int main(){
	int * dir = NULL;// null es el valor con el que se inician los punteros que no se igualan a variables y queremos que mas adelante en el programa lo inicialices o lo iguales
	
	printf("Direccion de memoria :%p\n",dir);//%p es para que muestre el puntero, que es la dirreccion de memoria
	printf("Contenido de esa direccion:%d\n",*dir);
	return 0;
}
