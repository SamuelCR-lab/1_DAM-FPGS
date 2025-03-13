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
printf("Introduce un numero del (1-7) : ");
scanf("%d",&condicion);
c = condicion; 
switch (c){
	case 1:
		printf("Resultado : Lunes\n");
		break;
	case 2:
		printf("Resultado : Martes\n");
		break;
	case 3:
		printf("Resultado : Miércoles\n");
		break;
	case 4:
		printf("Resultado : Jueves\n");
		break;
	case 5:
		printf("Resultado : Viernes\n");
		break;
	case 6:
		printf("Resultado : Sabado\n");
		break;
	case 7:
		printf("Resultado : Domingo\n");
		break;
	default : 
		printf("Número inválido\n");
}
 return 0;
}
