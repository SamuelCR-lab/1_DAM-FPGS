#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autor: Samuel Carías
 *
 */
int main (){
	int i = 0;// La variable int tambien se puede declarar dentro del for 
	for (/*Valor inicial*/ i = 0; i<5 /*Condicion*/ ; i = i + 1 /*Codigo entre vueltas*/){
		printf("%d",i);
	}
	
	printf("Terminado\n");

/**
 *	Los bucles for lo que realiza el programa es:
 *	1)lee int que es = 0 y comprueba que i<5 termina y lo imprime pero vuelve a i = i + 1
 *	2)lee int que ahora es = 1 ya que ha sido incrementado anteriormente y comprueba que i<5 termina y lo imprime pero vuelve a i = i + 1
 *	3)lee int que es = 2 y comprueba que i<5 termina y lo imprime pero vuelve a i = i + 1
 *	4)lee int que es = 3 y comprueba que i<5 termina y lo imprime pero vuelve a i = i + 1
 *	5)lee int que es = 4 y comprueba que i<5 termina y lo imprime pero vuelve a i = i + 1
 *	6)lee int que es = 5 y comprueba que i<5 por lo que va a imprimir en pantalla es Terminado ya que i ya no es menor que 5
 *
 *
 *
 */

// Nivel avanzado printf("nivel avanzado");
// printf("%d\n",i++); es 0 porque incrementa despues de leer el valor.
// printf("%d\n",i); es 1
// printf("%d\n",++i); es 2 porque primero incrementa y despues devuelve el valor
// analogicamente ocurre con i--; --i 

return 0;
}
