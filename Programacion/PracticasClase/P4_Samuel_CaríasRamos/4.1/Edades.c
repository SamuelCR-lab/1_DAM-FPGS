#include <stdio.h>
#include <stdlib.h>



/** Operadores de COMPARACION SON: 
 *	< menor
 *	> Mayor
 *	<= menor o igual
 *	>= mayor o igual
 *	== igual
 *	!= distinto
 *
 *
 */


int main (){
int condicion;
printf("Escribe tu edad :\n");
// El = es un operador de asignancion
scanf("%d",&condicion);

		  if (condicion <= 12){
		  // == Es el operador de comparacion
		  printf("Niño\n");
		  }else if (condicion >= 12 && condicion <= 17){
			  printf("Adolecente\n");

		  }else if (condicion >= 18 && condicion <= 64){
			  printf("Adulto\n");

		  }else{
			  printf("Mayor\n");
		  }
		  return 0;
}
