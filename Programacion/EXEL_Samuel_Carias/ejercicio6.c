#include <stdio.h>
#include <stdlib.h>


int main(){
	int n1;
	int comparacion;
	comparacion = (n1 <= 10 && n1 >= 1);
	do{
		printf("Introduce números enteros: ");
		scanf("%d",&n1);
		if (n1 < 1 && n1 > 10){ 
			printf("Número no válido.\n");
	} 
	}while (comparacion);
	printf("Has ingresado el número %d.\n",n1);

return 0;
}
