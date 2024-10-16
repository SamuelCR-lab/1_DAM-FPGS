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

void calcularAreaCirculo(){
double area,radio;
	printf("Introduce el radio del circulo: ");
	scanf("%lf",&radio);
	area= radio * radio * M_PI;
	printf("El area del circulo es %lf\n",area);
		
}
void calcularAreaCuadrado(){
float lado;
double area;
	printf("Introduce el lado del cuadrado: ");
	scanf("%f",&lado);
	area= lado * lado;
	printf("El area del cuadrado es %lf\n",area);

}

double calcular_promedio_tres_num(double num1, double num2, double num3){
return (num1+num2+num3/3);//esto es lo que va a resultar cuan la funcion void promedio llame a la double calcular promedio
}
double calcular_promedio_cuatro_num(double num1, double num2, double num3,double num4){
return (num1+num2+num3+num4/4);
}

void promedio(){
	int numero;
	int num1;
	int num2;
	int num3;
	int num4;
	printf("¿De cuántos números quiere hacer el promedio? (3 o 4) : ");
	scanf(" %d",&numero);
	if (numero == 3){
		printf("Introduzca el primer número: ");
		scanf(" %d",&num1);
		printf("Introduzca el segundo número: ");
		scanf(" %d",&num2);
		printf("Introduzca el tercer número: ");
		scanf(" %d",&num3);

		printf("El promedio de %d, %d y %d es = %lf ",num1,num2,num3,calcular_promedio_tres_num(num1,num2,num3));
       
	}else if (numero == 4){
		printf("Introduzca el primer número: ");
		scanf(" %d",&num1);
		printf("Introduzca el segundo número: ");
		scanf(" %d",&num2);
		printf("Introduzca el tercer número: ");
		scanf(" %d",&num3);
		printf("Introduzca el cuarto número: ");
		scanf(" %d",&num4);

	printf("El promedio de %d, %d, %d y %d es = %lf ",num1,num2,num3,num4,calcular_promedio_cuatro_num(num1,num2,num3,num4));

	}else{
	printf("Error al calcaular la funcion promedio");
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
		char letra;
			printf("Opcion: 1\n");
			printf("Introduce una letra cualquiera : ");
			scanf(" %c",&letra);
			es_mayuscula(letra);
			break;
		case 2:
			printf("Opcion: 2\n");
			printf("Introduce un número cualquiera : ");
			break;
		case 3:
		promedio();
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		case 7:
			printf("Has salido\n");
			break;
		  default:
                        if (opcion >= 7){

                        printf("Has salido\n");
                        }
                        break;
	}
	
return 0;
}




