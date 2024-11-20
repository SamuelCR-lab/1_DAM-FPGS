#include <stdio.h>
#include <stdlib.h>


int main(){
	int n1 = 0;
	int comparacion;
	printf("Introduzca un número entero: ");
	scanf("%d",&n1);
	comparacion = (n1 % 2 == 0) ? printf("El número %d es par\n", n1) : printf("El número %d es impar\n", n1);

return 0;
}
