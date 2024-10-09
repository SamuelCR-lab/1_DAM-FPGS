#include <stdio.h>
#include <stdlib.h>



/** Operadores de COMPARACION SON: 
 *	< menor
 *	> Mayor
 *	<= menor o igual
 *	>= mayor o igual
 *	== igual
 *	!= distinto
 *	% es dividir al numero con el siguiente qu ele pongas mayormente es 2 para saber si es un numero par o impar
 *
 */


int main (){
int condicion;
printf("Escribe un numero entero:\n");
// El = es un operador de asignancion
scanf("%d",&condicion);

		  if (condicion % 2 == 0){// La condicion no funciona con un % 2 debido a que no estas diciendo que valor debe ser el resto para que 'printf numero par' entonces se pone == 0 que es el valor del resto para que imprima en pantalla la condición
		  printf("El numero es par\n");
		  }else{
			  printf("El numero es impar\n");
		  }
		  return 0;
}
