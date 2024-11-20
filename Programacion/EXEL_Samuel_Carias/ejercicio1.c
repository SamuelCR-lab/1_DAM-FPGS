#include <stdio.h>
#include <stdlib.h>


int main(){
	int n1 = 0;
	printf("Ingresa un número entero: ");
	scanf("%d",&n1);
	if (n1 < 0){
	printf("El número %d es negativo\n",n1);
	}
	if (n1 > 0){
	printf("El número %d es positivo\n",n1);
	}
	if (n1 == 0){
	printf("El número ingresado es cero\n");
	}


return 0;
}
