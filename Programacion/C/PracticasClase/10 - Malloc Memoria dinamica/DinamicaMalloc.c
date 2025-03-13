#include <stdio.h>
#include <stdlib.h> // Para malloc, free, etc.

int main() {
    int * p_error = malloc(sizeof(int));
    //aqui hay un cating implicito.
    //malloc devulve un void*


    //CASTING EXPLÍCITO
    int * p = (int *)malloc(sizeof(int)); // Reservar espacio para un int
    if (p == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
    }
    *p = 42; // Usamos la memoria
    printf("El valor es: %d\n", *p);
    free(p); // Liberamos la memoria reservada
    return 0;
}

