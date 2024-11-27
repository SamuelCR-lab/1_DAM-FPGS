#include <stdio.h>

int main() {
    int numero = 10;
    //Intento de trampeo del const
    int trampa = 30
    //Este const hace constante el contenido del Puntero int *ptr que es = a la direccion de memoria de numero
    const int *ptr = &numero;  // El valor apuntado es constante

    printf("Valor: %d\n", *ptr);

    // *ptr = 20;  // Esto daría un error porque el valor es constante
    numero = 20;   // Cambiar el valor directamente es válido
    printf("Nuevo valor: %d\n", *ptr);
    //Vamos trampear ptr que es una constante int pero que con el * lo covertimos 
    //en el puntero que apunta al valor de la direccion de memoria de la variable numero 
    ptr = &trampa;
    printf("Nuevo valor: %d\n",*ptr)
    return 0;
}