#include <stdio.h>
#include <stdlib.h> // Para malloc, free, etc.


int main() {
	int n = 0;
	int p = 0;
	printf("Introduce un número entero: ");
	scanf("%d",&n);
	int * arr = (int *) calloc(n,sizeof(int));
	if (arr == NULL){
		printf("ERROR FATAL, no hay memoria.\n");
		return EXIT_FAILURE;
	}
	
	for (int i = 0; i < n; i++){
		arr[i] = 2*i;
		printf("arr[%d] %d\n",i,arr[i]);
	}
	printf("Segunda Parte\n");
	p = n*2;
	int * arr_ampliado = (int *) realloc(arr,p * sizeof(int));
	if (arr_ampliado == NULL){
	free(arr);
		printf("ERROR FATAL, no hay memoria.\n");
		return EXIT_FAILURE;
	}

	arr = arr_ampliado;

	for (int i = n, valor = 0; i < p; i++){
		arr[i] = valor;
		arr_ampliado[i] = 2*(i-n)+1;
	}
	for (int i = 0; i < p;i++){
		
		printf("arr[%d] %d\n",i,arr_ampliado[i]);
	}
	free(arr_ampliado);
	return 0;
}
