#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 	Autor: SAMUEL CARIAS RAMOS
 *
 *
 *  	Como funcionan los punteros con structs
 *
 *
 */

int main() {
    const int LIMITE = 100;  // Definir una constante
    int * trampa= &LIMITE;
    //Esta asignancion genera un warning porque al declarar una variable
    // con const le asigna un valor que no varia pero no evita que lo puedas renombrar despues
    printf("El valor de LIMITE es: %d\n", LIMITE);

     LIMITE = 200;  // Esto daría un error porque LIMITE es constante

    return 0;
}