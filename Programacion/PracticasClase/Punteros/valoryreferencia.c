#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 	Autor: SAMUEL CARIAS RAMOS
 *  
 */

//Quiero qie realmente incremente la variable dada como argumento
void incrementar(int *n){
	printf("valor recibido: %d\n",*n);
    // Tambien se puede hacer el sumatorio de uno mas al puntero (*n)++;
	*n = *n + 1;
	printf("Valor incrementado en la función: %d\n",*n);

}

int main() {
	int valor = 10;
	incrementar(&valor);//Le estoy dando el valor 10 a incremento que arriba en void incrementar iguala la direccion de memoria del valor int = 10 con el puntero con *n  
	printf("Valor en el main: %d\n", valor);// Deberia imprimir 10, pero al igualar en llamar el void el pùntero *n comparte la misma direccion de memoria de valor debido al '&', comparten la misma direccion por lo que si se modifica "valor o *n" se modifican las dos  
	return 0;
}
