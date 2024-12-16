#include <stdio.h>
#include <stdlib.h> // Para malloc, free, etc.

int main() {
    int n = 5;
    //int *arr = (int *)calloc(n, sizeof(int)); // Reserva e inicializa a cero
    
    
    //int arr[5]; //reserva estatica


    int * arr = (int *) malloc(5*sizeof(int));
    //Solo reserva la memoria, pero no la toca.

    if (arr == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
        // Al haber reservado con malloc, no se sabe que valor va a haber almacenado.

        //Tambien funciona como printf("arr[%d] = %d\n", i, *(arr+1) )
    }


    /*Lo mismo con el calloc*/
    int * arr2 = (int *) calloc(5,sizof(int));//reserva la memoria pereo inicializandola cada una de ellas a 0.
    if (arr == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    free(arr);
    free(arr2)
    return 0;
}

