#include <stdio.h>
#include <stdlib.h>



/** Operadores de COMPARACION SON: 
 *	< menor
 *	> Mayor
 *	<= menor o igual
 *	>= mayor o igual
 *	== igual
 *	!= distinto
 *	&&: and, y, conjuncion copulativa.
 *	||: or, o, conjuncion disyuntiva.
 *
 */


int main (){
int condicion;
//Versionado
// El = es un operador de asignancion

scanf("%d",&condicion);
		  if (condicion == 0){
		  // == Es el operador de comparacion
		  printf("Condicion vale 0\n");
		  }
		  if (condicion == 1){
			  printf("Condicion no vale 1\n");
		  }
		  if (condicion != 0 && condicion != 1){
		  	printf("Condicion no vale ni 0 ni 1\n");
		  }
		  return 0;
}
