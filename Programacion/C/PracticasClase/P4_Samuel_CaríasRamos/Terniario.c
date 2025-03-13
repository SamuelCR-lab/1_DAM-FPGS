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
scanf("%d",&condicion);
c = (condicion > 5) ? 'S' : 'N';
printf("%c\n",c);
 return 0;
}
