#include <stdio.h>
#include <stdlib.h>

int main(){
	char * arr = (char *) calloc(200000,sizeof(char));
		if (arr == NULL){
			printf("ERROR FATAL, no hay memoria.\n");
			return EXIT_FAILURE;
		}
		printf("Introduce la cadena de caracteres que quieres guardar: ");
		fgets(arr,200000,stdin);
		char * arr 
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
				int * arr = (int *) realloc (++cantidad*sizeof(int));
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