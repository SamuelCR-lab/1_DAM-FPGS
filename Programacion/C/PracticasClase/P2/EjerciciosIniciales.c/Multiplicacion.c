#include <stdio.h>
#include <stdlib.h>
int main(){
	int numero1 = 12;
	int numero2 = 3;
	float suma,resta,multiplicacion,division;
	suma = numero1+numero2;
	resta = numero2-numero1;
	multiplicacion = numero1*numero2;
	division = numero2/numero1;
	printf("Suma%f\n",suma);
	printf("Resta%f\n",resta);
	printf("Multiplicacion%f\n",multiplicacion);
	printf("Division%f\n",division);
	return 0;
}
