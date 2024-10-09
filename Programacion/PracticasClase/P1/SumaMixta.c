#include <stdio.h>
#include <stdlib.h>
int main(){
int numero1;
int numero2;
float suma,resta,multiplicacion,division;
	printf("Introduce un Número cualquiera Entero: ");
	scanf("%d",&numero1);
	printf("Introduce un Número Cualquiera Entero: ");
	scanf("%d",&numero2);
	suma = numero1+numero2;
	resta = numero1-numero2;
	multiplicacion = numero1*numero2;
	division = numero1/numero2;
	printf("resultado_Suma =%f\n",suma);
	printf("Resultado_Resta =%f\n",resta);
	printf("Resultado_Multiplicacion =%f\n",multiplicacion);
	printf("Resultado_Division =%f\n",division);
	return 0;
}
