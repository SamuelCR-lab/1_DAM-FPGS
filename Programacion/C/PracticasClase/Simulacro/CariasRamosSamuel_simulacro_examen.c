#include <stdio.h>
#include <stdlib.h>
/*
	Autor: Samuel Carías Ramos
*/
void posicionArr(float ** arr1, float tamanio1){
	for (int i = 0; i < tamanio1; i++){
				(*arr1)[i] = i/tamanio1;
			}
}
void posicionArr_Reducida(float ** arr, float tamanio2){
	float * arr_reducido = arr[0];
	arr_reducido = (float*) realloc(arr_reducido, tamanio2*sizeof(float));
}
	
int main(){
	float tamanio;
	float * arr;
	int error_c;
		printf("Introduce un numero entero positivo\n");
		error_c = scanf("%f",&tamanio);
		if (error_c = 0 || tamanio < 0){
			printf("El valor introducido no es un numero entero positivo o es una letra");
		}else{
			arr = (float*) malloc(tamanio * sizeof(float));
			posicionArr(&arr,tamanio);
			for (int i = 0; i < tamanio; i++){
				printf("\t Posicion %d: %d/%.0f = %.3f\n",i ,i ,tamanio ,arr[i]);
			}
			printf("\n");
			tamanio = tamanio/2;
			posicionArr_Reducida(&arr,tamanio);
			posicionArr(&arr,tamanio);
			for (int i = 0; i < tamanio; i++){
				printf("\t Posicion %d: %d/%.1f = %.3f\n",i ,i ,tamanio ,arr[i]);
			}
		}

free(arr);
return 0;
}