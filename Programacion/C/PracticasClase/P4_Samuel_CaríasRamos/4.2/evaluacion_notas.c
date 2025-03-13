#include <stdio.h>
#include <stdlib.h>



/** Operadores de COMPARACION SON: 
 *	< menor
 *	> Mayor
 *	<= menor o igual
 *	>= mayor o igual
 *	== igual
 *	!= distinto
 *	: Funciona como un else
 *
 */


int main (){
int condicion;
char c;
// El = es un operador de asignancion
printf("Introduce la calificacion : ");
scanf("%d",&condicion);
c = (condicion >= 5) ? printf("Aprobado\n") : printf("Suspenso\n");
 return 0;
}
