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
 */
int es_mayuscula(char letra){
	if (letra >= 'A' && letra <= 'Z'){//En la funcion es_mayuscula ponemos la condicion del que el valor que almacenamos en letra si se encuentra entre A y representado con los dos && Z siendo este el ultimo caracter de nuestro abecedario que returne 1 y un printf donde exprese la funcion 
		printf("La letra %c es mayúscula.\n",letra);
		return 1;
	}else if(letra >= 'a' && letra <= 'z'){//En este else if haremos lo contrario a lo antes realizado en las letras que si es de a hasta la z minuscula diga que no es mayuscula
		printf("la letra %c no es mayúscula.\n",letra);
		return 0;
	}else{
		printf("El caracter ingresado no es una letra");
	}
	return 0;
}

void calcular_factorial(int num){//no sabia como calcular el factorial y me intente basar en el examen que vi una funcion parecida y no funciona espero saber como se hace en clase porque lo busque en internet y me salen cosas que no hemos dado
	int factorial;
	int resultadofactorial;
	if (num == 0){
		printf("El factorial del %d es :",num);
	}else{
		factorial == num - 1;
		resultadofactorial == num * factorial;
		printf("El factorial del %d es : %d",num,resultadofactorial);
	}

}

int encontrar_maximo(int num1, int num2){
	return (num1 > num2) ? num1 : num2;//Esta funcion hara saber si el numero 1 y el 2 son mayor uno del otro respetivamante y viceseversa por el ? si no se cumple lo anterior
}

double convertir_celsius_a_fahrenheit(double celsius){
	double fahrenheit;//Declaramos la variable Fahrenheit para que la operacion de cambio de celsius a dicha unidad de medicion se realice como esta expresada debajo, con una formula extraida de internet.
		fahrenheit = (celsius * 9/5)+32;
	       	printf("La temperatura en Fahrenheit es %lf.",fahrenheit);	
	return 0;
}
void intercambiar_numero(){
	int num1;
	int num2;
		printf("Introduce el primer número: ");//Para intercambiar el número introducido lo que hago es asignarle a la variable num2 el primer numero 
		scanf(" %d",&num2);
		printf("Introduce el segundo número: ");//En este caso lo mismo que en el primer numero pero al contrario
		scanf(" %d",&num1);
		printf("Después de intercambiar, el primer número es %d, el segundo es %d.",num2,num2);
}
double calcular_potencia(double base, int exponente){
	if (base == 0){
		printf("Cero elevado a cualquier exponente es 0.\n");	
	}else if (exponente == 0){
		printf("Cualquier número con exponente 0 es 1.\n");	
	}else {
	return 1;//Lo intente realizar con base ^ exponente pero no existe como math.h 
	}
}

int main (){
	int opcion;
	printf("markdown\n\
		Copiar código\n\
		Selecciona una opción:\n\
		1. Verificar si un carácter es mayúscula.\n\
		2. Calcular el factorial de un número.\n\
		3. Encontrar el máximo de dos números.\n\
		4. Convertir grados Celsius a Fahrenheit.\n\
		5. Intercambiar dos números. \n\
		6. Calcular la potencia de un número. \n\
		7. Salir. \n");
	scanf(" %d",&opcion);
	switch (opcion){
		case 1:
		char letra;//declaramos la variable que utilizara la funcion es_mayuscula posterirormente
			printf("Opcion: 1\n");
			printf("Introduce una letra cualquiera : ");
			scanf(" %c",&letra);//guardamos la variable letra 
			es_mayuscula(letra);//solicitamos a la funcion es_mayuscula que funcione con la variable letra
			break;
		case 2:
		int num;
			printf("Opcion: 2\n");
			printf("Introduce un número entero positivo: ");
			scanf(" %d",&num);
			calcular_factorial(num);
			break;
		case 3:
		int num1;
		int num2;
		int maximo;
			printf("Opcion: 3\n");
			printf("Introduce un número entero : ");
			scanf(" %d",&num1);
			printf("Introduce un número entero : ");
			scanf(" %d",&num2);
			maximo = encontrar_maximo(num1, num2);
			printf("El maximo entre %d y %d es %d.\n",num1,num2,maximo);
			break;
		case 4:
		double celsius;
			printf("Opcion: 4\n");
			printf("Introduce la temperatura en Celsius: ");
			scanf(" %lf",&celsius);
			convertir_celsius_a_fahrenheit(celsius);
			break;
		case 5:
			intercambiar_numero();
			break;
		case 6://No se como realizar este apartado por recursión debido a que no lo hemos dado en clase y el ^ no me ha funcionado
		double base;
		int exponente;
		double resultado;
			printf("Introduce la base: ");
			scanf(" %lf",&base);
			printf("Introduce el exponente: ");
			scanf(" %d",&exponente);
			resultado = calcular_potencia(base, exponente);
			printf("%lf elevado a la %d es %lf.\n",base,exponente,resultado);
			break;
		case 7:
			printf("Has Salido\n");
		default:
                        if (opcion > 7){

                        printf("Has salido, no has seleccionado ninguna opcion\n");
                        }
                        break;
	}
	
return 0;
}




