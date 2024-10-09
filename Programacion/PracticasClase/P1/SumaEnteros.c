#include <stdio.h>
#include <stdlib.h>
int main(){
	int numero1;
	int numero2;
	int suma,resta,multiplicacion,division;
	printf("Introduce un Número cualquiera entero: ");
	scanf("%d",&numero1);
	printf("Introduce un Número Cualquiera entero: ");
	scanf("%d",&numero2);
	suma = numero1+numero2;
	resta = numero1-numero2;
	multiplicacion = numero1*numero2;
	division = numero1/numero2;
	printf("Resultado_Suma =%d\n",suma);
	printf("Resultado_Resta =%d\n",resta);
	printf("Resultado_Multiplicacion =%d\n",multiplicacion);
	printf("Resultado_Division =%d\n",division);
	return 0;
}
