#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 *	Autor: Samuel Carías Ramos
 *
 * Operadores de COMPARACION SON: 
 *
 *	< menor
 *	> Mayor
 *	<= menor o igual
 *	>= mayor o igual
 *	== igual
 *	!= distinto
 *
 *
 */
int es_mayuscula(char letra){
	if (letra >= 'A' && letra <= 'Z'){
		printf("La letra %c es mayúscula.\n",letra);
		return 1;
	}else if(letra >= 'a'|| letra <= 'z'){
		printf("la letra %c no es mayúscula.\n",letra);
		return 0;
	}else{
		printf("El caracter ingresado no es una letra");
	}
	
return 0;
}




