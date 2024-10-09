#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//esto es un comentario
/**
 *	Este es un codigo de pruebas de programación
 *
 *	Autor: Samuel Carías
 */

int suma(int num1, int num2){
return num1+num2;
}


void resta(){
int valor;
}

void multiplicaion(){
int valor;
}

void division(){
int valor;
}
void calcularRaiz(){
int valor;
double raiz;
	//Parte de calculo de una raiz
	printf("Introduzca un numero para calcular su raiz\n");
	scanf("%d",&valor);
	raiz = sqrt(valor);
	printf("La raiz cuadrada de %d es %lf\n",valor,raiz);
}
void CalcularAreaDeUnCirculo (){

	double radio,area;

	//Parte de calaculo para calcular el radio del circulo
	printf("Introduzca el radio del circulo para calcular su area\n");
	scanf("%lf",&radio);
	area= radio + radio + M_PI;
	printf("El area del circulo es %lf\n",area);
}
int main(){
	
calcularRaiz();


CalcularAreaDeUnCirculo();
	return 0;


}
