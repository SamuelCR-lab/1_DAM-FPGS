#include <stdio.h>

int main() {
    int numero = 10;
    //Intento de trampeo del const
    int trampa = 30
    //Este const hace constante el contenido del Puntero int *ptr que es = a la direccion de memoria de numero
    const int * const ptr = &numero;  // El puntero es constante pero queremos las dos cosas entonces se pone en las dos const

    printf("Valor: %d\n", *ptr);

    // *ptr = 20;  // Esto daría un error porque el valor es constante
    numero = 20;   // Cambiar el valor directamente es válido
    printf("Nuevo valor: %d\n", *ptr);
    //Vamos trampear ptr que es una constante int pero que con el * lo covertimos 
    //en el puntero que apunta al valor de la direccion de memoria de la variable numero 
    // en este caso (ptr = &trampa;) no funciona porque es constante el puntero ptr 
    //ptr (dirreccion de memoria) ya es constante entonces no se puede la anterior trampa pero si se puede acceder al contenido de la direccion de memoria
    *ptr = 30;//Error
    printf("Nuevo valor: %d\n",*ptr)
    return 0;
}