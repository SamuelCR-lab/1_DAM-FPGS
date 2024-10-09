#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double raiz;
	int valor;

	//Parte de calculo de una raiz
	printf("Introduzca un numero para calcular su raiz\n");
	scanf("%d",&valor);
	raiz = sqrt(valor);
	printf("La raiz cuadrada de %d es %lf\n",valor,raiz);
	return 0;


}
