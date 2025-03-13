#include <stdio.h>
#include <stdlib.h>

int main(){
	char p;
	int i = 0;
	int * arr = (int *) calloc(0,sizeof(int));
		if (arr == NULL){
			printf("ERROR FATAL, no hay memoria.\n");
			return EXIT_FAILURE;
		}
		for (int cantidad = 0, n = 0; i < 2000000; i++){
		printf("¿Quieres introducir elementos al Array? s(Si) o n(No): ");
		scanf("%c",&p);
		if (p == 's'){
			//int * arr = (int *) realloc (cantidad,sizeof(int));
			/*if (arr == NULL){
				printf("ERROR FATAL, no hay memoria.\n");
			return EXIT_FAILURE;
			}*/
			for(int j = 0; j < i; j++){
				printf("Introduce el valor que sera guadado en el valor del array: ");
				scanf("%d",&n);
				arr[j] = n;
				int * arr = (int *) realloc (i*sizeof(int));
				if (arr == NULL){
				printf("ERROR FATAL, no hay memoria.\n");
			return EXIT_FAILURE;
			}
			}
		}else{
			for(int k = 0; k < i; k++){
			printf("%dº Valor del Arry es: %d",i,arr[i]);
			}
		}


	}


	return 0;
}