#include <stdio.h>
#include <stdlib.h>
int main(){
	char str;
	int numero1;
	numero1 = 1;
	int suma;
	printf("Introduce la letra a: ");
	scanf("%c",&str);
	suma = numero1+str;

	printf("Suma de 1+a =%i\n",suma);
	printf("Suma de 1+a =%c\n",suma);
	return 0;
}
