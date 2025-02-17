#include <stdio.h>
#include <stdlib.h>

int numerotriangular(int numero);

int main(){
	int numero;
	printf("Introduce un cualquiera: ");
	scanf("%d",&numero);
	printf("El numero triangular del %d es = %d\n",numero, numerotriangular(numero));
}
int numerotriangular(int numero){
	static int triangular = 0;
	if (numero == 0){
		return triangular;
	}
	triangular += numero; 
	return numerotriangular(numero-1);
}