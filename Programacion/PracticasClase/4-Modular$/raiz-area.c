#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double raiz;
	int valor;
	double radio,area;

	//Parte de calculo de una raiz
	printf("Introduzca un numero para calcular su raiz\n");
	scanf("%d",&valor);
	raiz = sqrt(valor);
	printf("La raiz cuadrada de %d es %lf\n",valor,raiz);
	//Parte de calaculo para calcular el radio del circulo
	printf("Introduzca el radio del circulo para calcular su area\n");
	scanf("%lf",&radio);
	area= radio + radio + M_PI;
	printf("El area del circulo es %lf\n",area);
	return 0;


}
