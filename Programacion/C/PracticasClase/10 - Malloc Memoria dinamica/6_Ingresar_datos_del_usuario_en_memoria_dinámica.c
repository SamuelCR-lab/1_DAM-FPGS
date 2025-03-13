#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Introduce un número entero: ");
	scanf("%d",&n);
	int * arr = (int *) calloc(n,sizeof(int));
	if (arr == NULL){
		printf("ERROR FATAL, no hay memoria.\n");
		return EXIT_FAILURE;
	}
	for (int i = 0, p = 0; i < n; ++i){
		printf("Introduce el valor que sera guadado en Arr[%d]: ",i);
		scanf("%d",&p);
		arr[i] = p;
	}

	for (int i = 0; i < n; i++){
		printf("arr[%d] %d\n",i,arr[i]);
	}
	free(arr);


	return 0;
}