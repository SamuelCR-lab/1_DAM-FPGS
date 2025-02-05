#include <stdio.h>
#include <stdlib.h>

int main (){
	int tamanio_arr1, tamanio_arr2, tamanio_arr_concatenado;
	char con_sum;
		printf("Introduce un numero entero positivo cualquiera: ");
		int corrector = scanf(" %d",&tamanio_arr1);
		if (corrector = 0 || tamanio_arr1 <= 0){
			printf("ERROR, lo introducido es una letra/palabra o numero negativo, porfavor introduzca lo solicitado.\n");
			return 0;
		}
		int * arr = (int*) malloc(tamanio_arr1 *sizeof(int));
		if (arr == NULL) return 0;
			for (int i = 0; i < tamanio_arr1; i++){
				arr[i] = i + tamanio_arr1;
			}

		tamanio_arr2 = tamanio_arr1 + arr[0];
		int * arr_segundario = (int*) malloc(tamanio_arr2 * sizeof(int));
		if (arr_segundario == NULL) return 0;
			for (int i = 0; i < tamanio_arr2; i++){
				arr_segundario[i] = i + 6;
			}

		printf("¿Quieres concatenar o sumar los digitos de cada array? c(concatenar) o s(sumar): ");
		scanf(" %c",&con_sum);
			if (con_sum == 'c'){
				tamanio_arr_concatenado = tamanio_arr1 + tamanio_arr2;
				int * arr_concatenado = (int*) realloc(arr, tamanio_arr_concatenado * sizeof (int));
				for (int i = tamanio_arr1; i < tamanio_arr_concatenado; i++){
					arr_concatenado[i] = arr_segundario[i];
				}
				for(int j = 0; j < tamanio_arr_concatenado; j++){
					printf("Valor %d del array concatenado = %d.\n",j+1,arr_concatenado[j]);
				}
				free(arr_concatenado);
				free(arr_segundario);
				return 0;
			}else if (con_sum == 's'){
				int * arr_sumado = (int*) realloc(arr_segundario, tamanio_arr2*sizeof(int));
				for (int i = 0; i < tamanio_arr1; i++){
					arr_sumado[i] += arr[i];
				}
				for(int j = 0; j < tamanio_arr2; j++){
					printf("Valor %d de la suma de los arrays = %d.\n",j+1,arr_sumado[j]);
				}
				free(arr_sumado);
				free(arr);
				return 0;
			}else{
				printf("ERROR, lo introducido no es correcto, porfavor introduzca lo solicitado.\n");
			}
		free(arr);
		free(arr_segundario);
		
	return 0;
}
