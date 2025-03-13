#include <stdio.h>
#include <stdlib.h> // Para malloc, free, etc.


int main() {
	int n = 3;
	int p = 5;
	//Declara un array de tamaño 3 utilizando memoria dinámica
	int * arr = (int *) malloc(n * (sizeof(int)));
	if (arr == NULL){
		printf("ERROR FATAL, no hay memoria.\n");
		return EXIT_FAILURE;
	}
	
	for (int i = 0; i < n;i++){
		arr[i] = 2*i+1;
		printf("arr[%d] %d\n",i,arr[i] );
		
	}
	

	//VAMOS A AMPLIAR EL ARRAY A 5 ELEMENTOS Utilizando Realloc que no necesita el free porque librera la memoria
	int * arr_ampliado = (int *) realloc(arr, p * sizeof(int));
	if (arr_ampliado == NULL){
		free(arr);//Realloc no libera la memoria antigua si no se pone el free arr con un posible fallo
		printf("ERROR FATAL, no hay memoria.\n");
		return EXIT_FAILURE;
	}
	//Para evitar confusiones entre arr_ampliado y arr, es recomendable añadir:
	// arr = arr_ampliado

	//MALA PRACTICA!! arr se ha quedado "colgando"

	//arr_ampliado[3] = 7;
	//arr_ampliado[4] = 9;
	for (int i = 0; i < p;i++){
		arr_ampliado[i] = 2*i+1;
		printf("\t arr[%d] %d\n",i,arr[i] );
		
	}
return 0;
}