#include <stdio.h>
#include <stdlib.h>



/** Operadores de COMPARACION SON: 
 *	< menor
 *	> Mayor
 *	<= menor o igual
 *	>= mayor o igual
 *	== igual
 *	!= distinto
 *	% dividir un numero que se guarda en condicion y saber si es par o impar poniendo == 0
 *
 */
float descuento (float a, float rol){
return a * rol;
}

int main (){
	float a;
	char c;
	float rol;
	printf("Escribe el monto total de tu compra :");
	scanf("%f",&a);
	printf("Cual rol tienes ? = 'Profesor' escribe 	P, 'Estudiante' escribe E, 'Otro' escribe O\n");
	scanf(" %c",&c);
	if (c == 'P'){
		rol = 0.90;
		printf("Profesor recibe un descuento del 10 porciento, el monto total de tu compra es =%f\n",descuento(a,rol));
	}else if (c == 'E'){
		rol = 0.85;
		printf("Estudiante recibe un descuento del 15 porciento, el monto total de tu compra es =%f\n",descuento(a,rol));
	}else{
		printf("Otro no recibe descuento =%f\n",a);
	}
	return 0;
}
