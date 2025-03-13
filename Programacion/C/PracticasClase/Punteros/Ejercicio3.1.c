#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 	Autor: SAMUEL CARIAS RAMOS
 *  
 */
int main(){
	int numeros[5] = {10, 20, 30, 40, 50};
	int *p = numeros;	
	int suma = 0;
	for (int i = 0; i < 5; i++){
		suma += *(p + i);
		printf("Elemento %d: %d (en la dirección %p)\n",i,*(p + i),p+i);
	}
	printf("Suma de cada uno de los elementos guardados en el array es: %d\n",suma);	

return 0;
}
