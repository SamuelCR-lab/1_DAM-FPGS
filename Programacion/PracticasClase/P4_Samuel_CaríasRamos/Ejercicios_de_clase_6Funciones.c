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
void letraVocal(){
char  letra;
	printf("Opcion: 1\n");
	printf("Introduce una letra cualquiera : ");
	scanf(" %c",&letra);
	if (letra == 'a'|| letra == 'A'){
		printf("La letra %c es vocal\n",letra);
	}else if(letra == 'e'|| letra == 'E'){
		printf("la letra %c es vocal\n",letra);
	}else if(letra == 'i'|| letra == 'I'){
		printf("la letra %c es vocal\n",letra);
	}else if(letra == 'o'|| letra == 'O'){
		printf("la letra %c es vocal\n",letra);
	}else if(letra == 'u'|| letra == 'U'){
		printf("la letra %c es vocal\n",letra);
	}else{
		printf("la letra %c no es vocal\n",letra);
}
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
	int area;
	int opcion;
	printf("Selecciona una opción : \n"); 
	printf("1. Verificar si una letra es una vocal.\n");
	printf("2. Calcular el área de una figura (círculo o cuadrado).\n");
	printf("3. Calcular el promedio de 3 o 4 números.\n");
	printf("4. Convertir una hora en formato de 24 horas a 12 horas.\n");
	printf("5. Verificar si un número menor de 10 es primo.\n");
	printf("6.Comparar tres números.\n");
	printf("7. Salir.\n");
	scanf(" %d",&opcion);
	switch (opcion){
		case 1:
		letraVocal();
		case 2:
		printf("Opcion: 2\n");
		printf("Que figura deseas calcular (circulo=1, cuadrado=2)? : ");
		scanf(" %d",&area);
		if (area == 1){
			calcularAreaCirculo();	
		}else if (area == 2){
			calcularAreaCuadrado();
		}else 
		printf("Error en la función calcular_area_figura\n");
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




