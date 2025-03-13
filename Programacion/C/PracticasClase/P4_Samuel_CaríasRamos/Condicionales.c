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
// El = es un operador de asignancion
scanf("%d",&condicion);

		  if (condicion == 0){
		  // == Es el operador de comparacion
		  printf("Condicion vale 0\n");
		  }else if (condicion == 1){
			  printf("Condicion vale 1\n");

		  }else if (condicion == 2){
			  printf("Condicion vale 2\n");

		  }else if (condicion == 3){
			  printf("Condicion vale 3\n");

		  }else{
		  	printf("Condicion no vale ni 0 ni 1\n");
		  }
		  return 0;
}
